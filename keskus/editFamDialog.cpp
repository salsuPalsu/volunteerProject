#include "editFamDialog.h"
#include "ui_editFamDialog.h"

EditDialog::EditDialog(QWidget *parent) :
    QDialog(parent),
    ui_(new Ui::EditDialog)
{
    ui_->setupUi(this);

}

EditDialog::~EditDialog()
{
    delete ui_;
}

//Checks if the barcode is used and shows it's information
//If there is no information, says there's no information
void EditDialog::set_dialog(int barnumber)
{
    vector<string> values = info_.return_val(barnumber);

    if (values.size() == 0){

        QMessageBox::warning(this, "Not found", "Family not found");

    } else {
        ui_->Numberlabel->setText(QString::number(barnumber));
        ui_->AdultspinBox -> setValue(stoi(values.at(0)));
        ui_->BigCspinBox -> setValue(stoi(values.at(1)));
        ui_->SmallCspinBox -> setValue(stoi(values.at(2)));
    }
}

// Edits the family's information (family's headcount), that was on the barcode
void EditDialog::on_ok_Button_clicked()
{

    int numb;
    int adults;
    int children;
    int small_children;

    numb = ui_ -> Numberlabel -> text().toInt();
    adults = ui_ ->AdultspinBox -> value();
    children = ui_ -> BigCspinBox -> value();
    small_children = ui_ -> SmallCspinBox -> value();

    info_.edit_family(numb, adults, children, small_children);

    QMessageBox::StandardButton reply =
            QMessageBox::information(this, "Family edited", "Perheen uudet tiedot ovat tallennettu", QMessageBox::Ok);

    if (reply == QMessageBox::Ok){
        close();
    }

}

