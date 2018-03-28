#pragma once
#include <string>

/*
    Templates werden in explizite Headerdatei geschrieben
*/



//maximum
    //- allgemeines Template

template <typename T>
const T& maximum(const T& a, const T& b)
{
    if (a > b) return a;
    return b;
}

    //- spezialisiertes Template für <std::string> ausnahme
    //  soll string länge statt lexikografisch vergleichen

template<>
const std::string& maximum <std::string>(const std::string& a,const std::string& b)
{
    if (a.length() > b.length()) return a;
    return b;
}








/*
   3.1.5 Funktionstemplates mit mehreren Parametern
*/

template<typename T, typename U>
void foo(T a, U b)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}


template<typename T>
void bar(T a, T b)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}


template<typename T, typename U>
T convert(const U &v) {
    return static_cast<T>(v);
}


/*
    3.1.6. Überladen von Funktionstemplates
*/


//Der mehr spezialisierte Parameter bestimmt den Typ:

//Bsp.1
template<typename T>
void g(T x, int y) {  //y da int
}

//Bsp.2
template<typename T>
void f(T& x) {
}
template<typename T>
void f(T* x) { //Compiler nimmt diese
               //da T* genauer definiert wurde
}



/*
    3.1.7. Vorgabe-Typen für Template-Typ-Parameter
*/

template <typename T = int>
T vorgabe(){
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    return T{};
}


/*

*/
