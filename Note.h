/*
 * Note.h
 *
 *  Created on: 31/ago/2011
 *      Author: tommaso
 */

#ifndef NOTE_H_
#define NOTE_H_

#include <string>

using namespace std;

class Note
{
public:
    Note( string name, string text );

    string getName() const;
    string read() const;

    void setName( string name );
    void write( string text );

private:
    string _name;
    string _text;
};


#endif /* NOTE_H_ */
