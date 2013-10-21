/*
 * NoteModel.h
 *
 *  Created on: 31/ago/2011
 *      Author: tommaso
 */

#ifndef NOTEMODEL_H_
#define NOTEMODEL_H_

#include <vector>
#include <QString>
#include <string>
#include "Note.h"
#include "Subject.h"

using namespace std;

class NoteModel : public Subject
{
public:
	virtual ~NoteModel();

	void addNote( Note note );
    void removeNote( string name );
    void modifyNote( string previousName, string name, string text );

	Note getNote( unsigned int pos ) const;
    Note searchNote( string name ) const;

	void fromDatabaseIntoVector();
	void fromVectorIntoDatabase();

private:
	std::vector<Note> _notes;
};


#endif /* NOTEMODEL_H_ */
