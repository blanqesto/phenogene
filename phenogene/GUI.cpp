#include <GUI.h>
#include <ui_phenogene.h>


/*
 *Train Tab
 *Browse Input File
 *
 *Allows the user to select a file
 *Saves the file name in the appropriate data structures
*/
void GUI::on_pushButton_5_clicked()
{
    QString fileName=filePath= fileDialog.getOpenFileName(this, tr("Open File"), "", tr("Files (*.*)"));
    string temp = fileName.toAscii().constData();
    fm.set_input_file(temp);
    QStringList filename = fileName.split("/");
    ui->label_2->setText(filename[filename.length()-1]);
    ui->label_22->setText(ui->label_2->text()+".w");
    ui->label_24->setText(ui->label_2->text()+".w");
    fm.set_weights_file(temp+".w");
    fm.set_output_file(temp+".out");
}


/*
 *Train Tab
 *Browse Output File
 *
 *Allows the user to select a file
 *Saves the file name in the appropriate data structures
*/
void GUI::on_pushButton_3_clicked()
{
    QString fileName=filePath= fileDialog.getOpenFileName(this, tr("Open File"), filePath, tr("Files (*.*)"));
    fm.set_expected_out_file(fileName.toAscii().constData());
    QStringList filename = fileName.split("/");
    ui->label_10->setText(filename[filename.length()-1]);
}


/*
 *Train Tab
 *Gene Numbers
 *
 *Syncronise gene numbers between tabs
*/
void GUI::on_lineEdit_editingFinished()
{
    ui->lineEdit_6->setText(ui->lineEdit->text());
    fm.n.set_input_len(ui->lineEdit->text().toInt()*2);
}


/*
 *Train Tab
 *Learning Rate
 *
 *Syncronise learning rate between tabs
*/
void GUI::on_lineEdit_3_editingFinished()
{
    ui->lineEdit_8->setText(ui->lineEdit_3->text());
    fm.n.set_learning_rate(ui->lineEdit_3->text().toDouble());
}

/*
 *Train Tab
 *Acceptable Error
 *
 *Syncronise minimum error between tabs
*/
void GUI::on_lineEdit_4_editingFinished()
{
    ui->lineEdit_9->setText(ui->lineEdit_4->text());
    fm.n.set_minimum_error(ui->lineEdit_4->text().toDouble());
}

/*
 *Train Tab
 *Activation Function
 *
 *Syncronise activation function selected between tabs
*/
void GUI::on_listWidget_currentRowChanged(int currentRow)
{
    ui->listWidget_2->setCurrentRow(currentRow);
    fm.n.set_AV(ui->listWidget->currentRow());
}

/*
 *Train Tab
 *Output keywrods
 *
 *Syncronise output keywords entered between tabs
*/
void GUI::on_textEdit_4_textChanged()
{
    QString temp = ui->textEdit_4->document()->toPlainText();
    ui->textBrowser_4->setText(temp);
    string stemp = temp.toAscii().constData();
    istringstream is(stemp.c_str());
    string splitted;
    int c=0;
    while(getline(is,splitted,'\n'))
    {
        if(splitted!="")c++;
    }
    fm.n.set_output_len(c);
}


/*
 *Predict Tab
 *Browse Input File
 *
 *Allows the user to select a file
 *Saves the file name in the appropriate data structures
*/
void GUI::on_pushButton_4_clicked()
{
    QString fileName=filePath= fileDialog.getOpenFileName(this, tr("Open File"), "", tr("Files (*.*)"));
    string temp = fileName.toAscii().constData();
    fm.set_input_file(temp);
    fm.set_output_file(temp+".out");
    QStringList filename = fileName.split("/");
    ui->label_11->setText(filename[filename.length()-1]);
}

/*
 *Predict Tab
 *Change Weights File
 *
 *Allows the user to select a file
 *Saves the file name in the appropriate data structures
*/
void GUI::on_pushButton_6_clicked()
{
    QString fileName=filePath= fileDialog.getOpenFileName(this, tr("Open File"), filePath, tr("Files (*.*)"));
    fm.set_weights_file(fileName.toAscii().constData());
    QStringList filename = fileName.split("/");
    ui->label_24->setText(filename[filename.length()-1]);
}


void GUI::on_quitButton_clicked()
{
    qApp->quit();
}
