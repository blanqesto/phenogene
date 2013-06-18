#include <GUI.h>
#include <ui_phenogene.h>

/*Start Button*/
void GUI::on_pushButton_clicked()
{
    QString er = valid_input();
    if (er != "Error!\n\n")
    {
        display_error(er);
        return;
    }
    fm.fill_rank_output();
    ui->progressBar->setValue(2);
    if(ui->tabWidget->currentIndex()==0) //train
        perform_train();
    else if(ui->tabWidget->currentIndex()==1) //test
            perform_test();

    return;
}

void GUI::perform_train()
{
    ui->progressBar->setValue(0);
    fm.do_function(0); //read input
    ui->progressBar->setValue(15);
    ui->textBrowser_3->setText(fm.get_input_population_string().c_str());
    fm.do_function(3); //read expected output
    ui->progressBar->setValue(30);
    ui->textBrowser->setText(fm.get_read_ex_output_string().c_str());
    fm.n.do_function(5); //train
    ui->progressBar->setValue(80);
    //network.do_function(1); //write output
    //ui->progressBar->setValue(85);
    fm.do_function(4); //write weights
    ui->progressBar->setValue(100);
    return;
}

void GUI::perform_test()
{
    ui->progressBar->setValue(0);
    fm.do_function(0); //read input
    ui->progressBar->setValue(20);
    ui->textBrowser_2->setText(fm.get_input_population_string().c_str());
    fm.do_function(2); //read weights
    ui->progressBar->setValue(30);
    fm.n.do_function(6); //test
    ui->progressBar->setValue(80);
    fm.do_function(1); //write output
    ui->progressBar->setValue(100);
    ui->textBrowser_5->setText(fm.get_output_population_string().c_str());
    return;
}


QString GUI::valid_input()
{
    QString er = "Error!\n\n";
    fill_rank();
    if(ui->lineEdit->text()==""
            || ui->lineEdit_2->text()==""
            || ui->lineEdit_3->text()==""
            || ui->lineEdit_5->text()==""
            ) er += "Fill-in all the network's parameters!\n";
    else
        fori(0,fm.n.get_output_len())
                if(fm.get_rank_output_strings(i)=="")
    {
            fori(0,fm.n.get_output_len())
                    cout << fm.get_rank_output_strings(i) << endl;
        er += "Fill-in all the network's parameters!\n";
        break;
    }
    if (ui->tabWidget->currentIndex()==0) //train tab selected
    {
        if(ui->label_2->text()=="No Selected File"||ui->label_2->text()=="")
            er+="Input file is not selected!\n";
        if(ui->label_10->text()=="No Selected File"||ui->label_10->text()=="")
            er+="Output file is not selected!\n";
    }
    else if (ui->tabWidget->currentIndex()==1) // predict tab selected
    {
        if(ui->label_11->text()=="No Selected File"||ui->label_11->text()=="")
            er+="Input file is not selected!\n";
        if(ui->label_24->text()=="")
            er+="Weights file is not selected!\n";
    }
    return er;
}

void GUI::fill_rank()
{
    /*fill_rank_output*/
    string tempSplit,str = ui->textEdit_4->document()->toPlainText().toAscii().constData();
    std::istringstream s(str.c_str());
    int i = 0;
    while(getline(s,tempSplit,'\n'))
        fm.set_rank_output_strings(i++,tempSplit);
    /*****************/
}

void GUI::display_error(QString er)
{

    QMessageBox msgBox;
    msgBox.setText(er);
    msgBox.exec();
    msgBox.move((GUI::width()-msgBox.width())/2,(GUI::height()-msgBox.height())/2);
    return;
}
