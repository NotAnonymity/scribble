#ifndef FILLINGDIALOG_H
#define FILLINGDIALOG_H
#include "scribblearea.h"
#include <QDialog>
#include <QBrush>
namespace Ui {
class FillingDialog;
}

class FillingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FillingDialog(QWidget *parent = 0);
    ~FillingDialog();
    void setScribble(ScribbleArea *s);
private:
    Ui::FillingDialog *ui;
    int style;
    int index;
    int transparence;
    int type;
    bool opaque;
    QBrush brush;
    QColor color;
    ScribbleArea *scribble;

public slots:
   void fillRect();
   void setBrushStyle();
    void fillEllispe();
    void trans();
   void getIndex();
    void setColor();
    void saveSetting();

};

#endif // FILLINGDIALOG_H
