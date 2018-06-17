#include "gettextdialog.h"
#include "ui_gettextdialog.h"

GetTextDialog::GetTextDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GetTextDialog)
{
    ui->setupUi(this);
}

GetTextDialog::~GetTextDialog()
{
    delete ui;
}
