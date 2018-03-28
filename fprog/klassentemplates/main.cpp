#include <typeinfo>
#include <point.h>
#include <point2.h>
#include <mathe.h>
#include <heaparray.h>

using namespace std;

int main()
{
    cout << "Klassentemplates! " <<  __cplusplus << endl
         << endl;

    //Wichtig: Klassentemplates immer explizit Instanziieren <typ>
    Point  <int>     p1 (1,1);
    Point  <double>  p2 (2.2,2.2);

    cout << p1 << endl
         << p2 << endl
         << endl;


    //WDH Point2:
    Point2 <int> p3 (3,3);
    Point2 <double> p4 (4.4,4.5);

    //Für Tests muss Methode der Mathe Klasse auch zu
    //Template umgeschrieben werden
    cout << Mathe::gleich(p3.getX(), 3) << endl;
    cout << Mathe::gleich(p4.getX(), 4.4) << endl;


    //cast-Templates der Mathe-Klasse:
    cout << Mathe::to_int(p4.getX()) << endl;
    cout << Mathe::to_irgendwas(p4.getX(),3.0f) << endl;              //implizit
    cout << Mathe::to_irgendwas<double,float>(p4.getX(),0.0) << endl; //explizit
    //prüfung auf datentyp
    cout << typeid( Mathe::to_irgendwas(p4.getX(),4.0f)).name() << endl;


    //3.2.2. Ein einfacher generischer Container

    //WDH des unique gedöhns (wichtig als argument expliziten Point<typ> übergeben
    //std::unique_ptr< Point<int> >  pointPointer = std::make_unique< Point<int> >(p1);

    HeapArray<Point<double>> points (4);

    //test
    points[2].setX(2.2);
    points[2].setY(3.3);

    for (size_t i = 0; i < points.size() ; i++)
    {
        cout << points[i] << endl;
    }



    return 0;
}
