#include <iostream>
#include "coda.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Coda c = Coda (1000);

    c.stampa();
    c.enter( 100 );
    c.enter( 120 );
    c.enter( 85);
    c.stampa( );
    c.exit( );
    c.enter ( 235 );
    c.stampa( );


}