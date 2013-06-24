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
    ui->listWidget_2->clear();
    QListWidgetItem *item;
    fori(0,fm.n.get_input_len())
    {
        item = new QListWidgetItem("Gene#"+QString::number(i+1), ui->listWidget);
        item->setFlags(item->flags() | Qt::ItemIsUserCheckable);
        item->setCheckState(Qt::Checked);
        ui->listWidget->addItem(item);
        item = new QListWidgetItem("Gene#"+QString::number(i+1), ui->listWidget_2);
        item->setFlags(item->flags() | Qt::ItemIsUserCheckable);
        item->setCheckState(Qt::Checked);
        ui->listWidget_2->addItem(item);
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


/**
 On Analysis Tab
 \brief Browses PG File\n
  Allows the user to select a file.
  \pre Import configurations button is clicked.
  \post File path to PG file is set.
*/
void GUI::on_pushButton_13_clicked()
{
    QString fileName= fileDialog.getOpenFileName(this, tr("Open File"), filePath, tr("Files (*.*)"));
    if(fileName!="")filePath=fileName;
    else
    {
        display_error(QString::fromStdString("Choose a file!\n"));
        return;
    }
    fm.set_pg_file(fileName.toStdString());
    fm.do_function(5);
    set_pg_parameters();
    display_error(QString::fromStdString("PG file is imported successfully!\n"));
}

/**
 On Analysis Tab
 \brief Saves PG File\n
  Allows the user to save a file.
  \pre Export configurations button is clicked.
  \post File PG is created.
*/
void GUI::on_pushButton_12_clicked()
{
    if(ui->lineEdit_20->text()==""){display_error("Error!\n\nTraining wasn't performed!\n");return;}
    fm.set_pg_file(fm.get_input_file()+".pg");
    fm.do_function(6);
    display_error(QString::fromStdString("PG file is exported successfully!\n"));
}

/**
 \brief Updates parameters after PG file is read
  \pre Configurations has been imported.
  \post All parameters are updated.
*/
void GUI::set_pg_parameters()
{
    ui->lineEdit->setText(QString::number(fm.n.get_input_len()));
    ui->lineEdit_6->setText(QString::number(fm.n.get_input_len()));
    ui->lineEdit_23->setText(QString::number(fm.n.get_input_len()));

    ui->lineEdit_5->setText(QString::number(fm.n.get_hidden_len()));
    ui->lineEdit_24->setText(QString::number(fm.n.get_hidden_len()));
    ui->lineEdit_25->setText(QString::number(fm.n.get_output_len()));
    string temp="";
    fori(0,fm.n.get_output_len()) temp+=fm.get_rank_output_strings(i);
    ui->textEdit_4->setText(QString::fromStdString(temp));
    ui->textBrowser_4->setText(QString::fromStdString(temp));

    ui->lineEdit_3->setText(QString::number(fm.n.get_learning_rate()));
    ui->lineEdit_8->setText(QString::number(fm.n.get_learning_rate()));
    ui->lineEdit_27->setText(QString::number(fm.n.get_learning_rate()));

    ui->lineEdit_7->setText(QString::number(fm.n.get_momentum()));
    ui->lineEdit_26->setText(QString::number(fm.n.get_momentum()));

    ui->lineEdit_4->setText(QString::number(fm.n.get_min_er()));
    ui->lineEdit_9->setText(QString::number(fm.n.get_min_er()));
    ui->lineEdit_28->setText(QString::number(fm.n.get_min_er()));

    ui->lineEdit_10->setText(QString::number(fm.n.get_max_it()));

    ui->lineEdit_19->setText(QString::fromStdString("%"));
    ui->lineEdit_20->setText(QString::fromStdString(""));
    ui->lineEdit_21->setText(QString::fromStdString(""));
    ui->lineEdit_22->setText(QString::fromStdString(""));

    ui->label_24->setText(QString::fromStdString("imported.pg"));
}

void GUI::on_quitButton_clicked()
{
    qApp->quit();
}

/**
 On Analysis Tab
 \brief Saves PG File\n
  Allows the user to save a file.
  \pre Export configurations button is clicked.
  \post File PG is created.
*/
void GUI::on_pushButton_2_clicked()
{
    if(ui->lineEdit_20->text()==""){display_error("Error!\n\nTraining wasn't performed!\n");return;}
    QPrinter printer;
    printer.setOutputFileName(filePath.append("Report.pdf"));
    printer.setOutputFormat(QPrinter::PdfFormat);
    QPainter painter;
    painter.begin(&printer);
    QImage im("../phenogene/images/logo.png");
    painter.drawImage(0,0,im.scaled(200,50));
    QString temp = "";
    temp += "\n\nTraining Report:";
    temp += "\n\n\nLearning Rate = ";
    temp += ui->lineEdit_27->text();
    temp += "\n\n\nMomentum = ";
    temp += ui->lineEdit_26->text();
    temp += "\n\n\nAcceptable error = ";
    temp += ui->lineEdit_28->text();
    temp += "\n\n\nNumber of mismatches = ";
    temp += QString::number(fm.n.get_mismatch());
    temp += "\n\n\nActual error Percentage= ";
    temp += ui->lineEdit_19->text();
    temp += "\n\n\nLeast error reached = ";
    temp += ui->lineEdit_22->text();
    temp += "\n\n\nMaximum iterations number= ";
    temp += QString::number(fm.n.get_max_it());
    temp += "\n\n\nActual iterations number= ";
    temp += QString::number(fm.n.get_iterations());
    temp += "\n\n\nNumber of input nodes = ";
    temp += QString::number(fm.n.get_input_len());
    temp += "\n\n\nNumber of hidden nodes = ";
    temp += QString::number(fm.n.get_hidden_len());
    temp += "\n\n\nNumber of output nodes = ";
    temp += QString::number(fm.n.get_output_len());
    temp += "\n\n\nPhenotypic traits = \n";
    fori(0,fm.n.get_output_len())
            temp += QString::fromStdString(fm.get_rank_output_strings(i)+"\n");
    painter.drawText(printer.pageRect(),temp);
    painter.end();
    display_error("Report written successfully!");
}
