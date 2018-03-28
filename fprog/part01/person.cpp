#include "person.h"



//constructors

Person::Person(std::string firstName, std::string lastName)
    : mFirstName(firstName), mLastName(lastName)
{}


Person::Person(const Person& other)
    :mFirstName(other.mFirstName), mLastName(other.mLastName)
{}






//getters

std::string Person::getFirstName () const
{
    return mFirstName;
}

std::string Person::getLastName  () const
{
   return mLastName;
}


//setters

void Person::setFirstName(const std::string& firstName )
{
    mFirstName = firstName;
}


void Person::setLastName (const std::string& lastName  )
{
    mLastName = lastName;
}




//functions

Person& Person::operator=(Person&& other){
    swap(other);
    return *this;
}


void Person::swap(Person& other) {
    using std::swap;
    swap(mFirstName, other.mFirstName);
    swap(mLastName, other.mLastName);
}


//interface-function
std::vector<std::string> Person::ausgabe() const {
    return std::vector<std::string>{mFirstName, mLastName};
}








//öffentliche Schnittstelle

std::ostream& operator<<(std::ostream& outputStream, const Person& p){
    outputStream << "Person : " << p.mFirstName << " " << p.mLastName ;
    return outputStream;
}

void swap(Person& a, Person& b) {
    a.swap(b);
}




