#include "phenogene.h"
#include "ui_phenogene.h"

using namespace std;

Phenogene::Phenogene(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Phenogene)
{
    filePath="/home";
    fileDialog.directory().setCurrent(filePath);
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QIntValidator (1,100, this));
    ui->lineEdit_2->setValidator(new QIntValidator (1,100, this));
    ui->lineEdit_5->setValidator(new QIntValidator (1,100, this));
    ui->lineEdit_3->setValidator(new QIntValidator (0,1, this));
    QRegExp re ("[0-1]\\.[0-9][0-9][1-9]|2");
    QRegExp re2 ("[0-9][0-9]?[0-9]?\\.[0-9][0-9]");
    QRegExpValidator *valid = new QRegExpValidator(re, this);
    QRegExpValidator *valid2 = new QRegExpValidator(re2, this);
    ui->lineEdit_3->setValidator(valid);
    ui->lineEdit_4->setValidator(valid2);
    ui->label_28->setStyleSheet("QLabel { color : grey; }");
    ui->label_29->setStyleSheet("QLabel { color : grey; }");
    ui->label_30->setStyleSheet("QLabel { color : grey; }");
    ui->label_31->setStyleSheet("QLabel { color : grey; }");
    ui->label_32->setStyleSheet("QLabel { color : grey; }");
    ui->label_33->setStyleSheet("QLabel { color : grey; }");
}


Phenogene::~Phenogene()
{
    delete ui;
}

void Phenogene::on_quitButton_clicked()
{
    qApp->quit();
}

/*Start Button*/
void Phenogene::on_pushButton_clicked()
{
    QMessageBox msgBox;
    QString er = "Error!\n\n";
    /*fill_rank_output*/
    string tempSplit,str = ui->textBrowser->document()->toPlainText().toAscii().constData();
    std::istringstream s(str.c_str());
    int i = 0;
    while(getline(s,tempSplit,'\n'))
        network.rank_output_strings[i++]=tempSplit;
    /*****************/
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
        if(ui->label_2->text()=="No Selected File")
            er+="Input file is not selected!\n";
        if(ui->label_10->text()=="No Selected File")
            er+="Output file is not selected!\n";
    }
    else if (ui->tabWidget->currentIndex()==1) // predict tab selected
    {
        if(ui->label_11->text()=="No Selected File")
            er+="Input file is not selected!\n";
        if(ui->label_24->text()=="")
            er+="Weights file is not selected!\n";
    }
    if (er != "Error!\n\n")
    {
        msgBox.setText(er);
        msgBox.exec();
        msgBox.move((Phenogene::width()-msgBox.width())/2,(Phenogene::height()-msgBox.height())/2);
        return;
    }

    fori(0,network.output_len)
            if(network.rank_output_strings[i]=="")
    {
            msgBox.setText("some");
            msgBox.exec();
            msgBox.move((Phenogene::width()-msgBox.width())/2,(Phenogene::height()-msgBox.height())/2);
            return;
    }
    fori(0,network.output_len)
            cout << network.rank_output_strings[i]<<endl;
    network.fill_rank_output();
    if(ui->tabWidget->currentIndex()==0) //train
        network.start(0);
    else if(ui->tabWidget->currentIndex()==1) //test
        network.start(1);
    return;
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
 *Output
*/
void Phenogene::on_lineEdit_5_editingFinished()
{
    ui->lineEdit_10->setText(ui->lineEdit_5->text());
    network.output_len=ui->lineEdit_5->text().toInt();
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
