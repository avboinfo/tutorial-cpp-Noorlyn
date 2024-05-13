#include <vector>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int trova_massimo(int N, vector<int> V) {
    int MAX = 5;
    srand(time(NULL));
    cout <<"scrivi quanti numeri avrà l'array" << endl;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        V[i] = rand()%50;
        cout << V[i];
    }

    for (int i = 0; i < N; i++)
    {
        if(V[i] > MAX)
        {
            MAX = V[i];
        }
    }

    return MAX;
}

int main(){

    
}