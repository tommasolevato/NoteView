/*
 * Subject.h
 *
 *  Created on: 05/set/2011
 *      Author: tommaso
 */

#ifndef SUBJECT_H_
#define SUBJECT_H_

#include <list>
#include "Observer.h"

class Observer;

class Subject
{
public:
	virtual ~Subject() = 0;

	virtual void registerObserver(Observer* o);
	virtual void unregisterObserver(Observer* o);
	virtual void notifyAll();

private:
	std::list<Observer*> _obs;
};


#endif /* SUBJECT_H_ */
