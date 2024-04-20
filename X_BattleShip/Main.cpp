#include "BattleShip.cpp"
#include <iostream>
using namespace std;

int main()
{
    cout << "Gioco della Battaglia navale - Buon divertimento " << endl;
    BattleShip gioco = BattleShip();
    gioco.play();
    cout << "GAME OVER!" << endl;
}