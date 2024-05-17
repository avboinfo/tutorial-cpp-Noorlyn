// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// input data
string Risultato;
int ContMIN1 = 25;
int ContMIN2 = 25;
int N = 3;
vector<int> H, V;

int main() {
    //  uncomment the following lines if you want to read/write from files
    //  ifstream cin("input.txt");
    //  ofstream cout("output.txt");

    cout << "scrivi N" << endl;
    cin >> N;
    H.resize(N);
    for (int i = 0; i < N; i++)
    {
        cout << "scrivi H " << i+1 << ":" << endl;
        cin >> H[i];
    }

    V.resize(N);

    for (int i = 0; i < N; i++)
    {
        cout << "scrivi V " << i+1 << ":" << endl;
        cin >> V[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (H[i] < ContMIN1 )
        {
            ContMIN1 = H[i];
        }
    }
        for (int i = 0; i < N; i++)
    {
        if (V[i] < ContMIN2 )
        {
            ContMIN2 = V[i];
        }
    }
    if (ContMIN1 < ContMIN2)
    {
        Risultato = "Hammilton";
    }
    else if (ContMIN1 > ContMIN2)
    {
        Risultato = "Verstappen";
    }
    cout << "Hamilton" << "   " << "Verstappen"<<endl;
    for (int i = 0; i < N; i++)
    {
        cout << "   "<< H[i] << "\t\t" << V[i] << endl;
    }

    cout << endl << "winner: " << Risultato << endl; // print the result
    return 0;
}

