#include <iostream>
#include "BattleField.cpp"

using namespace std;

class BattleShip
{
    private:

    BattleField campo;
    BattleField mappa;

    public:
    BattleShip(){
        mappa = BattleField(VOID);
        campo = BattleField(VOID);
        campo.placeHorizontalShip(3);
        campo.placeVerticalShip (4);
        campo.placeVerticalShip (2);
        campo.placeHorizontalShip (5);
    }

    void play () {

        mappa.stampa();

        while ( !gameOver() )
        {
            mappa.stampa();

            if ( !playHand() )
            {
                break;
            }
        }

        campo.stampa();
    }

    bool playHand()
    {
        cout << "inserisci le coordinate x e y (1 - "<< DIM << ") in cui sganciare la bomba: "<<endl;
        
        int x,y;
        cout << "x: ";
        cin >> x;
        cout << endl;

        if ( x <= 0 || x > DIM)
        {
            return false;
        }
        else
        {
            x--;
        }

        cout << "y: ";
        cin >> y;
        cout << endl;

        if ( y <= 0 || y > DIM)
        {
            return false;
        }
        else
        {
            y--;
        }

        if (campo.get( x, y) == SHIP)
        {
            mappa.put(x,y,HIT);
            campo.put(x,y,HIT);            
        }
        else
        {
            mappa.put(x,y, MISS);
        }
        return true;

    }

    bool gameOver ()
    {
        int contatore;
        for (int i = 0; i < DIM; i++)
        {
            for (int j = 0; j < DIM; j++)
            {
                if (campo.get ( i, j) == SHIP )
                {
                    contatore++;
                    if (contatore == 14)
                    {
                        return true;
                    }
                }
                 
            }
        }
    }

};