//INTERFACE

#pragma once
#include <string>
#include <vector>

class Eintrag
{
public:
    //TODO:
    //Evt. stattdessen entweder einzelne string list oder << operator überladen?
    virtual std::vector<std::string> ausgabe() const = 0;
    virtual ~Eintrag();
};





