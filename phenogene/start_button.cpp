#include "phenogene.h"
#include "ui_phenogene.h"

/*Start Button*/
void Phenogene::on_pushButton_clicked()
{
    QString er = valid_input();
    if (er != "Error!\n\n")
    {
        display_error(er);
        return;
    }
    fill_rank();
    network.fill_rank_output();
    ui->progressBar->setValue(2);
    if(ui->tabWidget->currentIndex()==0) //train
        perform_train();
    else if(ui->tabWidget->currentIndex()==1) //test
            perform_test();

    return;
}

void Phenogene::perform_train()
{
    ui->progressBar->setValue(0);
    network.do_function(0); //read input
    ui->progressBar->setValue(15);
    ui->textBrowser_3->setText(network.read_input_string.c_str());
    network.do_function(3); //read expected output
    ui->progressBar->setValue(30);
    ui->textBrowser->setText(network.read_ex_output_string.c_str());
    network.do_function(5); //train
    ui->progressBar->setValue(80);
    //network.do_function(1); //write output
    //ui->progressBar->setValue(85);
    network.do_function(4); //write weights
    ui->progressBar->setValue(100);
    return;
}

void Phenogene::perform_test()
{
    ui->progressBar->setValue(0);
    network.do_function(0); //read input
    ui->progressBar->setValue(20);
    ui->textBrowser_2->setText(network.read_input_string.c_str());
    network.do_function(2); //read weights
    ui->progressBar->setValue(30);
    network.do_function(6); //test
    ui->progressBar->setValue(80);
    network.do_function(1); //write output
    ui->progressBar->setValue(100);
    ui->textBrowser_5->setText(network.read_output_string.c_str());
    return;
}


QString Phenogene::valid_input()
{
    QString er = "Error!\n\n";
    if(ui->lineEdit->text()==""
            || ui->lineEdit_2->text()==""
            || ui->lineEdit_3->text()==""
            || ui->lineEdit_5->text()==""
            ) er += "Fill-in all the network's parameters!\n";
    else
    fori(0,network.output_len)
            if(network.rank_output_strings[i]=="")
    {
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

void Phenogene::fill_rank()
{
    /*fill_rank_output*/
    string tempSplit,str = ui->textEdit_4->document()->toPlainText().toAscii().constData();
    std::istringstream s(str.c_str());
    int i = 0;
    while(getline(s,tempSplit,'\n'))
        network.rank_output_strings[i++]=tempSplit;
    /*****************/
}

void Phenogene::display_error(QString er)
{

    QMessageBox msgBox;
    msgBox.setText(er);
    msgBox.exec();
    msgBox.move((Phenogene::width()-msgBox.width())/2,(Phenogene::height()-msgBox.height())/2);
    return;
}
