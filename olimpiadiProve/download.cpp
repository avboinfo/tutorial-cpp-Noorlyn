#include <string>
#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

int main() {
    // se preferisci leggere e scrivere da file
    // ti basta decommentare le seguenti due righe:

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int T, t;
    cout << "scrivi T: "; 
    cin >> T;
    int Cont;

    for (t = 1; t <= T; t++) {
        int N, F, C;
        
        // scrivi in queste variabili la risposta
        int nf, nc;
        cout << endl << "scrivi N, F e C: ";
        cin >> N >> F >> C;

        nf = N / F;
        nc = (N - (nf * F));
        nc = N%F / C;

        cout << "Case #" << t << ": " << nf << " " << nc << endl;
    }
}