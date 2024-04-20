/*
**BattleField.cpp una classe definita da noi spupazza le BattleField come nessuno mai
**Anna Prodigo Lobo - 13 / 04 / 2024
*/     

#include <iostream>
using namespace std;

const int DIM = 6;
const char SHIP = 'X';
const char MISS = 'O';
const char HIT = '*';
const char VOID = '_';

class BattleField
{
    private:
        char m[DIM][DIM];

    public:

        BattleField() {

            for (int i = 0; i < DIM; i++)
            {
                for(int j = 0; j < DIM; j++)
                {
                    m[i][j] = 97 + rand()%26;
                }
            }

        }
        BattleField( char c )
        {
            for (int i = 0; i < DIM; i++)
            {
                for(int j = 0; j < DIM; j++)
                {
                    m[i][j] = c;
                }
            }
        }

        char get( int x, int y)
        {
            return m[x][y];
        }
        void put( int x, int y, char c)
        {
            m[x][y] = c;
        }
        void stampa (  )
        {
            cout << "-------------------------------------------- " << endl << endl;
            for (int i = 0; i < DIM; i++)
            {
                for(int j = 0; j < DIM; j++)
                {
                    printf(" %c ", m[i][j]);
                }
                cout << endl;
            }
            cout << endl << "-------------------------------------------- " << endl;

        };

        void bomb()
        {
            int x = rand() % DIM;
            int y = rand() % DIM;
            m[x][y] = '*';
        }

        void placeHorizontalShip(int len)
        {
            if (len <= 0 || len >= DIM )
            {
                return;
            }
            int x = rand() % DIM;
            int y = rand() % (DIM - len);
            for (int i = 0; i < len; i++)
            {
                m[x][y+i] = SHIP; 
            }
        }
        
        void placeVerticalShip(int len)
        {
            if (len <= 0 || len >= DIM )
            {
                return;
            }
            int x = rand() % (DIM - len);
            int y = rand() % DIM;
            for (int i = 0; i < len; i++)
            {
                m[x+1][y] = SHIP; 
            }
        }



};