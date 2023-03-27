#include "fileExDialog.h"
#include "ui_fileExDialog.h"

FileSearcherDialog::FileSearcherDialog(QWidget *parent) :
    QDialog(parent),
    ui_(new Ui::FileSearchD)
{
    ui_->setupUi(this);
}

FileSearcherDialog::~FileSearcherDialog()
{
    delete ui_;
}

//Opens a file explorer
//Can only select files that are csv
void FileSearcherDialog::Browse()
{

    QString directory = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                     "/home",
                                                     tr("Documents (*.csv)"));
    if (!directory.isEmpty()){
        ui_->file_name->setText(directory);
    }

}

//If ok-button is clicked, calls for a function that opens a file explorer
void FileSearcherDialog::on_OpenFileButton_clicked()
{
    Browse();
}

//Checks if the file has correct information by calling class Info's function: addFromFile
//If file has correct format, tells that the new info is added
//If not, tells there has been a mistake and the user should check the file
//Closes the dialog
void FileSearcherDialog::on_pushButton_clicked()
{
    if (info_.addFromFile(ui_->file_name->text().toStdString()) == true) {

        QMessageBox::information(this, "Excel added", "Uudet koodit lisätty onnistuneesti", QMessageBox::Ok);

    } else {
        QString checkFileInfo = "Uusia koodeja ei voitu lisätä. Tarkista seuraavat asiat tiedostostasi: "
                                "\n\n -Tiedoston ensimmäinen rivi koostuu otsikoista (nimillä ei ole väliä):"
                                "\n | viivakoodi | aikuisten lkm | lapsien lkm| pienten lasten lkm |"
                                "\n\n -Otsikoiden jälkeen tiedostossa on VAIN numeroita (0123456789):"
                                "\n     |293889| 1 | 0 | 2 |"
                                "\n\n - Tiedostossa on VAIN 4 SARAKETTA"
                                "\n\n - Alla esimerkki oikeanlaisesta tiedostosta:"
                                "\n     |viivakoodi|aikuiset|lapset|pienetLapset|"
                                "\n     |10002999  |   1    |  2   |      0     |"
                                "\n     |132333    |   2    |  0   |      3     |" ;

        QMessageBox::information(this, "Excel not added", checkFileInfo, QMessageBox::Ok);

    }

    close();
}

