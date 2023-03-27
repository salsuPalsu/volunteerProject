/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *barnumberEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *adult_label;
    QLabel *bigClabel;
    QLabel *smallClabel;
    QLabel *label_4;
    QPushButton *closeButton;
    QPushButton *searchButton;
    QFrame *line;
    QPushButton *addFamilyButton;
    QPushButton *Edit_Button;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QComboBox *itemComboBox;
    QSpinBox *ItemspinBox;
    QPushButton *addItemButton;
    QTextBrowser *textBrowser;
    QLineEdit *day_edit;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *label_5;
    QLabel *sum_label;
    QPushButton *excel_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(889, 499);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        barnumberEdit = new QLineEdit(centralwidget);
        barnumberEdit->setObjectName(QString::fromUtf8("barnumberEdit"));
        barnumberEdit->setGeometry(QRect(140, 40, 181, 28));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 100, 63, 20));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 140, 91, 20));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 180, 101, 20));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        adult_label = new QLabel(centralwidget);
        adult_label->setObjectName(QString::fromUtf8("adult_label"));
        adult_label->setGeometry(QRect(270, 100, 63, 20));
        adult_label->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        bigClabel = new QLabel(centralwidget);
        bigClabel->setObjectName(QString::fromUtf8("bigClabel"));
        bigClabel->setGeometry(QRect(270, 140, 63, 20));
        bigClabel->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        smallClabel = new QLabel(centralwidget);
        smallClabel->setObjectName(QString::fromUtf8("smallClabel"));
        smallClabel->setGeometry(QRect(270, 180, 63, 20));
        smallClabel->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 10, 81, 20));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(150, 320, 101, 29));
        closeButton->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";"));
        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(330, 40, 41, 29));
        searchButton->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(110, 0, 20, 361));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        addFamilyButton = new QPushButton(centralwidget);
        addFamilyButton->setObjectName(QString::fromUtf8("addFamilyButton"));
        addFamilyButton->setGeometry(QRect(10, 10, 101, 29));
        addFamilyButton->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";"));
        Edit_Button = new QPushButton(centralwidget);
        Edit_Button->setObjectName(QString::fromUtf8("Edit_Button"));
        Edit_Button->setGeometry(QRect(280, 320, 93, 29));
        Edit_Button->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(390, 30, 301, 321));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 299, 319));
        itemComboBox = new QComboBox(scrollAreaWidgetContents);
        itemComboBox->addItem(QString());
        itemComboBox->addItem(QString());
        itemComboBox->addItem(QString());
        itemComboBox->addItem(QString());
        itemComboBox->addItem(QString());
        itemComboBox->addItem(QString());
        itemComboBox->addItem(QString());
        itemComboBox->addItem(QString());
        itemComboBox->addItem(QString());
        itemComboBox->addItem(QString());
        itemComboBox->setObjectName(QString::fromUtf8("itemComboBox"));
        itemComboBox->setGeometry(QRect(100, 10, 91, 31));
        itemComboBox->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";"));
        ItemspinBox = new QSpinBox(scrollAreaWidgetContents);
        ItemspinBox->setObjectName(QString::fromUtf8("ItemspinBox"));
        ItemspinBox->setGeometry(QRect(200, 10, 42, 31));
        addItemButton = new QPushButton(scrollAreaWidgetContents);
        addItemButton->setObjectName(QString::fromUtf8("addItemButton"));
        addItemButton->setGeometry(QRect(250, 10, 41, 31));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 50, 281, 261));
        textBrowser->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        day_edit = new QLineEdit(scrollAreaWidgetContents);
        day_edit->setObjectName(QString::fromUtf8("day_edit"));
        day_edit->setGeometry(QRect(10, 10, 81, 31));
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(140, 220, 231, 41));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 229, 39));
        label_5 = new QLabel(scrollAreaWidgetContents_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 101, 20));
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        sum_label = new QLabel(scrollAreaWidgetContents_2);
        sum_label->setObjectName(QString::fromUtf8("sum_label"));
        sum_label->setGeometry(QRect(130, 10, 63, 20));
        sum_label->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"font: 700 12pt \"Segoe UI\";"));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        excel_button = new QPushButton(centralwidget);
        excel_button->setObjectName(QString::fromUtf8("excel_button"));
        excel_button->setGeometry(QRect(10, 50, 101, 29));
        excel_button->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 889, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(closeButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Aikuisia:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Isoja lapsia:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Pieni\303\244 lapsia:", nullptr));
        adult_label->setText(QString());
        bigClabel->setText(QString());
        smallClabel->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Viivakoodi", nullptr));
        closeButton->setText(QCoreApplication::translate("MainWindow", "Sulje", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "Hae", nullptr));
        addFamilyButton->setText(QCoreApplication::translate("MainWindow", "Lis\303\244\303\244 uusi perhe", nullptr));
        Edit_Button->setText(QCoreApplication::translate("MainWindow", "Muokkaa", nullptr));
        itemComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Ruokakassi", nullptr));
        itemComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Py\303\266r\303\244", nullptr));
        itemComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Lelu", nullptr));
        itemComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Tuoli", nullptr));
        itemComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "P\303\266yt\303\244", nullptr));
        itemComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Tietokone", nullptr));
        itemComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "Puhelin", nullptr));
        itemComboBox->setItemText(7, QCoreApplication::translate("MainWindow", "Sohva", nullptr));
        itemComboBox->setItemText(8, QCoreApplication::translate("MainWindow", "S\303\244nky", nullptr));
        itemComboBox->setItemText(9, QString());

        addItemButton->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Yhteens\303\244 :", nullptr));
        sum_label->setText(QString());
        excel_button->setText(QCoreApplication::translate("MainWindow", "Sy\303\266ta excel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
