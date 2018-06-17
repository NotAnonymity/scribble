#include "gettextdialog.h"
#include "ui_gettextdialog.h"
#include "scribblearea.h"

GetTextDialog::GetTextDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GetTextDialog)
{
    ui->setupUi(this);
    ok = false;
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(setText()));

}
void GetTextDialog::setScribble(ScribbleArea *s)
{
    scribble = s;
}
void GetTextDialog::setText()
{
    scribble->setText(ui->textEdit->toPlainText());
    this->close();
}

GetTextDialog::~GetTextDialog()
{
    delete ui;
}
