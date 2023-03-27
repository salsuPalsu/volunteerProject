/********************************************************************************
** Form generated from reading UI file 'editFamDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITFAMDIALOG_H
#define UI_EDITFAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_EditDialog
{
public:
    QSpinBox *SmallCspinBox;
    QLabel *label;
    QLabel *label_3;
    QSpinBox *BigCspinBox;
    QLabel *label_2;
    QSpinBox *AdultspinBox;
    QPushButton *ok_Button;
    QLabel *label_4;
    QLabel *Numberlabel;
    QPushButton *pushButton;

    void setupUi(QDialog *EditDialog)
    {
        if (EditDialog->objectName().isEmpty())
            EditDialog->setObjectName(QString::fromUtf8("EditDialog"));
        EditDialog->resize(428, 381);
        SmallCspinBox = new QSpinBox(EditDialog);
        SmallCspinBox->setObjectName(QString::fromUtf8("SmallCspinBox"));
        SmallCspinBox->setGeometry(QRect(180, 180, 61, 41));
        label = new QLabel(EditDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 80, 63, 20));
        label_3 = new QLabel(EditDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 180, 101, 20));
        BigCspinBox = new QSpinBox(EditDialog);
        BigCspinBox->setObjectName(QString::fromUtf8("BigCspinBox"));
        BigCspinBox->setGeometry(QRect(180, 130, 61, 41));
        label_2 = new QLabel(EditDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 130, 91, 20));
        AdultspinBox = new QSpinBox(EditDialog);
        AdultspinBox->setObjectName(QString::fromUtf8("AdultspinBox"));
        AdultspinBox->setGeometry(QRect(180, 80, 61, 41));
        ok_Button = new QPushButton(EditDialog);
        ok_Button->setObjectName(QString::fromUtf8("ok_Button"));
        ok_Button->setGeometry(QRect(230, 270, 93, 29));
        label_4 = new QLabel(EditDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 20, 71, 20));
        Numberlabel = new QLabel(EditDialog);
        Numberlabel->setObjectName(QString::fromUtf8("Numberlabel"));
        Numberlabel->setGeometry(QRect(180, 20, 63, 20));
        pushButton = new QPushButton(EditDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 270, 93, 29));

        retranslateUi(EditDialog);
        QObject::connect(pushButton, &QPushButton::clicked, EditDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(EditDialog);
    } // setupUi

    void retranslateUi(QDialog *EditDialog)
    {
        EditDialog->setWindowTitle(QCoreApplication::translate("EditDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EditDialog", "AIKUISIA:", nullptr));
        label_3->setText(QCoreApplication::translate("EditDialog", "PIENI\303\204 LAPSIA:", nullptr));
        label_2->setText(QCoreApplication::translate("EditDialog", "ISOJA LAPSIA:", nullptr));
        ok_Button->setText(QCoreApplication::translate("EditDialog", "OK", nullptr));
        label_4->setText(QCoreApplication::translate("EditDialog", "VIIVAKOODI:", nullptr));
        Numberlabel->setText(QString());
        pushButton->setText(QCoreApplication::translate("EditDialog", "Peruuta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditDialog: public Ui_EditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITFAMDIALOG_H
