/*
 * NoteModel.cpp
 *
 *  Created on: 01/set/2011
 *      Author: tommaso
 */

#include "NoteModel.h"
#include <fstream>

using namespace std;

NoteModel::~NoteModel()
{
	_notes.clear();
}

void NoteModel::addNote( Note note )
{
	_notes.push_back( note );
	fromVectorIntoDatabase();
	notifyAll();
}

void NoteModel::removeNote( string name )
{
	bool foundAndRemovedNote = false;
	for( vector<Note>::iterator itr = _notes.begin(); itr != _notes.end(), foundAndRemovedNote != true; itr++ )
        if( itr->getName() == name )
		{
			_notes.erase( itr );
			foundAndRemovedNote = true;
		}
	fromVectorIntoDatabase();
	notifyAll();
}

void NoteModel::modifyNote( string previousName, string name, string text )
{
	for( vector<Note>::iterator itr = _notes.begin(); itr != _notes.end(); itr++ )
		if( itr->getName() == previousName )
		{
			itr->setName( name );
			itr->write( text );
			fromVectorIntoDatabase();
			notifyAll();
		}
}

Note NoteModel::getNote( unsigned int pos ) const
{
	if( pos < _notes.size() )
		return _notes[ pos ];
	Note note( "", "" );
	return note;
}

Note NoteModel::searchNote( string name ) const
{
	for( vector<Note>::const_iterator itr = _notes.begin(); itr != _notes.end(); itr++ )
		if( itr->getName() == name )
			return (*itr);
	Note note( "", "" );
	return note;
}

void NoteModel::fromDatabaseIntoVector()
{
	ifstream input;
	string tempName;
	string tempText;
	_notes.clear();
	input.open("data.db", fstream::app);
	while(!input.eof())
	{
		getline(input, tempName, ';');
		if(tempName[0] == '\n')
			tempName.erase(0,1); //se il primo carattere � '\n' lo elimina dalla stringa
		getline(input, tempText, ';');
		if( tempName != "" && tempText != "")
		{
			Note note( tempName.c_str(), tempText.c_str() );
			_notes.push_back( note );
		}
	}
	input.close();
	notifyAll();
}

void NoteModel::fromVectorIntoDatabase()
{
	ofstream output;
	output.open("data.db");
	output.clear();
	for(vector<Note>::iterator itr = _notes.begin();
			itr != _notes.end(); itr++)
	{
        output << itr->getName() << ";";
        output << itr->read() << ";" << '\n';

	}
	output.close();
}
