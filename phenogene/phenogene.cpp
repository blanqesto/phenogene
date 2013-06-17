#include "phenogene.h"
#include "ui_phenogene.h"


/*
 *Train Tab
 *Browse Input File
*/
void Phenogene::on_pushButton_5_clicked()
{
    QString fileName=filePath= fileDialog.getOpenFileName(this, tr("Open File"), "", tr("Files (*.*)"));
    network.input_file=fileName.toAscii().constData();
    QStringList filename = fileName.split("/");
    ui->label_2->setText(filename[filename.length()-1]);
    ui->label_22->setText(ui->label_2->text()+".w");
    ui->label_24->setText(ui->label_2->text()+".w");
    network.weights_file=network.input_file+".w";
    network.output_file=network.input_file+".out";
}


/*
 *Train Tab
 *Browse Output File
*/
void Phenogene::on_pushButton_3_clicked()
{
    QString fileName=filePath= fileDialog.getOpenFileName(this, tr("Open File"), filePath, tr("Files (*.*)"));
    network.expected_out_file=fileName.toAscii().constData();
    QStringList filename = fileName.split("/");
    ui->label_10->setText(filename[filename.length()-1]);

}


/*
 *Train Tab
 *Gene Numbers
*/
void Phenogene::on_lineEdit_editingFinished()
{
    ui->lineEdit_6->setText(ui->lineEdit->text());
    network.input_len=ui->lineEdit->text().toInt();

}

/*
 *Train Tab
 *Hidden Nodes
*/
void Phenogene::on_lineEdit_2_editingFinished()
{
    ui->lineEdit_7->setText(ui->lineEdit_2->text());
    network.hidden_len=ui->lineEdit_2->text().toInt();
}

/*
 *Train Tab
 *Output Nodes
*/
void Phenogene::on_lineEdit_5_editingFinished()
{
    ui->lineEdit_10->setText(ui->lineEdit_5->text());
    network.output_len=ui->lineEdit_5->text().toInt();
}

/*
 *Train Tab
 *Learning Rate
*/
void Phenogene::on_lineEdit_3_editingFinished()
{
    ui->lineEdit_8->setText(ui->lineEdit_3->text());
    network.learning_rate=ui->lineEdit_3->text().toDouble();
}

/*
 *Train Tab
 *Acceptable Error
*/
void Phenogene::on_lineEdit_4_editingFinished()
{
    ui->lineEdit_9->setText(ui->lineEdit_4->text());
    network.minimum_error=ui->lineEdit_4->text().toDouble();
}

/*
 *Train Tab
 *Activation Function
*/
void Phenogene::on_listWidget_currentRowChanged(int currentRow)
{
    ui->listWidget_2->setCurrentRow(currentRow);
    network.AV=ui->listWidget->currentRow();
}

/*
 *Train Tab
 *Output keywrods
*/
void Phenogene::on_textEdit_4_textChanged()
{
    ui->textBrowser_4->setText(ui->textEdit_4->document()->toPlainText());
}


/*
 *Predict Tab
 *Browse Input File
*/
void Phenogene::on_pushButton_4_clicked()
{
    QString fileName=filePath= fileDialog.getOpenFileName(this, tr("Open File"), "", tr("Files (*.*)"));
    network.input_file=fileName.toAscii().constData();
    network.output_file=network.input_file+".out";
    QStringList filename = fileName.split("/");
    ui->label_11->setText(filename[filename.length()-1]);
}

/*
 *Predict Tab
 *Change Weights File
*/
void Phenogene::on_pushButton_6_clicked()
{
    QString fileName=filePath= fileDialog.getOpenFileName(this, tr("Open File"), filePath, tr("Files (*.*)"));
    network.weights_file=fileName.toAscii().constData();
    QStringList filename = fileName.split("/");
    ui->label_24->setText(filename[filename.length()-1]);
}


void Phenogene::on_quitButton_clicked()
{
    qApp->quit();
}
