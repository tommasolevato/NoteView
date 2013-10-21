/*
 * Subject.cpp
 *
 *  Created on: 05/set/2011
 *      Author: tommaso
 */

#include "Subject.h"

using namespace std;

Subject::~Subject()
{
}

void Subject::registerObserver( Observer* o )
{
	_obs.push_back( o );
}

void Subject::unregisterObserver( Observer* o )
{
	_obs.remove( o );
}

void Subject::notifyAll()
{
	list<Observer*>::iterator itr;
	for( itr = _obs.begin(); itr != _obs.end(); itr++ ) {
		(*itr)->update();
	}
}
