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




//funktionen


void Person::swap(Person& other) {
    using std::swap;
    swap(mFirstName, other.mFirstName);
    swap(mLastName, other.mLastName);
}












//öffentliche Schnittstelle

std::ostream& operator<<(std::ostream& outputStream, const Person& p){
    outputStream << "Person : " << p.mFirstName << " " << p.mLastName ;
    return outputStream;
};


void swap(Person& a, Person& b) {
    a.swap(b);
}




