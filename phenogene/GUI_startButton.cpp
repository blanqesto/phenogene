#include <GUI.h>
#include <ui_phenogene.h>

/**
 \brief Called when start button is pushed.\n
 Determines weather to train/test/analyze, according to the opened tab.
 *
*/
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
    {
        int temp = fm.n.get_input_len();
        perform_train();
        prepare_report();
        fm.n.set_input_len(temp);
    }
    else if(ui->tabWidget->currentIndex()==1) //test
        perform_test();
    return;
}


/**
 \brief Calls file manager rotines to train:\n
 1. read input.\n
 2. read expected output.\n
 3. train.\n
 4. write weights.
*/
void GUI::perform_train()
{
    ui->progressBar->setValue(0);
    fm.do_function(0); //read input
    calculate_check();
    fm.n.set_input_len(actual_input_checked);
    ui->progressBar->setValue(15);
    ui->textBrowser_3->setText(fm.get_input_population_string().c_str());
    fm.do_function(3); //read expected output
    ui->label_9->setText("Training, this might take a while. Please be patient!");
    ui->progressBar->setValue(30);
    ui->textBrowser->setText(fm.get_read_ex_output_string().c_str());
    fm.n.do_function(5); //train
    ui->progressBar->setValue(90);
    //network.do_function(1); //write output
    //ui->progressBar->setValue(85);
    fm.do_function(4); //write weights
    ui->progressBar->setValue(100);
    ui->label_9->setText("Process Completed!");
    return;
}

/**
 \param Calls file manager rotines to test.\n
 1. read input.\n
 2. read weights.\n
 3. test.\n
 4. write output.\n
*/
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
    ui->label_9->setText("Process Completed!");
    ui->textBrowser_5->setText(fm.get_output_population_string().c_str());
    return;
}

/**
 \brief Check that all input needed is filled.
*/
QString GUI::valid_input()
{
    QString er = "Error!\n\n";
    fill_rank();
    if(ui->lineEdit->text()==""
            || ui->lineEdit_3->text()==""
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

/**
 \brief Called once before a train/test is performed.
 \post Rank-Output Strings are filled.
*/
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

/**
 \brief Displays the error message contained in string er.
 \param [Qstring er] Error message to be displayed.
*/
void GUI::display_error(QString er)
{

    QMessageBox msgBox;
    msgBox.setText(er);
    msgBox.exec();
    msgBox.move((GUI::width()-msgBox.width())/2,(GUI::height()-msgBox.height())/2);
    return;
}

/**
 \brief Prepare analysis report
*/
void GUI::prepare_report()
{
    int local_mismatch = fm.n.get_mismatch();
    double percentage = ((double)local_mismatch/fm.n.get_dataset_size())*100;
    ui->lineEdit_19->setText(QString::number(percentage).append("%"));
    ui->lineEdit_20->setText(QString::number(local_mismatch));
    ui->lineEdit_21->setText(QString::number(fm.n.get_iterations()));
    ui->lineEdit_22->setText(QString::number(fm.n.get_least_error()));
    ui->lineEdit_23->setText(QString::number(fm.n.get_input_len()));
    ui->lineEdit_24->setText(QString::number(fm.n.get_hidden_len()));
    ui->lineEdit_25->setText(QString::number(fm.n.get_output_len()));
    ui->lineEdit_26->setText(QString::number(fm.n.get_momentum()));
    return;
}

/**
 * @brief GUI::calculate_check
 * \brief Check which items are checked
 */
void GUI::calculate_check()
{
    actual_input_checked=0;
    fill_n(fm.skip_genes,input_l,1);
    int temp = ui->listWidget->count();
    fori(0,temp)
    {
        bool checked = ui->listWidget->item(i)->checkState()==Qt::Checked;
            if(checked)
            {
                fm.skip_genes[i]=0;
                actual_input_checked++;
            }
    }
}
