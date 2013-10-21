#include "ModifyDialog.h"

ModifyDialog::ModifyDialog( QWidget *parent )
    : QDialog( parent )
{
	ui.setupUi( this );
}

ModifyDialog::~ModifyDialog()
{
}

QString ModifyDialog::getNoteName() const
{
    return ui.noteName->text();
}

QString ModifyDialog::getNoteText() const
{
    return ui.noteText->toPlainText();
}

void ModifyDialog::setNoteName( QString name )
{
    ui.noteName->setText( name );
}

void ModifyDialog::setNoteText( QString text )
{
    ui.noteText->setPlainText( text );
}
