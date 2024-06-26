/*
se in griglia c'è ZERO cella vuota
se in griglia c'è UNO stiamo parlando di una X (giocatore 1)
se in griglia c'è DUE stiamo parlando di un CERCHIO (giocatore 2)
*/

#include <iostream>
using namespace std;

class Tris
{
public:
    char griglia[3][3];

    void reset_tabella()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                griglia[i][j] = '.';
            }
        }
    }
    void stampa_griglia()
    {

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout <<griglia[i][j]<< "   ";
            }
            cout<<endl;

        }
    }

    bool giocatore_uno(int x, int y)
    {
        if (griglia[x][y] == 1 || griglia[x][y] == 2)
        {
            return false;
        }
        griglia[x][y] = 'X';
        return true;
    }
    bool giocatore_due(int x, int y)
    {
        if (griglia[x][y] == 1 || griglia[x][y] == 2)
        {
            return false;
        }
        griglia[x][y] = 'O';
        return true;
    }

    int controlla_vincitore()
    {
        int risultato;
        for (int i = 0; i < 3; i++)
        {
            risultato = controlla_colonna(i);
            if (risultato != 0)
            {
                return risultato;
            }

            risultato = controlla_riga(i);
            if (risultato != 0)
            {
                return risultato;
            }
        }
        return controlla_diagonale();
    }

private:
    int controlla_colonna(int col)
    {
        int acc_uno = 0;
        int acc_due = 0;
        for (int i = 0; i < 3; i++)
        {
            int cella = griglia[i][col];
            if (cella == 'X')
            {
                acc_uno++;
            }
            else if (cella == 'O')
            {
                acc_due++;
            }
            else
            {
                return 0;
            }
        }

        if (acc_uno == 3)
            return 1;
        if (acc_due == 3)
            return 2;
        return 0;
    }
    int controlla_riga(int riga)
    {
        int acc_uno = 0;
        int acc_due = 0;
        for (int i = 0; i < 3; i++)
        {
            int cella = griglia[riga][i];
            if (cella == 'X')
            {
                acc_uno++;
            }
            else if (cella == 'O')
            {
                acc_due++;
            }
            else
            {
                return 0;
            }
        }

        if (acc_uno == 3)
            return 1;
        if (acc_due == 3)
            return 2;
        return 0;
    }
    int controlla_diagonale()
    {
        int acc_uno = 0;
        int acc_due = 0;
        for (int i = 0; i < 3; i++)
        {
            int cella = griglia[i][i];
            if (cella == 'X')
            {
                acc_uno++;
            }
            else if (cella == 'O')
            {
                acc_due++;
            }
            else
            {
                return 0;
            }
        }
        if (acc_uno == 3)
            return 1;
        if (acc_due == 3)
            return 2;
        return 0;

        acc_uno = 0;
        acc_due = 0;
        for (int i = 0; i < 3; i++)
        {
            int cella = griglia[i][2 - i];
            if (cella == 'X')
            {
                acc_uno++;
            }
            else if (cella == 'O')
            {
                acc_due++;
            }
            else
            {
                return 0;
            }
        }
        if (acc_uno == 3)
            return 1;
        if (acc_due == 3)
            return 2;
        return 0;
    }
};

int main(int argc, char const *argv[])
{
    Tris myTris;

    myTris.reset_tabella();

    cout << "Stato iniziale!" << endl;
    myTris.stampa_griglia();

    int x, y;
    bool mossa_valida;
    int vincitore;
    int mosse_totali = 0;
    while (mosse_totali < 9)
    {
        do
        {
            cout <<endl<< "Mossa del giocatore 1." << endl;
            cout << "x: ";
            cin >> x;

            cout << "y: ";
            cin >> y;

            mossa_valida = myTris.giocatore_uno(y, x); /* code */
        } while (!mossa_valida);
        myTris.stampa_griglia();
        if (mosse_totali >= 9)
        {
            break;
        }
        vincitore = myTris.controlla_vincitore();
        mosse_totali = mosse_totali + 1;
        if (vincitore != 0)
            break;

        do
        {
            cout << "Mossa del giocatore 2." << endl;
            cout << "x: ";
            cin >> x;

            cout << "y: ";
            cin >> y;

            mossa_valida = myTris.giocatore_due(y, x);

        } while (!mossa_valida);
        myTris.stampa_griglia();
        mosse_totali = mosse_totali + 1;

        vincitore = myTris.controlla_vincitore();
        if (vincitore != 0)
            break;
        
    }

    if (vincitore == 1)
    {
        cout << "vince giocatore 1" << endl;
    }
    else if (vincitore == 2)
    {
        cout << "Vince giocatore 2" << endl;
    }
    else if (vincitore == 0)
    {
        cout << "Pareggio" << endl;
    }

    return 0;
}