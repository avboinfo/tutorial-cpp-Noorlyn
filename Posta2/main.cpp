#include "Coda.cpp"
#include "UfficoPostale.cpp"
#include <iostream>
using namespace std;

int main()
{
    int cont = 0;
    char servizio1;
    char servizio2;
    UfficioPostale U = UfficioPostale( "PosteItaliane" );

    do{
        U.stampaTabellone();
        cont++;
        cout<<"cliente "<< cont << "scegli il tuo servizio -r-s-f-" << endl;
        cin >> servizio >> endl;
        U.nuovoCliente (servizio1);
        cont++;
        cout << "cliente "<< cont << "scegli il tuo servizio -r-s-f-" << endl;
        cin >> servizio >> endl;
        U.nuovoCliente (servizio2);
        U.stampaTabellone();
        U.chiamaClient(servizio1);
        U.chiamaClient(servizio2);
        U.stampaTabellone();



    }While( cont <= 10 );
}