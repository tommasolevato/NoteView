#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QtWidgets/QDialog>
#include "UI_AddDialog.h"

class AddDialog : public QDialog
{
    Q_OBJECT

public:
    AddDialog( QWidget *parent = 0 );
    ~AddDialog();

    QString getNoteNameEdit() const;
    QString getNoteTextEdit() const;

private:
    Ui::AddDialogClass ui;
};

#endif // ADDDIALOG_H
