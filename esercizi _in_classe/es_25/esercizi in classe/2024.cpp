#include <iostream>
#include <cstdlib>

using namespace std;

int numeri (int N1, int N2, int Risultato) 
{
    Risultato = 0;
    for (int i = N1; i <= N2; i++)
    {
        if (N1 == N2)
        {
            Risultato = 0;
            break;
        }
        Risultato = Risultato + i;
    }
    return Risultato;
}

int main()
{
    int N1;
    int N2;
    int Risultato;

    cout << "scegli due numeri, il primo piccolo e il secondo grande:  " << endl;
    cin >> N1;
    cin >> N2;

    Risultato = numeri(N1, N2, Risultato);
    if (N1 == N2)
    {
        cout << "Risultato: Errore" << endl;
    }
    else
    {
        cout << "Risultato: " << Risultato << endl;
    }
    
}