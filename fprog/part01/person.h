#pragma once
#include <string>
#include <sstream>
#include <iosfwd>

/*
    TODO:

    die beiden Dinger definieren:

    Person(Person&&) = default;
    Person& operator=(Person&&) = default;

    Person als interface basteln mit unterpersonen (freund, kollege etc.)?
*/


class Person
{
    std::string mFirstName;
    std::string mLastName;

    //Ausgabe
    friend std::ostream& operator<<(std::ostream& outputStream, const Person& p);

public:


    //Rule of Three *
    Person() = delete;   //*
    Person(const Person& other);
    Person& operator = (Person&& other); //*

/*
    //murks?
    Person(Person&& other) = default ;
    Person& operator=(Person&& other) = default;
*/
    explicit Person(std::string firstName, std::string lastName);
    ~Person() = default; //*


    //getter
    std::string getFirstName () const;
    std::string getLastName  () const;

    //setter
    void setFirstName(const std::string& firstName );
    void setLastName (const std::string& lastName  );

    //funktionen
    void swap(Person& other);

};

//Ausgabe
std::ostream& operator<<(std::ostream& outputStream, const Person& p);
//swap
void swap(Person& a, Person& b);
