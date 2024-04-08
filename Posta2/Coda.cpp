/*
**vettore.cpp
** Classe Pila di interi - Anna Prodigo Lobo - 04/03/2024
*/

#include <iostream>
#include <string>
using namespace std;


class Coda {

    private:

    string name;
    int size, start, stop;
    int * v;

    public:

    Coda( string name, int size) {
        this->size = size;
        this -> name = name;
        v = new int[size];
        start = stop = 0;
    }

    void enter (int val) {
        if (stop >= size)
        {
            cout << "Coda Piena!";
            return;
        }
        v[stop] = val;
        stop++;
    }

    int exit( ){

        if (start >= stop)
        {
            cout << "Coda vuota!";
            return 0;
        }
        int val = v[start];
        start = start + 1;
        return val;

    }

    void stampa() 
    {
        cout << "Elementi in coda " << name << ": ";
        for(int i = start; i < stop; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

};