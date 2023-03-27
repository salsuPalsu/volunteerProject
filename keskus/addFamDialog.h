#ifndef ADDFAMDIALOG_H
#define ADDFAMDIALOG_H
//#include "mainwindow.hh"
#include "info.hh"
#include <QDialog>
#include <QMessageBox>

namespace Ui {
class AddDialog;
}

class AddFamDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddFamDialog(QWidget *parent = nullptr);
    ~AddFamDialog();

private slots:
    void on_ok_Button_clicked();

private:
    Ui::AddDialog *ui_;

    Info info_;
};

#endif // ADDFAMDIALOG_H
