/*
*Author: @SalsuPalsu
*The main window, that displays all the needed information
*From this window, you can choose to:
* Search a member with a barcode
* Add a member
* Edit member's information
* Give items to the member
* Add a large number of members by choosing a csv-file
*/

#include "mainwindow.hh"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui_(new Ui::MainWindow)
{
    ui_->setupUi(this);

    QDate date = QDate::currentDate();
    QString date2 = QString::number(date.day()) + '/' + QString::number(date.month()) + '/' + QString::number(date.year());

    ui_->day_edit->setText(date2);

}

MainWindow::~MainWindow()
{
    delete ui_;
}

//Calls Class Info's function return_val to get family's values by given barnumber
//Shows found family's values
//If there are no values, tells about it
void MainWindow::on_searchButton_clicked()
{
    int barn = ui_ -> barnumberEdit -> text().toInt();
    vector<string> values = info_.return_val(barn);
    int val = 0;

    if (values.size() == 0){

        QMessageBox::warning(this, "Not found", "Viivakoodilla ei löytynyt perhettä");
        ui_->adult_label -> setText("");
        ui_->bigClabel -> setText("");
        ui_->smallClabel -> setText("");
        ui_->textBrowser->setText("");
        ui_->sum_label->setText("");
    } else{
        ui_->adult_label -> setText(QString::fromStdString(values.at(0)));
        ui_->bigClabel -> setText(QString::fromStdString(values.at(1)));
        ui_->smallClabel -> setText(QString::fromStdString(values.at(2)));
        ui_->textBrowser->setText((QString::fromStdString(info_.get_items(barn))));
        val = stoi(values.at(0)) + stoi(values.at(1))+ stoi(values.at(2));
        ui_->sum_label->setText(QString::number(val));
    }

}


//Opens a dialog for adding new family
void MainWindow::on_addFamilyButton_clicked()
{
    AddFamDialog *dialog = new AddFamDialog();
    dialog->show();
}

//Opens a dialog for editing family
void MainWindow::on_Edit_Button_clicked()
{

    int barn = ui_ -> barnumberEdit -> text().toInt();
    if (barn > 0){
        EditDialog *edit = new EditDialog();

        edit->set_dialog(barn);

        edit->show();
    }
}

//Adds items to a family
void MainWindow::on_addItemButton_clicked()
{
    if (ui_->ItemspinBox->value() > 0 && ui_->barnumberEdit->text().length() > 0){

        string dates = ui_->day_edit-> text().toStdString();
        QString text = ui_->itemComboBox->currentText();
        int sum = ui_ -> ItemspinBox->value();

        string items = dates + " " +  to_string(sum) + " kpl   " + text.toStdString();


        info_.add_items(ui_->barnumberEdit->text().toInt(), items);
        ui_ ->textBrowser->setText(QString::fromStdString(info_.get_items(ui_->barnumberEdit->text().toInt())));
    }
}

//Opens a dialog for searching files to be added
void MainWindow::on_excel_button_clicked()
{
    FileSearcherDialog *new_excel = new FileSearcherDialog();

    new_excel ->show();


}

