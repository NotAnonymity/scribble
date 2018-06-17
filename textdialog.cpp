#include "textdialog.h"
#include "ui_textdialog.h"

TextDialog::TextDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TextDialog)
{
    ui->setupUi(this);
}
void TextDialog::showResults(QString s)
{
    ui->textEdit->setText(s);
}
TextDialog::~TextDialog()
{
    delete ui;
}
