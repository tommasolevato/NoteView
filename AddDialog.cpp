#include "AddDialog.h"

AddDialog::AddDialog( QWidget *parent )
    : QDialog( parent )
{
	ui.setupUi( this );
}

AddDialog::~AddDialog()
{

}

QString AddDialog::getNoteNameEdit() const
{
    return ui.noteName->text();
}

QString AddDialog::getNoteTextEdit() const
{
    return ui.noteText->toPlainText();
}
