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

/**
 On Analysis Tab
 \brief Change the view when a user changes tab.
*/
void GUI::on_tabWidget_currentChanged(int index)
{
    ui->label_9->setText("");
    if (index ==2)
    {
        ui->pushButton->hide();
        ui->progressBar->hide();
    }
    else
    {
        ui->pushButton->show();
        ui->progressBar->setValue(0);
        ui->progressBar->show();
    }
}
/**
 On Analysis Tab
 \brief Set hidden nodes numbers.
  \pre Entered is a valid integer number.
  \post Hidden nodes is changed.
*/
void GUI::on_lineEdit_5_editingFinished()
{
    fm.n.set_hidden_len(ui->lineEdit_5->text().toInt());
}

/**
 On Analysis Tab
 \brief Set momentum.
  \pre Entered is a valid double number.
  \post Momentum is changed.
*/
void GUI::on_lineEdit_7_editingFinished()
{
    fm.n.set_momentum(ui->lineEdit_7->text().toDouble());
}

/**
 On Analysis Tab
 \brief Set maximum iterations number.
  \pre Entered is a valid double number.
  \post Maximum iterations number is changed.
*/
void GUI::on_lineEdit_10_editingFinished()
{
    fm.n.set_max_it(ui->lineEdit_10->text().toInt());
}


void GUI::on_quitButton_clicked()
{
    qApp->quit();
}
