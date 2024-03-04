/*
**vettore.cpp
** Classe vettore - Anna Prodigo Lobo - 04/03/2024
*/

#include <iostream>
using namespace std;


class Vettore {

    protected:

    int dim, len, delta;
    int * v;

    public:

    Vettore( int d ) {
        dim = d;
        len = 0;
        delta= 10;
        v = new int[dim];
    }

    void add (int n){
        if (len == dim) 
        { 
            int * nuovov = new int [dim + delta];
            for(int i = 0; i < dim; i++){
                nuovov[i] = v[i];
            }
            dim += delta;
            v = nuovov;
        }
        v[len] = n;
        len++;
    }

    void print(){
        cout << "Contenuto del vettore: ";
        for (int i = 0; i<len; i++) cout << v[i] << " ";
        cout << endl;
    }

};

int main(int argc, char * argv[]){

    Vettore vett (10);

    for (int i = 0; i<15; i++)
    {
        vett.add(33*i);
    }
    vett.print();

}