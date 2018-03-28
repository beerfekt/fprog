#pragma once
#include "eintrag.h"
#include <string>
#include <sstream>
#include <iosfwd>
#include <vector>

/*
    TODO:

    die beiden Dinger definieren:

    Person(Person&&) = default;
    Person& operator=(Person&&) = default;

    Person als interface basteln mit unterpersonen (freund, kollege etc.)?
*/


class Person
        :public Eintrag
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
    virtual std::vector<std::string> ausgabe() const override;
    //Evt. string array mit einzeldaten
    //und das ganze als template siehe unterlagen
};


//Ausgabe
std::ostream& operator<<(std::ostream& outputStream, const Person& p);


//swap
void swap(Person& a, Person& b);
