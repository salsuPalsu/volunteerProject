#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "info.hh"
#include "addFamDialog.h"
#include "editFamDialog.h"
#include "fileExDialog.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QLabel>
#include <QDate>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    // void on_barnumberEdit_editingFinished();



    void on_searchButton_clicked();

    void on_addFamilyButton_clicked();

    void on_Edit_Button_clicked();

    void on_addItemButton_clicked();

    void on_excel_button_clicked();

private:
    Info info_;
    Ui::MainWindow *ui_;


};
#endif // MAINWINDOW_H
