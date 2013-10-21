/*
 * Note.cpp
 *
 *  Created on: 01/set/2011
 *      Author: tommaso
 */

#include "Note.h"

using namespace std;

Note::Note( string name, string text ) : _name( name ), _text( text )
{
}

string Note::getName() const
{
	return _name;
}

string Note::read() const
{
	return _text;
}

void Note::setName( string name )
{
	_name = name;
}

void Note::write( string text )
{
	_text = text;
}
