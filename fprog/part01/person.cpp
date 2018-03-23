#include "person.h"

//constructor
Person::Person(std::string firstName, std::string lastName)
    : mFirstName(firstName), mLastName(lastName)
{
}


//getter
std::string Person::getFirstName () const
{
    return mFirstName;
}

std::string Person::getLastName  () const
{
   return mLastName;
}


//setter
void Person::setFirstName(const std::string& firstName )
{
    mFirstName = firstName;
}


void Person::setLastName (const std::string& lastName  )
{
    mLastName = lastName;
}



//öffentliche Schnittstelle

std::ostream& operator<<(std::ostream& outputStream, const Person& p){
    outputStream << "Person : " << p.mFirstName << " " << p.mLastName ;
    return outputStream;
};
