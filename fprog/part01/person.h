#pragma once
#include <string>
#include <sstream>
#include <iosfwd>

class Person
{
    std::string mFirstName;
    std::string mLastName;

    //Ausgabe
    friend std::ostream& operator<<(std::ostream& outputStream, const Person& p);

public:
    Person(std::string firstName, std::string lastName);

    //getter
    std::string getFirstName () const;
    std::string getLastName  () const;

    //setter
    void setFirstName(const std::string& firstName );
    void setLastName (const std::string& lastName  );
};

//Ausgabe
std::ostream& operator<<(std::ostream& outputStream, const Person& p);
