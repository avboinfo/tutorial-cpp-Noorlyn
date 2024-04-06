#include <iostream>
#include "coda.cpp"
#include "posta.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    char X;
    char Y;
    Coda c = Coda (1000);
    cout << "servizio per X, scrivere il servizio desiderato -S-R-F-"<<endl;
    cin >> X;
    cout << "servizio per Y, scrivere il servizio desiderato -S-R-F-"<< endl;
    cin >> Y;
    Posta p;
    
    p.posto(X, Y);



}