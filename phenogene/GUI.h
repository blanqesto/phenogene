#ifndef GUI_H
#define GUI_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <qapplication.h>
#include <qmainwindow.h>
#include <qvalidator.h>
#include <qlineedit.h>
#include <QRegExp>
#include <FileManager.h>

namespace Ui {
class GUI;
}

class GUI : public QMainWindow
{
    QString filePath;
    QFileDialog fileDialog;
    QByteArray state;
    Q_OBJECT
    
public:
    explicit GUI(QWidget *parent = 0);
    ~GUI();
    
private slots:
    void on_quitButton_clicked();
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_lineEdit_editingFinished();
    void on_lineEdit_3_editingFinished();
    void on_lineEdit_4_editingFinished();
    void on_textEdit_4_textChanged();
    void on_lineEdit_5_editingFinished();
    void on_lineEdit_7_editingFinished();
    void on_lineEdit_10_editingFinished();
    void on_tabWidget_currentChanged(int index);

private:
    Ui::GUI *ui;
    QString valid_input();
    File_Manager fm;
    void fill_rank();
    void perform_train();
    void perform_test();
    void set_validators();
    void set_styleSheet();
    void display_error(QString);
    void prepare_report();
};

#endif
