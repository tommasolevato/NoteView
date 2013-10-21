/*
 * Observer.h
 *
 *  Created on: 05/set/2011
 *      Author: tommaso
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_

#include "Subject.h"

class Subject;

class Observer
{
public:
	Observer(Subject* s);
	virtual ~Observer();

	virtual void update() = 0;
	virtual void attach();
	virtual void detach();

protected:
	Subject* _sub;
};



#endif /* OBSERVER_H_ */
