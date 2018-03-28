#pragma once

#include <iostream> //Wichtig für diese Version der Templates


//Klassentemplate
    // Mit Typparameter T zur Modellierung der Koordinaten
template <typename T>
class Point;

//ostreamtemplate
template <typename T>
std::ostream& operator <<(std::ostream& out, const Point<T>& point);




//Klassentemplate spezialisiert
template <typename T>
class Point
{

    T mX,
      mY;

public:



    //Konstruktor
    Point(const T& x = 0, const T& y = 0)
        : mX(x), mY(y)
    {}

    //Friend Ausgabe
    friend std::ostream& operator<< <>(std::ostream& out, const Point& point);

    //Getter
    const T& getX() const
    {
        return mX;
    }

    //Setter
    Point& setX(const T& x)
    {
        mX = x;
        return *this;
    }


    Point& setY(const T& y)
    {
        mY = y;
        return *this;
    }


};

//ostreamtemplate spezialisiert
template<typename T>
std::ostream& operator<<(std::ostream& out, const Point<T>& point){
    out << "Point: [" << point.mX
                      << ", " << point.mY << " ]" ;
    return out;
}

