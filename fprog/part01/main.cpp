#include <iostream>
#include <person.h>


using namespace std;

int main()
{
    cout << "FPROG : " << __cplusplus
         << endl
         << endl;



    std::string firstName, lastName;

    std::string eingabe = "9";

    while (eingabe != "0")
    {
        cout << "##### Hauptmenü ######"<< endl
             << endl
             << "Was möchten Sie tun?"  << endl
             << "---------------------" << endl
             << "Auswahl:"              << endl
             << "1 - Neue Person"       << endl
             << "2 - Personen Ausgeben" << endl
             << "0 - Exit" << endl
             << "---------------------" << endl;

        cin >> eingabe;



        if (   eingabe.length() != 1
            && eingabe[0]       != '0'
            && eingabe[0]       != '1'
            && eingabe[0]       != '2' )
        {
            cout << "eingabe falsch" << endl
                 << endl;
            continue;

        } else if ( eingabe[0] == '1' )
        {
                cout << "Geben Sie einen Vornamen ein:" << endl;
                cin >> firstName;
                cout << "Geben Sie einen Vornamen ein:" << endl;
                cin >> lastName;

                Person p(firstName,lastName);
                cout << endl
                     << p << endl
                     << endl
                     << endl;

         } else if (eingabe[0] == '0')
         {
                cout << "Programm beendet" << endl;
         }//if else

    }//while


    return 0;


}//main
