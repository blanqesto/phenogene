#ifndef PHENOGENE_H
#define PHENOGENE_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <qapplication.h>
#include <qmainwindow.h>
#include <qvalidator.h>
#include <qlineedit.h>
#include <QRegExp>
#include "NN.h"

namespace Ui {
class Phenogene;
}

class Phenogene : public QMainWindow
{
    Neural_Network network;
    QString filePath;
    QFileDialog fileDialog;
    QByteArray state;
    Q_OBJECT
    
public:
    explicit Phenogene(QWidget *parent = 0);
    ~Phenogene();
    
private slots:
    void on_quitButton_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();


    void on_lineEdit_editingFinished();
    void on_lineEdit_2_editingFinished();
    void on_lineEdit_3_editingFinished();
    void on_lineEdit_4_editingFinished();
    void on_lineEdit_5_editingFinished();

    void on_listWidget_currentRowChanged(int currentRow);


    void on_pushButton_clicked();

private:
    Ui::Phenogene *ui;
};

#endif // PHENOGENE_H
