#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <vector>

using namespace std;

int B, N;
vector<int> P(10);

vector<int> allyoucaneat(  )
{
    int last_remain = B;

    for (int i = 0; i<P.size; i++)
    {
        if (P[i] > B) continue;
        int remain = B;
        vector<int> current;
        current.push_back(P[i])
        remain -= P[i];
        for (int j = i+1; j < P.size(); j++)
        {
            if (P[j]>remain) continue;
            current.push_bacl(P[j]);
            remain -= P[j];
        }
        if (remain == 0) return current;
        plates.push_back(current);
    }

    for (int i = 0; i < P.size() ; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
    return R;
}


int main() {
    //apre file input e output
    ifstream fin("menu_giapponese_input.txt");
    ofstream fout("menu_giapponese_output.txt");

    //leggo dal file di input i valori di alcune variabili
    fin >> N >> B;
    P.resize(N);

    // carica dalle altre right del file di input il vettore dei prezzi
    for (int i = 0; i < N; i++){
        fin >> P[i];
    }

    vector<int> R = allyoucaneat();
    //salva sul file di output i valori calcolati dalla funzione

    for (int i = 0; i <R.size; i++)
    {
        fout << R[i];
    }
    cin.close();
    cout.close();


}