#include <GUI.h>
#include <ui_phenogene.h>


/*
 *Train Tab
 *Browse Input File
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
*/
void GUI::on_lineEdit_editingFinished()
{
    ui->lineEdit_6->setText(ui->lineEdit->text());
    fm.n.set_input_len(ui->lineEdit->text().toInt());

}

/*
 *Train Tab
 *Hidden Nodes
*/
void GUI::on_lineEdit_2_editingFinished()
{
    ui->lineEdit_7->setText(ui->lineEdit_2->text());
    fm.n.set_hidden_len(ui->lineEdit_2->text().toInt());
}

/*
 *Train Tab
 *Output Nodes
*/
void GUI::on_lineEdit_5_editingFinished()
{
    ui->lineEdit_10->setText(ui->lineEdit_5->text());
    fm.n.set_output_len(ui->lineEdit_5->text().toInt());
}

/*
 *Train Tab
 *Learning Rate
*/
void GUI::on_lineEdit_3_editingFinished()
{
    ui->lineEdit_8->setText(ui->lineEdit_3->text());
    fm.n.set_learning_rate(ui->lineEdit_3->text().toDouble());
}

/*
 *Train Tab
 *Acceptable Error
*/
void GUI::on_lineEdit_4_editingFinished()
{
    ui->lineEdit_9->setText(ui->lineEdit_4->text());
    fm.n.set_minimum_error(ui->lineEdit_4->text().toDouble());
}

/*
 *Train Tab
 *Activation Function
*/
void GUI::on_listWidget_currentRowChanged(int currentRow)
{
    ui->listWidget_2->setCurrentRow(currentRow);
    fm.n.set_AV(ui->listWidget->currentRow());
}

/*
 *Train Tab
 *Output keywrods
*/
void GUI::on_textEdit_4_textChanged()
{
    ui->textBrowser_4->setText(ui->textEdit_4->document()->toPlainText());
}


/*
 *Predict Tab
 *Browse Input File
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
