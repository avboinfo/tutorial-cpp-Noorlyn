/*
**Matrice.cpp una classe definita da noi spupazza le matrice come nessuno mai
**Anna Prodigo Lobo - 13 / 04 / 2024
*/     

#include <iostream>
using namespace std;

class Matrice
{
    private:
        int m[10][10];

    public:
        Matrice(  )
        {
            for (int i = 0; i < 10, i++)
            {
                for(int j = 0; j < 10; j++)
                {
                    m[i][j] = 0;
                }
            }
        }

        void StampaMatrice (  )
        {
            cout << "--------------------------------------------- " << endl;
            for (int i = 0; i < 10, i++)
            {
                for(int j = 0; j < 10; j++)
                {
                    cout << m[i][j] << "\t";
                }
                cout << endl;
            }
            cout << endl;

        }


}