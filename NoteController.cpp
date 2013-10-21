/*
 * NoteController.cpp
 *
 *  Created on: 03/set/2011
 *      Author: tommaso
 */

#include "NoteController.h"

using namespace std;

NoteController::NoteController( NoteModel* model ) : _model(model)
{
}

void NoteController::addNote( Note note )
{
	_model->addNote( note );
}

void NoteController::removeNote( string name )
{
    _model->removeNote( name );
}

void NoteController::modifyNote( string previousName, string name, string text )
{
	_model->modifyNote( previousName, name, text );
}

string NoteController::getNoteName( unsigned int pos ) const
{
	Note note = _model->getNote( pos );

	if( note.getName() != "" && note.read() != "" )
		return note.getName();
	return "";
}

string NoteController::getNoteText( string name )
{
	Note note = searchNote( name );
	if( note.getName() != "" && note.read() != "" )
		return note.read();
	return "";
}

Note NoteController::searchNote( string name )
{
	return _model->searchNote( name );
}
