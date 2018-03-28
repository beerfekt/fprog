#include <iostream>
#include <templates.h>
#include <integer.h>

using namespace std;


//LE20 - Generische Programmierung

//primitive DT
/*
template <typename T>  //template erklärung mit parameter T
//der konkrete Typ muss alle anforderungen (z.b. <) erfüllen
const T& maximum(const T& a,const T& b)  //ref in, ref out
{
   if (a > b)
   {
       return a;
   }
   return b;
}
*/






int main()
{
    cout << "Fprog - Elemente!" << __cplusplus << endl;

//int
    int x = 2;
    int y = 3;
    cout << maximum(x,y) << endl;

//double
    double d1 = 3.33221;
    double d2 = 8.04232;
    cout << maximum(d1,d2) << endl;

//string

    string str1 = "abc";
    string str2 = "def";
    cout << maximum(str1,str2) << endl;


//UDT

//schlägt zu diesem Zeitpunkt fehl,
//da der Operator > nicht überschrieben wurde
    /*
        A a;
        A b;
        maximum(a,b) -> fail!
    */


//Implizite, Explizite Instanziierung
    //Um Mehrfacherzeugungen/duplizierungen zu vermeiden
    // die den Kompiler zur entfernung der duplizierung zwingen

    //BSP:
    Integer i1 {1};
    Integer i2 {2};

//    Integer result1 = maximum(i1,i2);         //Implizit
      Integer result2 = maximum<Integer>(i1,i2);//Explizit - Keine Doubles
      cout << "Integer: " << result2 <<  endl
           << endl
           << endl;






/*
  3.1.5 Funktionstemplates mit mehreren Parametern
*/

      const int a = 1;
      foo(a, Integer{1});          //T -> int, U -> Integer
      int i = convert<int>(2.0);   //T -> int, U -> Double
      //bar(1, 2.0);



/*
  3.1.7. Vorgabe-Typen für Template-Typ-Parameter
*/
      int ii = vorgabe();           //implizit -> vorgabe int
      double d = vorgabe<double>(); //explizit -> keine vorgabe genommen


/*
    Spezialisierung von Funktionstemplates

       //1. allgemeines Template
      template<typename T>
      void foo(const T&) {}

      //2. spezialisierte ausnahme für einen Typ <int>
      //   - setzt allgemeines Template vorraus
      template<>
      void foo<int>(const int&) {}
*/

/*
 * 3.1.10. Auflösung

    1. konkrete Funktionen ohne Anwendung impliziter Argumentkonvertierungen
    2. spezialisierte Funktionstemplates
    3. allgemeien Funktionstemplates
    4. konkrete Funktionen mit Anwendung impliziter Argumentkonvertierungen
*/

    std::string str3 ="test";
    std::string str4 ="tester";

    cout <<"Spezialisiertes Maximum Template:  " << maximum(str3,str4) << endl
         << endl;


    return 0;
}
