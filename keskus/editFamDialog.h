#ifndef EDITFAMDIALOG_H
#define EDITFAMDIALOG_H
#include "info.hh"
#include <QDialog>
#include <QMessageBox>

namespace Ui {
class EditDialog;
}

class EditDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditDialog(QWidget *parent = nullptr);
    ~EditDialog();

    void set_dialog(int barnumber);

private slots:
    void on_ok_Button_clicked();

private:
    Ui::EditDialog *ui_;
    Info info_;
};

#endif // EDITFAMDIALOG_H
