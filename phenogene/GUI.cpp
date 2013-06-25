#include <GUI.h>
#include <ui_phenogene.h>


/**
 On Train Tab
 \brief Browses Input File\n
  Allows the user to select a file.
  \pre Input browse button is clicked.
  \post File path to input file is set.
*/
void GUI::on_pushButton_5_clicked()
{
    QString fileName=filePath= fileDialog.getOpenFileName(this, tr("Open File"), filePath, tr("Files (*.*)"));
    string temp = fileName.toAscii().constData();
    fm.set_input_file(temp);
    QStringList filename = fileName.split("/");
    ui->label_2->setText(filename[filename.length()-1]);
    ui->label_22->setText(ui->label_2->text()+".w");
    ui->label_24->setText(ui->label_2->text()+".w");
    fm.set_weights_file(temp+".w");
    fm.set_output_file(temp+".out");
    fm.set_pg_file(temp+".pg");
}


/**
 On Train Tab
 \brief Browses Expected Output File\n
  Allows the user to select a file.
  \pre Expected-Output browse button is clicked.
  \post File path to expected output file is set.
*/
void GUI::on_pushButton_3_clicked()
{
    QString fileName=filePath= fileDialog.getOpenFileName(this, tr("Open File"), filePath, tr("Files (*.*)"));
    fm.set_expected_out_file(fileName.toAscii().constData());
    QStringList filename = fileName.split("/");
    ui->label_10->setText(filename[filename.length()-1]);
}


/**
 On Train Tab
 \brief Set gene number, aka, input nodes number.
  \pre Entered is a valid integer number.
  \post Input nodes number is set.
*/
void GUI::on_lineEdit_editingFinished()
{
    ui->lineEdit_6->setText(ui->lineEdit->text());
    fm.n.set_input_len(ui->lineEdit->text().toInt());//*2);
    fm.n.set_hidden_len(ceil(fm.n.get_input_len()+fm.n.get_output_len())/2);
    ui->listWidget->clear();
    QListWidgetItem *item[fm.n.get_input_len()];
    fori(0,fm.n.get_input_len())
    {
        item[i]= new QListWidgetItem("Gene#"+QString::number(i+1), ui->listWidget);
        item[i]->setFlags(item[i]->flags() | Qt::ItemIsUserCheckable);
        item[i]->setCheckState(Qt::Checked);
        ui->listWidget->addItem(item[i]);
    }
}


/**
 On Train Tab
 \brief Set learning rate.
  \pre Entered is a valid double number.
  \post Learning rate is set.
*/
void GUI::on_lineEdit_3_editingFinished()
{
    ui->lineEdit_8->setText(ui->lineEdit_3->text());
    fm.n.set_learning_rate(ui->lineEdit_3->text().toDouble());
    ui->lineEdit_27->setText(ui->lineEdit_3->text());
}

/**
 On Train Tab
 \brief Set Acceptable Error.
  \pre Entered is a valid double number.
  \post Minimum error is set.
*/
void GUI::on_lineEdit_4_editingFinished()
{
    ui->lineEdit_9->setText(ui->lineEdit_4->text());
    fm.n.set_minimum_error(ui->lineEdit_4->text().toDouble());
    ui->lineEdit_28->setText(ui->lineEdit_4->text());
}


/**
 On Train Tab
 \brief Set output keywords.
  \pre Entered is a valid strings.
  \post Output nodes number is set.
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


/**
 On Predict Tab
 \brief Browses Input File\n
  Allows the user to select a file.
  \pre Input browse button is clicked.
  \post File path to input file is set.
*/
void GUI::on_pushButton_4_clicked()
{
    QString fileName=filePath= fileDialog.getOpenFileName(this, tr("Open File"), filePath, tr("Files (*.*)"));
    string temp = fileName.toAscii().constData();
    fm.set_input_file(temp);
    fm.set_output_file(temp+".out");
    QStringList filename = fileName.split("/");
    ui->label_11->setText(filename[filename.length()-1]);
}

/**
 On Predict Tab
 \brief Browses Weights File\n
  Allows the user to select a file.
  \pre Weights change button is clicked.
  \post File path to weights file is set.
*/
void GUI::on_pushButton_6_clicked()
{
    QString fileName=filePath= fileDialog.getOpenFileName(this, tr("Open File"), filePath, tr("Files (*.*)"));
    fm.set_weights_file(fileName.toAscii().constData());
    QStringList filename = fileName.split("/");
    ui->label_24->setText(filename[filename.length()-1]);
}
