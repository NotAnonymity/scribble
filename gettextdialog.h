#ifndef GETTEXTDIALOG_H
#define GETTEXTDIALOG_H

#include <QDialog>
#include <QString>
#include "scribblearea.h"
namespace Ui {
class GetTextDialog;
}

class GetTextDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GetTextDialog(QWidget *parent = 0);
    ~GetTextDialog();

    void setScribble(ScribbleArea *s);
private slots:
    void setText();
private:
    Ui::GetTextDialog *ui;
    QString t;
    ScribbleArea *scribble;
    bool ok;
};

#endif // GETTEXTDIALOG_H
