#include <iostream>
#include "coda.cpp"
#include "posta.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Posta post = Posta();

    int contatore = 0;
    char X;
    char Y;
    Coda c = Coda (1000);
    do{

        cout << "stabilire il tipo di servizio voluto tra -R-S-F-" << endl;
        cin >> X;
        cout << "stabilire il tipo di servizio voluto tra -R-S-F-" << endl;
        cin >> Y;
        post.posto(X, Y);
        post.coda( );
        contatore = 11;
        

    }while (contatore < 10);
    



}