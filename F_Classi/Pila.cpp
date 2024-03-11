/*
**vettore.cpp
** Classe Pila di interi - Anna Prodigo Lobo - 04/03/2024
*/

#include <iostream>
using namespace std;


class Pila {

    private:

    int dim, len, delta;
    int * v;

    public:

    Pila( int dim, int delta ) {
        this->dim = dim;
        len = 0;
        delta= 10;
        v = new int[dim];
    }

    void push (int n){
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

    int pop(){
        if (len == 0){
            cout << "\nERRORE Pila Vuota\n";
            return 0;
        }
        return v[--len];
    }

    int getElement( int index ){
        return v[index];
    }

    void setElement( int index, int newvalue){
        v[index] = newvalue;
    }
    void print(){
        cout << "Contenuto della Pila: ";
        for (int i = 0; i<len; i++) cout << v[i] << " ";
        cout << endl;
    }

};

int main(int argc, char * argv[]){

    Pila vett (10, 2);

    for (int i = 0; i<100; i++)
    {
        vett.push(i);
    }

    for(int i = 0; i < 110; i++)
    {
        cout<< vett.pop() << " ";
    }
    cout << endl;

}