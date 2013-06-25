#include <GUI.h>
#include <ui_phenogene.h>

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
    count_reports++;
    if(ui->lineEdit_20->text()==""){display_error("Error!\n\nTraining wasn't performed!\n");return;}
    QPrinter printer;
    string t = filePath.toStdString()+"Report"+fm.convertInt(count_reports)+".pdf";
    printer.setOutputFileName(QString::fromStdString(t));
    printer.setOutputFormat(QPrinter::PdfFormat);
    QPainter painter;
    painter.begin(&printer);
    QImage im("../phenogene/images/logo.png");
    painter.drawImage(0,0,im.scaled(200,50));
    QString temp = "";
    temp += "\n\nTraining Report:";
    temp += "\n\n  - Learning Rate = ";
    temp += ui->lineEdit_27->text();
    temp += "\n\n  - Momentum = ";
    temp += ui->lineEdit_26->text();
    temp += "\n\n  - Acceptable error = ";
    temp += ui->lineEdit_28->text();
    temp += "\n\n  - Number of mismatches = ";
    temp += QString::number(fm.n.get_mismatch());
    temp += "\n\n  - Actual error Percentage= ";
    temp += ui->lineEdit_19->text();
    temp += "\n\n  - Least error reached = ";
    temp += ui->lineEdit_22->text();
    temp += "\n\n  - Maximum iterations number= ";
    temp += QString::number(fm.n.get_max_it());
    temp += "\n\n  - Actual iterations number= ";
    temp += QString::number(fm.n.get_iterations());
    temp += "\n\n  - Number of input nodes = ";
    temp += QString::number(fm.n.get_input_len());
    temp += "\n\n  - Actual genes used = ";
    temp += QString::number(actual_input_checked);
    temp += "\n";
    fori(0,fm.n.get_input_len())
            if(fm.skip_genes[i]==0)
            temp+= QString::fromStdString("         + Gene# "+fm.convertInt(i+1)+"\n");
    temp += "\n  - Number of hidden nodes = ";
    temp += QString::number(fm.n.get_hidden_len());
    temp += "\n\n  - Number of output nodes = ";
    temp += QString::number(fm.n.get_output_len());
    temp += "\n\n  - Phenotypic traits:\n";
    fori(0,fm.n.get_output_len())
            temp += "         + "+QString::fromStdString(fm.get_rank_output_strings(i)+"\n");
    painter.drawText(printer.pageRect(),temp);
    painter.end();
    display_error("Report written successfully!");
}

