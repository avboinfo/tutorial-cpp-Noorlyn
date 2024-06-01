#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
//  uncomment the following lines if you want to read/write from files
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    long long A, B, T;
    cin >> A >> B >> T;

    long long g_interi = T / 24;      //giorni di lavoro del tecnico
    long long tempo_online = B - A;   //per vedere il tempo online del server

    long long left_over = tempo_online * g_interi;
    T = T - (24 - tempo_online);
    if (T < 0)
    {
        T = 0;
    }

    cout << T + left_over << endl; // print the result

    return 0;
}