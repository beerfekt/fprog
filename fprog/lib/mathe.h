#pragma once
#include <limits>
#include <cmath>

class Mathe
{
public:

    template <typename T>
    static bool gleich(T x, T y){
        if (std::numeric_limits<T>::is_integer)
        {
            return (x-y) == T(0);
        }
        else
        {
            const T epsilon = std::numeric_limits<T>::epsilon();
            if ((x-y) > -epsilon && (x-y) < epsilon) return true;
            return false;
        }
    }//gleich<T>


    //to_int
    template <typename T>
    static int to_int(T x){
        T rounded = std::round(x);
        return static_cast<int>(rounded);
    }

    //to_irgendwas {geht nicht?}
    template <typename from, typename to>
    static to to_irgendwas(from value, to){
        //from rounded = std::round(value);
        return static_cast<to>(value);
    }

};
