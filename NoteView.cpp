#include "NoteView.h"
#include "ModifyDialog.h"
#include "AddDialog.h"

NoteView::NoteView( QWidget *parent,
		NoteController* controller, NoteModel* model )
    : QWidget(parent), Observer( model )
{
	ui.setupUi(this);
	_controller = controller;
}

NoteView::~NoteView()
{
}

void NoteView::update()
{
	showNotes();
}

void NoteView::showNotes()
{
	ui.noteList->clear();
	unsigned int i = 0;
	while( _controller->getNoteName( i ) != "" )
	{
        QString string(_controller->getNoteName(i).c_str());
        ui.noteList->addItem( string );
		i++;
	}
}

void NoteView::addClicked()
{
	AddDialog dialog;
	if( dialog.exec() )
	{
        Note note( dialog.getNoteNameEdit().toStdString(), dialog.getNoteTextEdit().toStdString() );
        _controller->addNote( note );
	}

}

void NoteView::deleteClicked()
{
	if( ui.noteList->isItemSelected( ui.noteList->currentItem() ))
        _controller->removeNote( ui.noteList->currentItem()->text().toStdString() );
}

void NoteView::modifyClicked()
{
	ModifyDialog dialog;
	QString name = ui.noteList->currentItem()->text();
    string text = _controller->getNoteText( name.toStdString() );

	if( name != "" )
        dialog.setNoteName( name );
    if( text != "" ) {
        QString string(text.c_str());
        dialog.setNoteText( string );
    }
	if( dialog.exec() )
	{
        _controller->modifyNote( name.toStdString(), dialog.getNoteName().toStdString(), dialog.getNoteText().toStdString() );
	}
}
