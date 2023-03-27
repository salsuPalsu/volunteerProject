/********************************************************************************
** Form generated from reading UI file 'fileExDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEEXDIALOG_H
#define UI_FILEEXDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FileSearchD
{
public:
    QLabel *label;
    QPushButton *OpenFileButton;
    QLabel *label_2;
    QLabel *file_name;
    QPushButton *pushButton;

    void setupUi(QDialog *FileSearchD)
    {
        if (FileSearchD->objectName().isEmpty())
            FileSearchD->setObjectName(QString::fromUtf8("FileSearchD"));
        FileSearchD->resize(400, 300);
        label = new QLabel(FileSearchD);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 91, 20));
        OpenFileButton = new QPushButton(FileSearchD);
        OpenFileButton->setObjectName(QString::fromUtf8("OpenFileButton"));
        OpenFileButton->setGeometry(QRect(20, 40, 141, 29));
        label_2 = new QLabel(FileSearchD);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 91, 20));
        file_name = new QLabel(FileSearchD);
        file_name->setObjectName(QString::fromUtf8("file_name"));
        file_name->setGeometry(QRect(120, 80, 63, 20));
        pushButton = new QPushButton(FileSearchD);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 160, 71, 29));

        retranslateUi(FileSearchD);

        QMetaObject::connectSlotsByName(FileSearchD);
    } // setupUi

    void retranslateUi(QDialog *FileSearchD)
    {
        FileSearchD->setWindowTitle(QCoreApplication::translate("FileSearchD", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FileSearchD", "Etsi tiedosto:", nullptr));
        OpenFileButton->setText(QCoreApplication::translate("FileSearchD", "Avaa tiedostonhaku", nullptr));
        label_2->setText(QCoreApplication::translate("FileSearchD", "Valittu tiedosto:", nullptr));
        file_name->setText(QString());
        pushButton->setText(QCoreApplication::translate("FileSearchD", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileSearchD: public Ui_FileSearchD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEEXDIALOG_H
