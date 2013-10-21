/*
 * NoteController.h
 *
 *  Created on: 03/set/2011
 *      Author: tommaso
 */

#ifndef NOTECONTROLLER_H_
#define NOTECONTROLLER_H_

#include <QString>
#include <string>
#include "Note.h"
#include "NoteModel.h"

using namespace std;

class NoteController
{
public:
	NoteController( NoteModel* model );

    void addNote( Note note );
    void removeNote( string name );
    void modifyNote( string previousName, string name, const string text );

    string getNoteName( unsigned int pos ) const;
    string getNoteText( string name );

    Note searchNote( const string name );

private:
	NoteModel* _model;
};


#endif /* NOTECONTROLLER_H_ */
