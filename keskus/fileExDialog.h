#ifndef FILEEXDIALOG_H
#define FILEEXDIALOG_H

#include <QDialog>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include "info.hh"

namespace Ui {
class FileSearchD;
}

class FileSearcherDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FileSearcherDialog(QWidget *parent = nullptr);
    ~FileSearcherDialog();

    void Browse();
private slots:
    void on_OpenFileButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::FileSearchD *ui_;
    Info info_;

};

#endif // FILEEXDIALOG_H
