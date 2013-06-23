#include <GUI.h>
#include <ui_phenogene.h>


/**
 * \brief GUI class constructor
*/
GUI::GUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GUI)
{
    set_validators();
    set_styleSheet();
}

/**
 * \brief Set style sheet configuration:
 Set color grey for some labels
*/
void GUI::set_styleSheet()
{
    ui->label_28->setStyleSheet("QLabel { color : grey; }");
    ui->label_29->setStyleSheet("QLabel { color : grey; }");
    ui->label_32->setStyleSheet("QLabel { color : grey; }");
    ui->label_33->setStyleSheet("QLabel { color : grey; }");
    ui->label_36->setStyleSheet("QLabel { color : grey; }");
    ui->label_37->setStyleSheet("QLabel { color : grey; }");
    ui->label_38->setStyleSheet("QLabel { color : grey; }");
}

/**
 * \brief Set validators for user input.
*/
void GUI::set_validators()
{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QIntValidator (0,100, this));
    ui->lineEdit_5->setValidator(new QIntValidator (0,100, this));
    ui->lineEdit_10->setValidator(new QIntValidator (0,10000000, this));
    QRegExp re ("0\\.[0-9]?[0-9]?[0-9]?[0-9]?[1-9]|1(\\.[0-9]?[0-9]?[0-9]?[0-9]?[0-9])?|2");
    QRegExp re2 ("[0-9][0-9]?[0-9]?(\\.[0-9]?[0-9]?[0-9]?[0-9]?[0-9])?");
    QRegExp re3 ("0(\\.[0-9]?[0-9]?[0-9]?[0-9]?[0-9])?|1(\\.[0-9]?[0-9]?[0-9]?[0-9]?[0-9])?|2");
    QRegExpValidator *valid = new QRegExpValidator(re, this);
    QRegExpValidator *valid2 = new QRegExpValidator(re2, this);
    QRegExpValidator *valid3 = new QRegExpValidator(re3, this);
    ui->lineEdit_3->setValidator(valid);
    ui->lineEdit_4->setValidator(valid2);
    ui->lineEdit_7->setValidator(valid3);
}

/*
 *GUI destructor
*/
GUI::~GUI()
{
    delete ui;
}
