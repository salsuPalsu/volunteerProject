/*
*Author: @SalsuPalsu
*A separate dialog for adding a new family to the system
*Asks for a barcode and the number of members (Adults & children & small children)
*Uses a barcode number to identify the added family
*If the number is already in use, user will not be able to add the family to the system -> has to change the barcode
*
*/

#include "addFamDialog.h"
#include "ui_addFamDialog.h"

AddFamDialog::AddFamDialog(QWidget *parent) :
    QDialog(parent),
    ui_(new Ui::AddDialog)
{
    ui_->setupUi(this);
}

AddFamDialog::~AddFamDialog()
{
    delete ui_;
}

//Adds family's info to the assigned text-file.
//If the barcode is already used, new family cannot be added (another barcode has to be used)
void AddFamDialog::on_ok_Button_clicked()
{
    int numb;
    int adults;
    int children;
    int small_children;

    numb = ui_ -> barEdit -> text().toInt();

    //checks if the barcode already exists
    if (info_.find_family(numb) == false){
        adults = ui_ ->AdultspinBox -> value();

        if (adults > 0){
            children = ui_ -> BigCspinBox -> value();
            small_children = ui_ -> SmallCspinBox -> value();

            info_.new_family(numb, adults, children, small_children);

            QMessageBox::StandardButton reply =
                    QMessageBox::information(this, "Family added", "Uusi perhe on lisätty", QMessageBox::Ok);

            if (reply == QMessageBox::Ok){
                close();
            }

        }

    }
    else {

        QMessageBox::warning(this, "Cannot add", "Viivakoodi löytyy jo. Kokeile toista viivakoodia", QMessageBox::Ok);
    }
}

