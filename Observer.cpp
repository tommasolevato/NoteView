/*
 * Observer.cpp
 *
 *  Created on: 05/set/2011
 *      Author: tommaso
 */

#include "Observer.h"

Observer::Observer(Subject* s)
{
	_sub = s;
}

Observer::~Observer()
{
	_sub->unregisterObserver( this );
}

void Observer::attach()
{
	_sub->registerObserver( this );
}

void Observer::detach()
{
	_sub->unregisterObserver( this );
}
