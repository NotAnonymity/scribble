#ifndef GETTEXTDIALOG_H
#define GETTEXTDIALOG_H

#include <QDialog>

namespace Ui {
class GetTextDialog;
}

class GetTextDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GetTextDialog(QWidget *parent = 0);
    ~GetTextDialog();

private:
    Ui::GetTextDialog *ui;
};

#endif // GETTEXTDIALOG_H
