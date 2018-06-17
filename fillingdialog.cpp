#include "fillingdialog.h"
#include "scribblearea.h"
#include "ui_fillingdialog.h"
#include <QColor>
#include <QColorDialog>
#include <QDebug>
FillingDialog::FillingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FillingDialog)
{
    ui->setupUi(this);
    index = 2;
    transparence = 255;
    ui->comboBox->addItem("SolidPattern");
    ui->comboBox->addItem("Dense2Pattern");
    ui->comboBox->addItem("Dense4Pattern");
    ui->comboBox->addItem("Dense6Pattern");
    ui->comboBox->addItem("HorPattern");
    ui->comboBox->addItem("VerPattern");
    ui->comboBox->addItem("CrossPattern");

    connect(ui->RectangleButton, SIGNAL(clicked()), this, SLOT(fillRect()));
    connect(ui->EllipseButton, SIGNAL(clicked()), this, SLOT(fillEllispe()));
    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(getIndex()));
    connect(ui->spinBox, SIGNAL(setValue(int)), this, SLOT(trans()));
    connect(ui->colorButton, SIGNAL(clicked()), this, SLOT(setColor()));
    connect(ui->okButton, SIGNAL(clicked()), this, SLOT(saveSetting()));
}


FillingDialog::~FillingDialog()
{
    delete ui;
}
void FillingDialog::fillRect()
{
    type = ScribbleArea::Rect;
}

void FillingDialog::fillEllispe()
{
    type = ScribbleArea::Ellipse;
}
void FillingDialog::getIndex()
{
    index = ui->comboBox->currentIndex();
}
void FillingDialog::setBrushStyle()
{
    switch (index) {
    case 2:
        brush.setStyle(Qt::SolidPattern);
        break;
    case 3:
        brush.setStyle(Qt::Dense2Pattern);
        break;
    case 4:
        brush.setStyle(Qt::Dense4Pattern);
        break;
    case 5:
        brush.setStyle(Qt::Dense6Pattern);
        break;
    case 6:
        brush.setStyle(Qt::HorPattern);
        break;
    case 7:
        brush.setStyle(Qt::VerPattern);
        break;
    case 8:
        brush.setStyle(Qt::CrossPattern);
        break;
    }

}
void FillingDialog::trans()
{
    transparence = ui->spinBox->value();
}

void FillingDialog::setColor()
{
    QColorDialog *cdlg = new QColorDialog;
    QColor newColor = cdlg->getColor();
    if (newColor.isValid())
     color = newColor;
    delete(cdlg);

}
void FillingDialog::setScribble(ScribbleArea *s)
{
    scribble = s;
}
void FillingDialog::saveSetting()
{
    qDebug() << type;
    setBrushStyle();
    color.setAlpha(transparence);
    brush.setColor(color);
    scribble->setFillStyle(type, brush);
    this->close();
}
