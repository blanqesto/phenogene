#include <GUI.h>
#include <ui_phenogene.h>


GUI::GUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GUI)
{
    set_validators();
    set_styleSheet();
}

void GUI::set_styleSheet()
{
    ui->label_28->setStyleSheet("QLabel { color : grey; }");
    ui->label_29->setStyleSheet("QLabel { color : grey; }");
    ui->label_32->setStyleSheet("QLabel { color : grey; }");
    ui->label_33->setStyleSheet("QLabel { color : grey; }");
}

void GUI::set_validators()
{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QIntValidator (1,100, this));
    ui->lineEdit_3->setValidator(new QIntValidator (0,1, this));
    QRegExp re ("0\\.[0-9]?[0-9]?[1-9]|1(\\.[0-9]?[0-9]?[0-9])?|2");
    QRegExp re2 ("[0-9][0-9]?[0-9]?(\\.[0-9]?[0-9]?[0-9])?");
    QRegExpValidator *valid = new QRegExpValidator(re, this);
    QRegExpValidator *valid2 = new QRegExpValidator(re2, this);
    ui->lineEdit_3->setValidator(valid);
    ui->lineEdit_4->setValidator(valid2);
}

GUI::~GUI()
{
    delete ui;
}
