/********************************************************************************
** Form generated from reading UI file 'phenogene.ui'
**
** Created: Sun Jun 23 13:26:21 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHENOGENE_H
#define UI_PHENOGENE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI
{
public:
    QAction *actionParameters;
    QAction *actionWeights;
    QAction *actionOutput;
    QAction *actionInput;
    QAction *actionAll_settings_in_a_ph_file;
    QAction *actionParameters_2;
    QAction *actionWeights_2;
    QAction *actionExpected_Output;
    QAction *actionInput_2;
    QAction *action_ph_file;
    QAction *actionClose;
    QAction *actionProgrammer_guide;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QFrame *frame_2;
    QFrame *line_11;
    QFrame *line_13;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QFrame *line_24;
    QTextBrowser *textBrowser_3;
    QFrame *line_25;
    QLabel *label_2;
    QLabel *label_10;
    QTextBrowser *textBrowser;
    QLabel *label_84;
    QLabel *label_85;
    QFrame *frame;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line;
    QLabel *label_22;
    QFrame *line_27;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_32;
    QLabel *label_33;
    QFrame *line_10;
    QTextEdit *textEdit_4;
    QLabel *label_83;
    QLabel *label_86;
    QLabel *label_87;
    QFrame *line_49;
    QWidget *tab_4;
    QFrame *frame_3;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_8;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *lineEdit_9;
    QFrame *line_14;
    QFrame *line_15;
    QFrame *line_18;
    QFrame *line_19;
    QFrame *line_2;
    QLabel *label_24;
    QPushButton *pushButton_6;
    QFrame *line_26;
    QLabel *label_26;
    QTextBrowser *textBrowser_4;
    QLabel *label_91;
    QFrame *frame_4;
    QFrame *line_21;
    QFrame *line_22;
    QPushButton *pushButton_4;
    QFrame *line_23;
    QLabel *label_11;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_5;
    QLabel *label_88;
    QLabel *label_89;
    QLabel *label_90;
    QLabel *label_92;
    QWidget *tab;
    QLabel *label_5;
    QLabel *label_8;
    QLineEdit *lineEdit_5;
    QFrame *line_9;
    QLabel *label_36;
    QLabel *label_14;
    QLineEdit *lineEdit_7;
    QFrame *line_12;
    QLabel *label_37;
    QLabel *label_38;
    QLineEdit *lineEdit_10;
    QFrame *line_16;
    QLabel *label_15;
    QFrame *line_5;
    QLabel *label_18;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_39;
    QLabel *label_78;
    QLabel *label_79;
    QLabel *label_80;
    QLabel *label_81;
    QLabel *label_82;
    QPushButton *pushButton_2;
    QPushButton *pushButton_12;
    QLineEdit *lineEdit_19;
    QFrame *line_50;
    QLineEdit *lineEdit_20;
    QFrame *line_51;
    QLineEdit *lineEdit_21;
    QFrame *line_52;
    QLineEdit *lineEdit_22;
    QFrame *line_53;
    QLineEdit *lineEdit_23;
    QFrame *line_54;
    QLineEdit *lineEdit_24;
    QFrame *line_55;
    QLineEdit *lineEdit_25;
    QFrame *line_56;
    QLineEdit *lineEdit_26;
    QFrame *line_57;
    QLabel *label_4;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QProgressBar *progressBar;
    QPushButton *pushButton;
    QPushButton *quitButton;
    QLabel *label;
    QLabel *label_9;
    QMenuBar *menuBar;
    QMenu *menuPhenogene;
    QMenu *menuSave;
    QMenu *menuLoad;
    QMenu *menuAbout_us;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GUI)
    {
        if (GUI->objectName().isEmpty())
            GUI->setObjectName(QString::fromUtf8("GUI"));
        GUI->setEnabled(true);
        GUI->resize(600, 600);
        GUI->setMinimumSize(QSize(600, 600));
        GUI->setMaximumSize(QSize(600, 600));
        GUI->setAutoFillBackground(false);
        GUI->setStyleSheet(QString::fromUtf8("border-color: qradialgradient(spread:reflect, cx:0.329, cy:0.307, radius:0.496986, fx:0.32, fy:0.272, stop:0 rgba(33, 240, 132, 255), stop:1 rgba(255, 255, 255, 255));"));
        GUI->setTabShape(QTabWidget::Rounded);
        actionParameters = new QAction(GUI);
        actionParameters->setObjectName(QString::fromUtf8("actionParameters"));
        QFont font;
        font.setFamily(QString::fromUtf8("LMSansDemiCond10"));
        font.setBold(true);
        font.setWeight(75);
        actionParameters->setFont(font);
        actionWeights = new QAction(GUI);
        actionWeights->setObjectName(QString::fromUtf8("actionWeights"));
        actionWeights->setFont(font);
        actionOutput = new QAction(GUI);
        actionOutput->setObjectName(QString::fromUtf8("actionOutput"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("LMSansDemiCond10"));
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        actionOutput->setFont(font1);
        actionInput = new QAction(GUI);
        actionInput->setObjectName(QString::fromUtf8("actionInput"));
        actionInput->setFont(font);
        actionAll_settings_in_a_ph_file = new QAction(GUI);
        actionAll_settings_in_a_ph_file->setObjectName(QString::fromUtf8("actionAll_settings_in_a_ph_file"));
        actionAll_settings_in_a_ph_file->setFont(font);
        actionParameters_2 = new QAction(GUI);
        actionParameters_2->setObjectName(QString::fromUtf8("actionParameters_2"));
        actionParameters_2->setFont(font);
        actionWeights_2 = new QAction(GUI);
        actionWeights_2->setObjectName(QString::fromUtf8("actionWeights_2"));
        actionWeights_2->setFont(font);
        actionExpected_Output = new QAction(GUI);
        actionExpected_Output->setObjectName(QString::fromUtf8("actionExpected_Output"));
        actionExpected_Output->setFont(font);
        actionInput_2 = new QAction(GUI);
        actionInput_2->setObjectName(QString::fromUtf8("actionInput_2"));
        actionInput_2->setFont(font);
        action_ph_file = new QAction(GUI);
        action_ph_file->setObjectName(QString::fromUtf8("action_ph_file"));
        action_ph_file->setFont(font);
        actionClose = new QAction(GUI);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionClose->setFont(font);
        actionProgrammer_guide = new QAction(GUI);
        actionProgrammer_guide->setObjectName(QString::fromUtf8("actionProgrammer_guide"));
        centralWidget = new QWidget(GUI);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 581, 481));
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        frame_2 = new QFrame(tab_3);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(250, 0, 320, 440));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        line_11 = new QFrame(frame_2);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(10, 290, 118, 3));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(frame_2);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(130, 310, 118, 3));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(250, 290, 61, 27));
        pushButton_3->setFont(font);
        pushButton_5 = new QPushButton(frame_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(248, 30, 61, 27));
        pushButton_5->setFont(font);
        line_24 = new QFrame(frame_2);
        line_24->setObjectName(QString::fromUtf8("line_24"));
        line_24->setGeometry(QRect(10, 30, 118, 3));
        line_24->setFrameShape(QFrame::HLine);
        line_24->setFrameShadow(QFrame::Sunken);
        textBrowser_3 = new QTextBrowser(frame_2);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(10, 60, 291, 201));
        textBrowser_3->setFont(font);
        textBrowser_3->setReadOnly(true);
        line_25 = new QFrame(frame_2);
        line_25->setObjectName(QString::fromUtf8("line_25"));
        line_25->setGeometry(QRect(130, 50, 118, 3));
        line_25->setFrameShape(QFrame::HLine);
        line_25->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 201, 19));
        label_2->setFont(font);
        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 290, 201, 19));
        label_10->setFont(font);
        textBrowser = new QTextBrowser(frame_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 320, 291, 111));
        QFont font2;
        font2.setFamily(QString::fromUtf8("LMSansDemiCond10"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        textBrowser->setFont(font2);
        textBrowser->setReadOnly(true);
        label_84 = new QLabel(frame_2);
        label_84->setObjectName(QString::fromUtf8("label_84"));
        label_84->setGeometry(QRect(10, 0, 100, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("LMRomanDemi10"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        label_84->setFont(font3);
        label_84->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 0);\n"
"border-color: rgb(255, 0, 0);"));
        label_84->setFrameShape(QFrame::StyledPanel);
        label_84->setFrameShadow(QFrame::Sunken);
        label_85 = new QLabel(frame_2);
        label_85->setObjectName(QString::fromUtf8("label_85"));
        label_85->setGeometry(QRect(10, 260, 110, 31));
        label_85->setFont(font3);
        label_85->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 0);\n"
"border-color: rgb(255, 0, 0);"));
        label_85->setFrameShape(QFrame::StyledPanel);
        label_85->setFrameShadow(QFrame::Sunken);
        frame = new QFrame(tab_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 251, 441));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 50, 71, 27));
        lineEdit->setFont(font);
        lineEdit->setMaxLength(3);
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 90, 71, 27));
        lineEdit_3->setFont(font);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 111, 19));
        label_3->setFont(font);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 90, 101, 21));
        label_6->setFont(font);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 130, 121, 30));
        label_7->setFont(font);
        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(130, 130, 71, 27));
        lineEdit_4->setFont(font);
        line_3 = new QFrame(frame);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(120, 50, 20, 121));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(frame);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(10, 70, 118, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(frame);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(10, 110, 118, 3));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(frame);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(10, 150, 118, 10));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 330, 251, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_22 = new QLabel(frame);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(20, 378, 201, 21));
        line_27 = new QFrame(frame);
        line_27->setObjectName(QString::fromUtf8("line_27"));
        line_27->setGeometry(QRect(10, 370, 118, 3));
        line_27->setFrameShape(QFrame::HLine);
        line_27->setFrameShadow(QFrame::Sunken);
        label_27 = new QLabel(frame);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(10, 410, 241, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font4.setPointSize(8);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label_27->setFont(font4);
        label_28 = new QLabel(frame);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(200, 30, 40, 19));
        label_28->setFont(font);
        label_29 = new QLabel(frame);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(200, 60, 51, 19));
        label_29->setFont(font);
        label_32 = new QLabel(frame);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(210, 100, 51, 19));
        label_32->setFont(font);
        label_33 = new QLabel(frame);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(200, 140, 51, 19));
        label_33->setFont(font);
        line_10 = new QFrame(frame);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(140, 250, 100, 30));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        textEdit_4 = new QTextEdit(frame);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(10, 200, 231, 131));
        textEdit_4->setFont(font2);
        label_83 = new QLabel(frame);
        label_83->setObjectName(QString::fromUtf8("label_83"));
        label_83->setGeometry(QRect(0, 0, 250, 31));
        label_83->setFont(font3);
        label_83->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 0);\n"
"border-color: rgb(255, 0, 0);"));
        label_83->setFrameShape(QFrame::StyledPanel);
        label_83->setFrameShadow(QFrame::Sunken);
        label_86 = new QLabel(frame);
        label_86->setObjectName(QString::fromUtf8("label_86"));
        label_86->setGeometry(QRect(10, 170, 160, 31));
        label_86->setFont(font3);
        label_86->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 0);\n"
"border-color: rgb(255, 0, 0);"));
        label_86->setFrameShape(QFrame::StyledPanel);
        label_86->setFrameShadow(QFrame::Sunken);
        label_87 = new QLabel(frame);
        label_87->setObjectName(QString::fromUtf8("label_87"));
        label_87->setGeometry(QRect(10, 340, 120, 31));
        label_87->setFont(font3);
        label_87->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 0);\n"
"border-color: rgb(255, 0, 0);"));
        label_87->setFrameShape(QFrame::StyledPanel);
        label_87->setFrameShadow(QFrame::Sunken);
        line_49 = new QFrame(frame);
        line_49->setObjectName(QString::fromUtf8("line_49"));
        line_49->setGeometry(QRect(120, 50, 118, 3));
        line_49->setFrameShape(QFrame::HLine);
        line_49->setFrameShadow(QFrame::Sunken);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        frame_3 = new QFrame(tab_4);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 251, 441));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        lineEdit_6 = new QLineEdit(frame_3);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setEnabled(false);
        lineEdit_6->setGeometry(QRect(130, 50, 71, 27));
        lineEdit_6->setFont(font);
        lineEdit_6->setMaxLength(3);
        lineEdit_6->setReadOnly(true);
        lineEdit_8 = new QLineEdit(frame_3);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setEnabled(false);
        lineEdit_8->setGeometry(QRect(130, 90, 71, 27));
        lineEdit_8->setFont(font);
        lineEdit_8->setReadOnly(true);
        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 50, 111, 19));
        label_13->setFont(font);
        label_16 = new QLabel(frame_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 90, 101, 21));
        label_16->setFont(font);
        label_17 = new QLabel(frame_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 120, 121, 50));
        label_17->setFont(font);
        lineEdit_9 = new QLineEdit(frame_3);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setEnabled(false);
        lineEdit_9->setGeometry(QRect(130, 130, 71, 27));
        lineEdit_9->setFont(font);
        lineEdit_9->setReadOnly(true);
        line_14 = new QFrame(frame_3);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(120, 50, 20, 121));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_15 = new QFrame(frame_3);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(10, 70, 118, 3));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);
        line_18 = new QFrame(frame_3);
        line_18->setObjectName(QString::fromUtf8("line_18"));
        line_18->setGeometry(QRect(10, 110, 118, 3));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);
        line_19 = new QFrame(frame_3);
        line_19->setObjectName(QString::fromUtf8("line_19"));
        line_19->setGeometry(QRect(10, 150, 118, 10));
        line_19->setFrameShape(QFrame::HLine);
        line_19->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(frame_3);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 330, 251, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_24 = new QLabel(frame_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(20, 370, 171, 31));
        pushButton_6 = new QPushButton(frame_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(180, 390, 61, 27));
        pushButton_6->setFont(font);
        line_26 = new QFrame(frame_3);
        line_26->setObjectName(QString::fromUtf8("line_26"));
        line_26->setGeometry(QRect(20, 370, 118, 3));
        line_26->setFrameShape(QFrame::HLine);
        line_26->setFrameShadow(QFrame::Sunken);
        label_26 = new QLabel(frame_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(10, 420, 241, 21));
        label_26->setFont(font4);
        textBrowser_4 = new QTextBrowser(frame_3);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setEnabled(true);
        textBrowser_4->setGeometry(QRect(10, 200, 231, 131));
        textBrowser_4->setFont(font);
        textBrowser_4->setReadOnly(true);
        label_91 = new QLabel(frame_3);
        label_91->setObjectName(QString::fromUtf8("label_91"));
        label_91->setGeometry(QRect(10, 340, 120, 31));
        label_91->setFont(font3);
        label_91->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 0);\n"
"border-color: rgb(255, 0, 0);"));
        label_91->setFrameShape(QFrame::StyledPanel);
        label_91->setFrameShadow(QFrame::Sunken);
        frame_4 = new QFrame(tab_4);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(250, 0, 320, 440));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        line_21 = new QFrame(frame_4);
        line_21->setObjectName(QString::fromUtf8("line_21"));
        line_21->setGeometry(QRect(10, 30, 118, 3));
        line_21->setFrameShape(QFrame::HLine);
        line_21->setFrameShadow(QFrame::Sunken);
        line_22 = new QFrame(frame_4);
        line_22->setObjectName(QString::fromUtf8("line_22"));
        line_22->setGeometry(QRect(10, 290, 180, 3));
        line_22->setFrameShape(QFrame::HLine);
        line_22->setFrameShadow(QFrame::Sunken);
        pushButton_4 = new QPushButton(frame_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(250, 30, 61, 27));
        pushButton_4->setFont(font);
        line_23 = new QFrame(frame_4);
        line_23->setObjectName(QString::fromUtf8("line_23"));
        line_23->setGeometry(QRect(130, 50, 118, 3));
        line_23->setFrameShape(QFrame::HLine);
        line_23->setFrameShadow(QFrame::Sunken);
        label_11 = new QLabel(frame_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 30, 231, 19));
        label_11->setFont(font);
        textBrowser_2 = new QTextBrowser(frame_4);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(10, 60, 300, 201));
        textBrowser_2->setStyleSheet(QString::fromUtf8("font: 63 11pt \"LMSansDemiCond10\";"));
        textBrowser_2->setReadOnly(true);
        textBrowser_5 = new QTextBrowser(frame_4);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(10, 300, 301, 130));
        textBrowser_5->setFont(font);
        label_88 = new QLabel(tab_4);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        label_88->setGeometry(QRect(0, 0, 250, 31));
        label_88->setFont(font3);
        label_88->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 0);\n"
"border-color: rgb(255, 0, 0);"));
        label_88->setFrameShape(QFrame::StyledPanel);
        label_88->setFrameShadow(QFrame::Sunken);
        label_89 = new QLabel(tab_4);
        label_89->setObjectName(QString::fromUtf8("label_89"));
        label_89->setGeometry(QRect(260, 0, 100, 30));
        label_89->setFont(font3);
        label_89->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 0);\n"
"border-color: rgb(255, 0, 0);"));
        label_89->setFrameShape(QFrame::StyledPanel);
        label_89->setFrameShadow(QFrame::Sunken);
        label_90 = new QLabel(tab_4);
        label_90->setObjectName(QString::fromUtf8("label_90"));
        label_90->setGeometry(QRect(260, 260, 160, 30));
        label_90->setFont(font3);
        label_90->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 0);\n"
"border-color: rgb(255, 0, 0);"));
        label_90->setFrameShape(QFrame::StyledPanel);
        label_90->setFrameShadow(QFrame::Sunken);
        label_92 = new QLabel(tab_4);
        label_92->setObjectName(QString::fromUtf8("label_92"));
        label_92->setGeometry(QRect(10, 170, 160, 31));
        label_92->setFont(font3);
        label_92->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 0);\n"
"border-color: rgb(255, 0, 0);"));
        label_92->setFrameShape(QFrame::StyledPanel);
        label_92->setFrameShadow(QFrame::Sunken);
        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 0, 531, 30));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 30, 160, 30));
        label_8->setFont(font);
        lineEdit_5 = new QLineEdit(tab);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(190, 30, 71, 27));
        lineEdit_5->setFont(font);
        line_9 = new QFrame(tab);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(20, 50, 170, 10));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        label_36 = new QLabel(tab);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(260, 40, 51, 19));
        label_36->setFont(font);
        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 70, 121, 30));
        label_14->setFont(font);
        lineEdit_7 = new QLineEdit(tab);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(190, 70, 71, 27));
        lineEdit_7->setFont(font);
        line_12 = new QFrame(tab);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(20, 90, 170, 10));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        label_37 = new QLabel(tab);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(260, 80, 51, 19));
        label_37->setFont(font);
        label_38 = new QLabel(tab);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(260, 120, 90, 19));
        label_38->setFont(font);
        lineEdit_10 = new QLineEdit(tab);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(190, 110, 71, 27));
        lineEdit_10->setFont(font);
        line_16 = new QFrame(tab);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setGeometry(QRect(20, 130, 170, 10));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);
        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 110, 140, 30));
        label_15->setFont(font);
        line_5 = new QFrame(tab);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(7, 140, 440, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_18 = new QLabel(tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(20, 150, 131, 31));
        label_18->setFont(font3);
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 0);\n"
"border-color: rgb(255, 0, 0);"));
        label_18->setFrameShape(QFrame::StyledPanel);
        label_18->setFrameShadow(QFrame::Sunken);
        label_30 = new QLabel(tab);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(20, 200, 131, 21));
        label_30->setFont(font2);
        label_31 = new QLabel(tab);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(20, 230, 160, 21));
        label_31->setFont(font2);
        label_39 = new QLabel(tab);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(20, 260, 131, 21));
        label_39->setFont(font2);
        label_78 = new QLabel(tab);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        label_78->setGeometry(QRect(20, 290, 180, 21));
        label_78->setFont(font2);
        label_79 = new QLabel(tab);
        label_79->setObjectName(QString::fromUtf8("label_79"));
        label_79->setGeometry(QRect(20, 350, 170, 21));
        label_79->setFont(font2);
        label_80 = new QLabel(tab);
        label_80->setObjectName(QString::fromUtf8("label_80"));
        label_80->setGeometry(QRect(20, 320, 170, 21));
        label_80->setFont(font2);
        label_81 = new QLabel(tab);
        label_81->setObjectName(QString::fromUtf8("label_81"));
        label_81->setGeometry(QRect(20, 380, 170, 21));
        label_81->setFont(font2);
        label_82 = new QLabel(tab);
        label_82->setObjectName(QString::fromUtf8("label_82"));
        label_82->setGeometry(QRect(20, 410, 170, 21));
        label_82->setFont(font2);
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 340, 211, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("LMSansDemiCond10"));
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setWeight(75);
        pushButton_2->setFont(font5);
        pushButton_12 = new QPushButton(tab);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(350, 390, 211, 41));
        pushButton_12->setFont(font5);
        lineEdit_19 = new QLineEdit(tab);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(230, 200, 71, 27));
        lineEdit_19->setFont(font);
        lineEdit_19->setReadOnly(true);
        line_50 = new QFrame(tab);
        line_50->setObjectName(QString::fromUtf8("line_50"));
        line_50->setGeometry(QRect(60, 220, 170, 10));
        line_50->setFrameShape(QFrame::HLine);
        line_50->setFrameShadow(QFrame::Sunken);
        lineEdit_20 = new QLineEdit(tab);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(230, 230, 71, 27));
        lineEdit_20->setFont(font);
        lineEdit_20->setReadOnly(true);
        line_51 = new QFrame(tab);
        line_51->setObjectName(QString::fromUtf8("line_51"));
        line_51->setGeometry(QRect(60, 250, 170, 10));
        line_51->setFrameShape(QFrame::HLine);
        line_51->setFrameShadow(QFrame::Sunken);
        lineEdit_21 = new QLineEdit(tab);
        lineEdit_21->setObjectName(QString::fromUtf8("lineEdit_21"));
        lineEdit_21->setGeometry(QRect(230, 260, 71, 27));
        lineEdit_21->setFont(font);
        lineEdit_21->setReadOnly(true);
        line_52 = new QFrame(tab);
        line_52->setObjectName(QString::fromUtf8("line_52"));
        line_52->setGeometry(QRect(60, 280, 170, 10));
        line_52->setFrameShape(QFrame::HLine);
        line_52->setFrameShadow(QFrame::Sunken);
        lineEdit_22 = new QLineEdit(tab);
        lineEdit_22->setObjectName(QString::fromUtf8("lineEdit_22"));
        lineEdit_22->setGeometry(QRect(230, 290, 71, 27));
        lineEdit_22->setFont(font);
        lineEdit_22->setReadOnly(true);
        line_53 = new QFrame(tab);
        line_53->setObjectName(QString::fromUtf8("line_53"));
        line_53->setGeometry(QRect(60, 310, 170, 10));
        line_53->setFrameShape(QFrame::HLine);
        line_53->setFrameShadow(QFrame::Sunken);
        lineEdit_23 = new QLineEdit(tab);
        lineEdit_23->setObjectName(QString::fromUtf8("lineEdit_23"));
        lineEdit_23->setGeometry(QRect(230, 320, 71, 27));
        lineEdit_23->setFont(font);
        lineEdit_23->setReadOnly(true);
        line_54 = new QFrame(tab);
        line_54->setObjectName(QString::fromUtf8("line_54"));
        line_54->setGeometry(QRect(60, 340, 170, 10));
        line_54->setFrameShape(QFrame::HLine);
        line_54->setFrameShadow(QFrame::Sunken);
        lineEdit_24 = new QLineEdit(tab);
        lineEdit_24->setObjectName(QString::fromUtf8("lineEdit_24"));
        lineEdit_24->setGeometry(QRect(230, 350, 71, 27));
        lineEdit_24->setFont(font);
        lineEdit_24->setReadOnly(true);
        line_55 = new QFrame(tab);
        line_55->setObjectName(QString::fromUtf8("line_55"));
        line_55->setGeometry(QRect(60, 370, 170, 10));
        line_55->setFrameShape(QFrame::HLine);
        line_55->setFrameShadow(QFrame::Sunken);
        lineEdit_25 = new QLineEdit(tab);
        lineEdit_25->setObjectName(QString::fromUtf8("lineEdit_25"));
        lineEdit_25->setGeometry(QRect(230, 380, 71, 27));
        lineEdit_25->setFont(font);
        lineEdit_25->setReadOnly(true);
        line_56 = new QFrame(tab);
        line_56->setObjectName(QString::fromUtf8("line_56"));
        line_56->setGeometry(QRect(60, 400, 170, 10));
        line_56->setFrameShape(QFrame::HLine);
        line_56->setFrameShadow(QFrame::Sunken);
        lineEdit_26 = new QLineEdit(tab);
        lineEdit_26->setObjectName(QString::fromUtf8("lineEdit_26"));
        lineEdit_26->setGeometry(QRect(230, 410, 71, 27));
        lineEdit_26->setFont(font);
        lineEdit_26->setReadOnly(true);
        line_57 = new QFrame(tab);
        line_57->setObjectName(QString::fromUtf8("line_57"));
        line_57->setGeometry(QRect(60, 430, 170, 10));
        line_57->setFrameShape(QFrame::HLine);
        line_57->setFrameShadow(QFrame::Sunken);
        tabWidget->addTab(tab, QString());
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(360, 0, 231, 51));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/images/logo.png")));
        label_4->setScaledContents(true);
        label_4->setWordWrap(false);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 496, 581, 60));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setFont(font2);
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 1, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font5);

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        quitButton = new QPushButton(layoutWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(quitButton->sizePolicy().hasHeightForWidth());
        quitButton->setSizePolicy(sizePolicy);
        quitButton->setFont(font5);

        gridLayout->addWidget(quitButton, 1, 2, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(70, 500, 331, 21));
        label_9->setFont(font2);
        GUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GUI);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 31));
        menuBar->setFont(font);
        menuPhenogene = new QMenu(menuBar);
        menuPhenogene->setObjectName(QString::fromUtf8("menuPhenogene"));
        menuPhenogene->setFont(font);
        menuSave = new QMenu(menuPhenogene);
        menuSave->setObjectName(QString::fromUtf8("menuSave"));
        menuSave->setFont(font);
        menuLoad = new QMenu(menuPhenogene);
        menuLoad->setObjectName(QString::fromUtf8("menuLoad"));
        menuLoad->setFont(font);
        menuAbout_us = new QMenu(menuBar);
        menuAbout_us->setObjectName(QString::fromUtf8("menuAbout_us"));
        menuAbout_us->setFont(font);
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuAbout->setFont(font);
        GUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GUI);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setFont(font);
        GUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GUI);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setFont(font);
        GUI->setStatusBar(statusBar);
        QWidget::setTabOrder(tabWidget, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, pushButton_5);
        QWidget::setTabOrder(pushButton_5, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton_6);
        QWidget::setTabOrder(pushButton_6, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton);
        QWidget::setTabOrder(pushButton, quitButton);
        QWidget::setTabOrder(quitButton, lineEdit_8);
        QWidget::setTabOrder(lineEdit_8, lineEdit_9);
        QWidget::setTabOrder(lineEdit_9, textBrowser_3);
        QWidget::setTabOrder(textBrowser_3, lineEdit_6);

        menuBar->addAction(menuPhenogene->menuAction());
        menuBar->addAction(menuAbout_us->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuPhenogene->addAction(menuSave->menuAction());
        menuPhenogene->addAction(menuLoad->menuAction());
        menuPhenogene->addAction(actionClose);
        menuSave->addAction(actionParameters);
        menuSave->addAction(actionWeights);
        menuSave->addAction(actionOutput);
        menuSave->addAction(actionInput);
        menuSave->addAction(actionAll_settings_in_a_ph_file);
        menuLoad->addAction(actionParameters_2);
        menuLoad->addAction(actionWeights_2);
        menuLoad->addAction(actionExpected_Output);
        menuLoad->addAction(actionInput_2);
        menuLoad->addAction(action_ph_file);
        menuAbout_us->addAction(actionProgrammer_guide);

        retranslateUi(GUI);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GUI);
    } // setupUi

    void retranslateUi(QMainWindow *GUI)
    {
        GUI->setWindowTitle(QApplication::translate("GUI", "Phenogene", 0, QApplication::UnicodeUTF8));
        actionParameters->setText(QApplication::translate("GUI", "Parameters", 0, QApplication::UnicodeUTF8));
        actionWeights->setText(QApplication::translate("GUI", "Weights", 0, QApplication::UnicodeUTF8));
        actionOutput->setText(QApplication::translate("GUI", "Output", 0, QApplication::UnicodeUTF8));
        actionInput->setText(QApplication::translate("GUI", "Input", 0, QApplication::UnicodeUTF8));
        actionAll_settings_in_a_ph_file->setText(QApplication::translate("GUI", "All settings in a .ph file", 0, QApplication::UnicodeUTF8));
        actionParameters_2->setText(QApplication::translate("GUI", "Parameters", 0, QApplication::UnicodeUTF8));
        actionWeights_2->setText(QApplication::translate("GUI", "Weights", 0, QApplication::UnicodeUTF8));
        actionExpected_Output->setText(QApplication::translate("GUI", "Expected Output", 0, QApplication::UnicodeUTF8));
        actionInput_2->setText(QApplication::translate("GUI", "Input", 0, QApplication::UnicodeUTF8));
        action_ph_file->setText(QApplication::translate("GUI", ".ph file", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("GUI", "Quit program", 0, QApplication::UnicodeUTF8));
        actionProgrammer_guide->setText(QApplication::translate("GUI", "Programmer Guide", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("GUI", "Browse", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("GUI", "Browse", 0, QApplication::UnicodeUTF8));
        textBrowser_3->setHtml(QApplication::translate("GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'LMSansDemiCond10'; font-size:11pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400; color:#ff0000;\">Example</span><span style=\" font-weight:400;\"> </span><span style=\" font-size:10pt; font-weight:400; color:#ff0000;\">(text in read is for declaration)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">116      </span><span style=\" font-size:10pt; font-weight:400; color:#ff0000;\">#User ID</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;"
                        " -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">AG</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">CT</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">AA</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">9          </span><span style=\" font-size:10pt; font-weight:400; color:#ff0000;\">#User ID</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">AA</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;"
                        "\">TC</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">AG</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("GUI", "No Selected File", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("GUI", "No Selected File", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'LMSansDemiCond10'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:400; color:#ff0000;\">One line for each training candidate</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:400; color:#ff0000;\">Example: </span><span style=\" font-size:10pt; font-weight:400; color:#ff0000;\">(for the above example)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" f"
                        "ont-size:11pt; font-weight:400;\">blue</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:400;\">brown</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_84->setText(QApplication::translate("GUI", "Input file:", 0, QApplication::UnicodeUTF8));
        label_85->setText(QApplication::translate("GUI", "Output file:", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("GUI", "9", 0, QApplication::UnicodeUTF8));
        lineEdit_3->setText(QApplication::translate("GUI", "0.001", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("GUI", "Genes Numbers:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("GUI", "Learning rate:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("GUI", "Acceptable Error:", 0, QApplication::UnicodeUTF8));
        lineEdit_4->setText(QApplication::translate("GUI", "0.01", 0, QApplication::UnicodeUTF8));
        label_22->setText(QString());
        label_27->setText(QApplication::translate("GUI", "* To be found in the input's file directory.\n"
"AFTER the train finishes.", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("GUI", "Range", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("GUI", "[0-100]", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("GUI", "[0-2]", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("GUI", "[0-999]", 0, QApplication::UnicodeUTF8));
        textEdit_4->setHtml(QApplication::translate("GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'LMSansDemiCond10'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:400;\">blue</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:400;\">green</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:400;\">brown</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text"
                        "-indent:0px;\"><span style=\" font-size:11pt; font-weight:400;\">grey</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:400;\">hazel</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_83->setText(QApplication::translate("GUI", "Neural Network Parameters:", 0, QApplication::UnicodeUTF8));
        label_86->setText(QApplication::translate("GUI", "Output keywords:", 0, QApplication::UnicodeUTF8));
        label_87->setText(QApplication::translate("GUI", "Weights file:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("GUI", "Train", 0, QApplication::UnicodeUTF8));
        lineEdit_6->setText(QApplication::translate("GUI", "9", 0, QApplication::UnicodeUTF8));
        lineEdit_8->setText(QApplication::translate("GUI", "0.001", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("GUI", "Genes Numbers:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("GUI", "Learning rate:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("GUI", "Acceptable Error:", 0, QApplication::UnicodeUTF8));
        lineEdit_9->setText(QApplication::translate("GUI", "0.01", 0, QApplication::UnicodeUTF8));
        label_24->setText(QString());
        pushButton_6->setText(QApplication::translate("GUI", "Change", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("GUI", "* Make sure the file follows the correct format.", 0, QApplication::UnicodeUTF8));
        textBrowser_4->setHtml(QApplication::translate("GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'LMSansDemiCond10'; font-size:11pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">blue</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">green</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">brown</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\""
                        ">grey</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">hazel</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_91->setText(QApplication::translate("GUI", "Weights file:", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("GUI", "Browse", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("GUI", "No Selected File", 0, QApplication::UnicodeUTF8));
        textBrowser_2->setHtml(QApplication::translate("GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'LMSansDemiCond10'; font-size:11pt; font-weight:56; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400; color:#ff0000;\">Example</span><span style=\" font-weight:400;\"> </span><span style=\" font-size:10pt; font-weight:400; color:#ff0000;\">(text in read is for declaration)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">116      </span><span style=\" font-size:10pt; font-weight:400; color:#ff0000;\">#User ID</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; "
                        "-qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">AG</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">CT</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">AA</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">9          </span><span style=\" font-size:10pt; font-weight:400; color:#ff0000;\">#User ID</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">AA</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\""
                        ">TC</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">AG</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:400;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_88->setText(QApplication::translate("GUI", "Neural Network Parameters:", 0, QApplication::UnicodeUTF8));
        label_89->setText(QApplication::translate("GUI", "Input file:", 0, QApplication::UnicodeUTF8));
        label_90->setText(QApplication::translate("GUI", "Predicted output:", 0, QApplication::UnicodeUTF8));
        label_92->setText(QApplication::translate("GUI", "Output keywords:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("GUI", "Predict", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("GUI", "[Warning: This is an expert mode tab. Do not edit if you don't know what you're doing!]", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("GUI", "Number of hidden nodes", 0, QApplication::UnicodeUTF8));
        lineEdit_5->setText(QApplication::translate("GUI", "7", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("GUI", "[0-100]", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("GUI", "Momentum:", 0, QApplication::UnicodeUTF8));
        lineEdit_7->setText(QApplication::translate("GUI", "0.00000", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("GUI", "[0-2]", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("GUI", "[0-10000000]", 0, QApplication::UnicodeUTF8));
        lineEdit_10->setText(QApplication::translate("GUI", "10000", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("GUI", "Maximum iterations", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("GUI", "Error Analysis", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("GUI", "Error Percentage:", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("GUI", "Number of mismatches:", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("GUI", "Iterations used:", 0, QApplication::UnicodeUTF8));
        label_78->setText(QApplication::translate("GUI", "Least actual error reached:", 0, QApplication::UnicodeUTF8));
        label_79->setText(QApplication::translate("GUI", "Number of hidden nodes:", 0, QApplication::UnicodeUTF8));
        label_80->setText(QApplication::translate("GUI", "Number of input nodes:", 0, QApplication::UnicodeUTF8));
        label_81->setText(QApplication::translate("GUI", "Number of output nodes:", 0, QApplication::UnicodeUTF8));
        label_82->setText(QApplication::translate("GUI", "Momentum:", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("GUI", "Produce PDF report", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("GUI", "Save current configurations", 0, QApplication::UnicodeUTF8));
        lineEdit_19->setText(QApplication::translate("GUI", "%", 0, QApplication::UnicodeUTF8));
        lineEdit_20->setText(QString());
        lineEdit_21->setText(QApplication::translate("GUI", "10000", 0, QApplication::UnicodeUTF8));
        lineEdit_22->setText(QString());
        lineEdit_23->setText(QApplication::translate("GUI", "9", 0, QApplication::UnicodeUTF8));
        lineEdit_24->setText(QApplication::translate("GUI", "12", 0, QApplication::UnicodeUTF8));
        lineEdit_25->setText(QApplication::translate("GUI", "5", 0, QApplication::UnicodeUTF8));
        lineEdit_26->setText(QApplication::translate("GUI", "0", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("GUI", "Analysis", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        progressBar->setFormat(QApplication::translate("GUI", "%p%", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("GUI", "Start", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("GUI", "Quit", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GUI", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_9->setText(QString());
        menuPhenogene->setTitle(QApplication::translate("GUI", "File", 0, QApplication::UnicodeUTF8));
        menuSave->setTitle(QApplication::translate("GUI", "Save", 0, QApplication::UnicodeUTF8));
        menuLoad->setTitle(QApplication::translate("GUI", "Load", 0, QApplication::UnicodeUTF8));
        menuAbout_us->setTitle(QApplication::translate("GUI", "Help", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("GUI", "About", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GUI: public Ui_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHENOGENE_H
