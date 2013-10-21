#ifndef MODIFYDIALOG_H
#define MODIFYDIALOG_H

#include <QtWidgets/QDialog>
#include "UI_ModifyDialog.h"

class ModifyDialog : public QDialog
{
    Q_OBJECT

public:
    ModifyDialog( QWidget *parent = 0 );
    ~ModifyDialog();

    string getNoteName() const;
    QString getNoteText() const;

    void setNoteName( QString name );
    void setNoteText( QString text );

private:
    Ui::ModifyDialogClass ui;
};

#endif // MODIFYDIALOG_H
