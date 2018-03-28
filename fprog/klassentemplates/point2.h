#pragma once

#include <iostream>



//allgemeine Templates
    // (Vorlage für spezialisierte Varianten)

//Template1
template <typename T>
class Point2;

//Template2
template <typename T>
std::ostream& operator<<(std::ostream& out,const Point2<T>& point);




//spezialisierte Templates

    //Template1 point2
template <typename T>
class Point2 {

    T mX = 0,
      mY = 0;

public:
    Point2(const T& x, const T& y)
        : mX(x), mY(y)
    {}

    const T& getX() const{
        return mX;
    }

    const Point2& setX(const T& x){
        mX = x;
        return *this;
    }
    //friend Deklaration für Template2 via <> (ohne <T>)
    friend std::ostream& operator<< <>(std::ostream& out, const Point2& point);
};

//Template2 spezialisiert (mit <T>)
template <typename T>
std::ostream& operator<<(std::ostream& out, const Point2<T>& point){
    out << "Point [ " << point.mX << ", " << point.mY << " ] " ;
    return out;
}



