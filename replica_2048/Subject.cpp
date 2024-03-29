#include "Subject.h"
#include "Observer.h"
Subject::Subject()
{

}

void Subject::notifyObservers()
{
    for (Observer* o : this->obs)
        o->notify();
}

void Subject::registerObserver(Observer* observer)
{
    obs.push_back(observer);
}
