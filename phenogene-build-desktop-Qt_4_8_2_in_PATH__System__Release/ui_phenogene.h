/********************************************************************************
** Form generated from reading UI file 'phenogene.ui'
**
** Created: Tue Jun 18 23:27:41 2013
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
#include <QtGui/QListWidget>
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
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QProgressBar *progressBar;
    QPushButton *pushButton;
    QPushButton *quitButton;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QFrame *frame_2;
    QFrame *line_11;
    QLabel *label_9;
    QFrame *line_13;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QLabel *label_21;
    QFrame *line_24;
    QTextBrowser *textBrowser_3;
    QFrame *line_25;
    QLabel *label_2;
    QLabel *label_10;
    QTextBrowser *textBrowser;
    QFrame *frame;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_8;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QListWidget *listWidget;
    QFrame *line;
    QLabel *label_22;
    QLabel *label_23;
    QFrame *line_27;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QFrame *line_10;
    QLabel *label_34;
    QFrame *line_12;
    QTextEdit *textEdit_4;
    QWidget *tab_4;
    QFrame *frame_3;
    QLabel *label_12;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLabel *label_18;
    QFrame *line_14;
    QFrame *line_15;
    QFrame *line_16;
    QFrame *line_17;
    QFrame *line_18;
    QFrame *line_19;
    QListWidget *listWidget_2;
    QFrame *line_2;
    QLabel *label_24;
    QLabel *label_25;
    QPushButton *pushButton_6;
    QFrame *line_26;
    QLabel *label_26;
    QLabel *label_35;
    QTextBrowser *textBrowser_4;
    QFrame *frame_4;
    QLabel *label_19;
    QFrame *line_21;
    QFrame *line_22;
    QLabel *label_20;
    QPushButton *pushButton_4;
    QFrame *line_23;
    QLabel *label_11;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_5;
    QFrame *line_20;
    QLabel *label_15;
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
        GUI->setStyleSheet(QString::fromUtf8(""));
        GUI->setTabShape(QTabWidget::Rounded);
        actionParameters = new QAction(GUI);
        actionParameters->setObjectName(QString::fromUtf8("actionParameters"));
        actionWeights = new QAction(GUI);
        actionWeights->setObjectName(QString::fromUtf8("actionWeights"));
        actionOutput = new QAction(GUI);
        actionOutput->setObjectName(QString::fromUtf8("actionOutput"));
        actionInput = new QAction(GUI);
        actionInput->setObjectName(QString::fromUtf8("actionInput"));
        actionAll_settings_in_a_ph_file = new QAction(GUI);
        actionAll_settings_in_a_ph_file->setObjectName(QString::fromUtf8("actionAll_settings_in_a_ph_file"));
        actionParameters_2 = new QAction(GUI);
        actionParameters_2->setObjectName(QString::fromUtf8("actionParameters_2"));
        actionWeights_2 = new QAction(GUI);
        actionWeights_2->setObjectName(QString::fromUtf8("actionWeights_2"));
        actionExpected_Output = new QAction(GUI);
        actionExpected_Output->setObjectName(QString::fromUtf8("actionExpected_Output"));
        actionInput_2 = new QAction(GUI);
        actionInput_2->setObjectName(QString::fromUtf8("actionInput_2"));
        action_ph_file = new QAction(GUI);
        action_ph_file->setObjectName(QString::fromUtf8("action_ph_file"));
        actionClose = new QAction(GUI);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        centralWidget = new QWidget(GUI);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 1, 0, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        quitButton = new QPushButton(centralWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(quitButton->sizePolicy().hasHeightForWidth());
        quitButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(quitButton, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 3, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
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
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 270, 161, 19));
        line_13 = new QFrame(frame_2);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(130, 310, 118, 3));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(250, 290, 61, 27));
        pushButton_5 = new QPushButton(frame_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(248, 30, 61, 27));
        label_21 = new QLabel(frame_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 0, 91, 31));
        line_24 = new QFrame(frame_2);
        line_24->setObjectName(QString::fromUtf8("line_24"));
        line_24->setGeometry(QRect(10, 30, 118, 3));
        line_24->setFrameShape(QFrame::HLine);
        line_24->setFrameShadow(QFrame::Sunken);
        textBrowser_3 = new QTextBrowser(frame_2);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(10, 60, 291, 201));
        line_25 = new QFrame(frame_2);
        line_25->setObjectName(QString::fromUtf8("line_25"));
        line_25->setGeometry(QRect(130, 50, 118, 3));
        line_25->setFrameShape(QFrame::HLine);
        line_25->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 201, 19));
        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 290, 201, 19));
        textBrowser = new QTextBrowser(frame_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 320, 291, 111));
        frame = new QFrame(tab_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 251, 441));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 191, 21));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 50, 71, 27));
        lineEdit->setMaxLength(3);
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 90, 71, 27));
        lineEdit_2->setMaxLength(3);
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 170, 71, 27));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 111, 19));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 90, 101, 19));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 240, 130, 40));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_5->setFont(font);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 170, 101, 21));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 210, 121, 19));
        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(130, 210, 71, 27));
        lineEdit_5 = new QLineEdit(frame);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setEnabled(false);
        lineEdit_5->setGeometry(QRect(130, 130, 71, 27));
        lineEdit_5->setMaxLength(3);
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 130, 101, 19));
        line_3 = new QFrame(frame);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(120, 50, 20, 191));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(frame);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(10, 70, 118, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(frame);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(10, 110, 118, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(frame);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(10, 150, 118, 3));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(frame);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(10, 190, 118, 3));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(frame);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(10, 230, 118, 3));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        listWidget = new QListWidget(frame);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 270, 111, 71));
        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 340, 251, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_22 = new QLabel(frame);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(20, 380, 201, 19));
        label_23 = new QLabel(frame);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 350, 221, 31));
        line_27 = new QFrame(frame);
        line_27->setObjectName(QString::fromUtf8("line_27"));
        line_27->setGeometry(QRect(20, 380, 118, 3));
        line_27->setFrameShape(QFrame::HLine);
        line_27->setFrameShadow(QFrame::Sunken);
        label_27 = new QLabel(frame);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(10, 410, 241, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_27->setFont(font1);
        label_28 = new QLabel(frame);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(200, 30, 40, 19));
        label_29 = new QLabel(frame);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(200, 60, 51, 19));
        label_30 = new QLabel(frame);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(200, 100, 51, 19));
        label_31 = new QLabel(frame);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(200, 140, 51, 19));
        label_32 = new QLabel(frame);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(210, 180, 51, 19));
        label_33 = new QLabel(frame);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(200, 220, 51, 19));
        line_10 = new QFrame(frame);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(140, 250, 100, 30));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        label_34 = new QLabel(frame);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(140, 240, 110, 40));
        QFont font2;
        font2.setPointSize(10);
        label_34->setFont(font2);
        line_12 = new QFrame(frame);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(10, 250, 100, 30));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        textEdit_4 = new QTextEdit(frame);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(133, 270, 111, 71));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        frame_3 = new QFrame(tab_4);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 251, 441));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_12 = new QLabel(frame_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 10, 191, 21));
        lineEdit_6 = new QLineEdit(frame_3);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setEnabled(false);
        lineEdit_6->setGeometry(QRect(130, 50, 71, 27));
        lineEdit_6->setMaxLength(3);
        lineEdit_6->setReadOnly(true);
        lineEdit_7 = new QLineEdit(frame_3);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setEnabled(false);
        lineEdit_7->setGeometry(QRect(130, 90, 71, 27));
        lineEdit_7->setMaxLength(3);
        lineEdit_7->setReadOnly(true);
        lineEdit_8 = new QLineEdit(frame_3);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setEnabled(false);
        lineEdit_8->setGeometry(QRect(130, 170, 71, 27));
        lineEdit_8->setReadOnly(true);
        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 50, 111, 19));
        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 90, 101, 19));
        label_16 = new QLabel(frame_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 170, 101, 21));
        label_17 = new QLabel(frame_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 210, 121, 19));
        lineEdit_9 = new QLineEdit(frame_3);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setEnabled(false);
        lineEdit_9->setGeometry(QRect(130, 210, 71, 27));
        lineEdit_9->setReadOnly(true);
        lineEdit_10 = new QLineEdit(frame_3);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setEnabled(false);
        lineEdit_10->setGeometry(QRect(130, 130, 71, 27));
        lineEdit_10->setMaxLength(3);
        lineEdit_10->setReadOnly(true);
        label_18 = new QLabel(frame_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 130, 111, 19));
        line_14 = new QFrame(frame_3);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(120, 50, 20, 191));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_15 = new QFrame(frame_3);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(10, 70, 118, 3));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);
        line_16 = new QFrame(frame_3);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setGeometry(QRect(10, 110, 118, 3));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);
        line_17 = new QFrame(frame_3);
        line_17->setObjectName(QString::fromUtf8("line_17"));
        line_17->setGeometry(QRect(10, 150, 118, 3));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);
        line_18 = new QFrame(frame_3);
        line_18->setObjectName(QString::fromUtf8("line_18"));
        line_18->setGeometry(QRect(10, 190, 118, 3));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);
        line_19 = new QFrame(frame_3);
        line_19->setObjectName(QString::fromUtf8("line_19"));
        line_19->setGeometry(QRect(10, 230, 118, 3));
        line_19->setFrameShape(QFrame::HLine);
        line_19->setFrameShadow(QFrame::Sunken);
        listWidget_2 = new QListWidget(frame_3);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setEnabled(false);
        listWidget_2->setGeometry(QRect(10, 270, 111, 71));
        listWidget_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        listWidget_2->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        listWidget_2->setViewMode(QListView::ListMode);
        line_2 = new QFrame(frame_3);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 340, 251, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_24 = new QLabel(frame_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(20, 380, 171, 21));
        label_25 = new QLabel(frame_3);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(10, 350, 91, 31));
        pushButton_6 = new QPushButton(frame_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(180, 390, 61, 27));
        line_26 = new QFrame(frame_3);
        line_26->setObjectName(QString::fromUtf8("line_26"));
        line_26->setGeometry(QRect(20, 380, 118, 3));
        line_26->setFrameShape(QFrame::HLine);
        line_26->setFrameShadow(QFrame::Sunken);
        label_26 = new QLabel(frame_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(10, 420, 241, 21));
        label_26->setFont(font1);
        label_35 = new QLabel(frame_3);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(140, 240, 110, 40));
        label_35->setFont(font2);
        textBrowser_4 = new QTextBrowser(frame_3);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setEnabled(true);
        textBrowser_4->setGeometry(QRect(130, 270, 110, 71));
        textBrowser_4->setReadOnly(true);
        frame_4 = new QFrame(tab_4);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(250, 0, 320, 440));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_19 = new QLabel(frame_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 0, 91, 31));
        line_21 = new QFrame(frame_4);
        line_21->setObjectName(QString::fromUtf8("line_21"));
        line_21->setGeometry(QRect(10, 30, 118, 3));
        line_21->setFrameShape(QFrame::HLine);
        line_21->setFrameShadow(QFrame::Sunken);
        line_22 = new QFrame(frame_4);
        line_22->setObjectName(QString::fromUtf8("line_22"));
        line_22->setGeometry(QRect(10, 290, 118, 3));
        line_22->setFrameShape(QFrame::HLine);
        line_22->setFrameShadow(QFrame::Sunken);
        label_20 = new QLabel(frame_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 270, 131, 19));
        pushButton_4 = new QPushButton(frame_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(250, 30, 61, 27));
        line_23 = new QFrame(frame_4);
        line_23->setObjectName(QString::fromUtf8("line_23"));
        line_23->setGeometry(QRect(130, 50, 118, 3));
        line_23->setFrameShape(QFrame::HLine);
        line_23->setFrameShadow(QFrame::Sunken);
        label_11 = new QLabel(frame_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 30, 231, 19));
        textBrowser_2 = new QTextBrowser(frame_4);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(15, 60, 291, 201));
        textBrowser_5 = new QTextBrowser(frame_4);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(10, 300, 301, 131));
        line_20 = new QFrame(tab_4);
        line_20->setObjectName(QString::fromUtf8("line_20"));
        line_20->setGeometry(QRect(10, 250, 100, 30));
        line_20->setFrameShape(QFrame::HLine);
        line_20->setFrameShadow(QFrame::Sunken);
        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 240, 130, 40));
        label_15->setFont(font);
        tabWidget->addTab(tab_4, QString());

        gridLayout_2->addWidget(tabWidget, 0, 3, 1, 1);

        GUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GUI);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 29));
        menuPhenogene = new QMenu(menuBar);
        menuPhenogene->setObjectName(QString::fromUtf8("menuPhenogene"));
        menuSave = new QMenu(menuPhenogene);
        menuSave->setObjectName(QString::fromUtf8("menuSave"));
        menuLoad = new QMenu(menuPhenogene);
        menuLoad->setObjectName(QString::fromUtf8("menuLoad"));
        menuAbout_us = new QMenu(menuBar);
        menuAbout_us->setObjectName(QString::fromUtf8("menuAbout_us"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        GUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GUI);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        GUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GUI);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GUI->setStatusBar(statusBar);
        QWidget::setTabOrder(tabWidget, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, listWidget);
        QWidget::setTabOrder(listWidget, pushButton_5);
        QWidget::setTabOrder(pushButton_5, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton_6);
        QWidget::setTabOrder(pushButton_6, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton);
        QWidget::setTabOrder(pushButton, quitButton);
        QWidget::setTabOrder(quitButton, lineEdit_10);
        QWidget::setTabOrder(lineEdit_10, lineEdit_8);
        QWidget::setTabOrder(lineEdit_8, lineEdit_9);
        QWidget::setTabOrder(lineEdit_9, listWidget_2);
        QWidget::setTabOrder(listWidget_2, textBrowser_3);
        QWidget::setTabOrder(textBrowser_3, lineEdit_7);
        QWidget::setTabOrder(lineEdit_7, lineEdit_6);

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

        retranslateUi(GUI);

        tabWidget->setCurrentIndex(0);
        listWidget->setCurrentRow(0);
        listWidget_2->setCurrentRow(0);


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
        pushButton->setText(QApplication::translate("GUI", "Start", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("GUI", "Quit", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("GUI", "Output File:", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("GUI", "Browse", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("GUI", "Browse", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("GUI", "Input File:", 0, QApplication::UnicodeUTF8));
        textBrowser_3->setHtml(QApplication::translate("GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bitstream Charter'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">Example</span> <span style=\" font-size:10pt; color:#ff0000;\">(text in read is for declaration)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">116      <span style=\" font-size:10pt; color:#ff0000;\">#User ID</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">AG</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;"
                        " -qt-block-indent:0; text-indent:0px;\">CT</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">AA</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">9          <span style=\" font-size:10pt; color:#ff0000;\">#User ID</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">AA</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TC</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">AG</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("GUI", "No Selected File", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("GUI", "No Selected File", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bitstream Charter'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">One line for each training candidate</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">Example: </span><span style=\" font-size:10pt; color:#ff0000;\">(for the above example)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">blue</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt"
                        "-block-indent:0; text-indent:0px;\">brown</p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GUI", "Neural Network Parameters:", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("GUI", "9", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QApplication::translate("GUI", "7", 0, QApplication::UnicodeUTF8));
        lineEdit_3->setText(QApplication::translate("GUI", "0.3", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("GUI", "Genes Numbers:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("GUI", "Hidden nodes:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("GUI", "Activation function:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("GUI", "Learning rate:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("GUI", "Acceptable Error:", 0, QApplication::UnicodeUTF8));
        lineEdit_4->setText(QApplication::translate("GUI", "100", 0, QApplication::UnicodeUTF8));
        lineEdit_5->setInputMask(QString());
        lineEdit_5->setText(QApplication::translate("GUI", "5", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("GUI", "Output nodes:", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("GUI", "Sigmoidal", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("GUI", "AV1", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("GUI", "AV2", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_22->setText(QString());
        label_23->setText(QApplication::translate("GUI", "Weights File:", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("GUI", "* To be found in the input's file directory.\n"
"AFTER the train finishes.", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("GUI", "Range", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("GUI", "[1-100]", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("GUI", "[1-100]", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("GUI", "[1-100]", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("GUI", "[0-2]", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("GUI", "[0-999]", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("GUI", "Output keywords", 0, QApplication::UnicodeUTF8));
        textEdit_4->setHtml(QApplication::translate("GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bitstream Charter'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">blue</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">green</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">brown</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">grey</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">hazel</p></body></htm"
                        "l>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("GUI", "Train", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("GUI", "Neural Network Parameters:", 0, QApplication::UnicodeUTF8));
        lineEdit_6->setText(QApplication::translate("GUI", "9", 0, QApplication::UnicodeUTF8));
        lineEdit_7->setText(QApplication::translate("GUI", "7", 0, QApplication::UnicodeUTF8));
        lineEdit_8->setText(QApplication::translate("GUI", "0.3", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("GUI", "Genes Numbers:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("GUI", "Hidden nodes:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("GUI", "Learning rate:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("GUI", "Acceptable Error:", 0, QApplication::UnicodeUTF8));
        lineEdit_9->setText(QApplication::translate("GUI", "100", 0, QApplication::UnicodeUTF8));
        lineEdit_10->setText(QApplication::translate("GUI", "5", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("GUI", "Output nodes:", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled1 = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem3 = listWidget_2->item(0);
        ___qlistwidgetitem3->setText(QApplication::translate("GUI", "Sigmoidal", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = listWidget_2->item(1);
        ___qlistwidgetitem4->setText(QApplication::translate("GUI", "AV2", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_2->item(2);
        ___qlistwidgetitem5->setText(QApplication::translate("GUI", "AV3", 0, QApplication::UnicodeUTF8));
        listWidget_2->setSortingEnabled(__sortingEnabled1);

        label_24->setText(QString());
        label_25->setText(QApplication::translate("GUI", "Weights File:", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("GUI", "Change", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("GUI", "* Make sure the file follows the correct format.", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("GUI", "Output keywords", 0, QApplication::UnicodeUTF8));
        textBrowser_4->setHtml(QApplication::translate("GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bitstream Charter'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">blue</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">green</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">brown</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">grey</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">hazel</p></body></htm"
                        "l>", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("GUI", "Input File:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("GUI", "Predicted Output:", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("GUI", "Browse", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("GUI", "No Selected File", 0, QApplication::UnicodeUTF8));
        textBrowser_2->setHtml(QApplication::translate("GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bitstream Charter'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Example <span style=\" font-size:10pt; color:#ff0000;\">(text in read is for declaration)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">116      <span style=\" font-size:10pt; color:#ff0000;\">#User ID</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">AG</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        ">CT</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">AA</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">9          <span style=\" font-size:10pt; color:#ff0000;\">#User ID</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">AA</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TC</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">AG</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("GUI", "Activation function:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("GUI", "Predict", 0, QApplication::UnicodeUTF8));
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
