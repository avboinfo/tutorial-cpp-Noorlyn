// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// input data
string Veloce;
string Winner;
int ContMIN1 = 10000;
int ContMIN2 = 10000;
int Somma1;
int Somma2;
int N = 3;
vector<int> H, V;

int main() {
    //  uncomment the following lines if you want to read/write from files
    //  ifstream cin("input.txt");
    //  ofstream cout("output.txt");

    cin >> N;
    H.resize(N);
    for (int i = 0; i < N; i++)
    {
        cin >> H[i];
    }

    V.resize(N);

    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }

    for (int i = 0; i < N; i++)
    {
        Somma1 = Somma1 + H[i];
    }
    for (int i = 0; i < N; i++)
    {
        Somma2 = Somma2 + V[i];
    }
    if (Somma1 < Somma2)
    {
        Winner = "Hamilton";
    }
    else
    {
        Winner = "Verstappen";
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
        Veloce = "Hammilton";
    }
    else
    {
        Veloce = "Verstappen";
    }
    
    cout << Winner << endl;
    cout << Veloce << endl; // print the result
    return 0;
}

