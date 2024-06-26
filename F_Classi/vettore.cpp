/*
**vettore.cpp
** Classe vettore - Anna Prodigo Lobo - 04/03/2024
*/

#include <iostream>
using namespace std;


class Vettore {

    private:

    int dim, len, delta;
    int * v;

    public:

    Vettore( int dim, int delta ) {
        this->dim = dim;
        len = 0;
        delta= 10;
        v = new int[dim];
    }

    void add (int n){
        if (len == dim) 
        { 
            cout << "estendo da "<< dim << " a " << dim+delta << endl;
            int * nuovov = new int [dim + delta];
            for(int i = 0; i < dim; i++){
                nuovov[i] = v[i];
            }
            dim += delta;
            delete[] v;
            v = nuovov;
        }
        v[len] = n;
        len++;
    }

    int getElement( int index ){
        return v[index];
    }

    void setElement( int index, int newvalue){
        v[index] = newvalue;
    }
    void print(){
        cout << "Contenuto del vettore: ";
        for (int i = 0; i<len; i++) cout << v[i] << " ";
        cout << endl;
    }

};

int main(int argc, char * argv[]){

    Vettore vett (10, 2);

    for (int i = 0; i<100; i++)
    {
        vett.add(i);
    }
    cout << vett.getElement(10) << endl;
    vett.setElement(10, 333);
    vett.print();

}