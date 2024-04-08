#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

class Posta
{

    private:

        char spedizione = 'S';
        char ricezione = 'R';
        char finanziario = 'F';
        char X;
        char Y;
        string PostePay;
        string PostePay2;


    public:

        Posta( )
        {
            X = X;
            Y = Y;
        }

        void posto ( char X, char Y)
        {

            if ( X == 'S')
            {
                std::cout << "X = Spedizione" << std::endl;
            }
            if ( X == 'R')
            {
                std::cout << "X = Ricezione" << std::endl;
            }
            if ( X == 'F')
            {
                std::cout << "X = Finanziario" << std::endl;
            }
            if ( Y == 'S')
            {
                std::cout << "Y = Spedizione" << std::endl;
            }
            if ( Y == 'R')
            {
                std::cout << "Y = Ricezione" << std::endl;
            }
            if ( Y == 'F')
            {
                std::cout << "Y = Finanziario" << std::endl;
            }

        }

        void coda ( char spedizione, char ricezione, char finanziario, char X, char Y, string PostePay, string PostePay2)
        {
            if ( X == 'S' & Y == 'S')
            {
                std::cout << "attendendo X..." << "servizio completo" << std::endl;
                std::cout << "attendendo Y..." << "servizio completo" << std::endl;
            }
            if ( X == 'S' & Y == 'R')
            {
                std::cout << "attendendo Y..." << "servizio completo" << std::endl;
                std::cout << "attendendo X..." << "servizio completo" << std::endl;
            }
            if ( X == 'S' & Y == 'F')
            {
                std::cout << "attendendo X..." << "servizio completo" << std::endl;
                std::cout << "Y, hai la carta Poste Pay? -SI-NO-" << std::endl;
                std::cin >> PostePay;
                if (PostePay == "SI")
                {
                    std::cout << "attendendo Y..." << "servizio completo" << std::endl;
                }
                else{
                    std::cout << "carta non in possesspo, attendendo Y..." << "servizio completo" << std::endl;
                }
            }
            if ( X == 'R' & Y == 'S')
            {
                std::cout << "attendendo X..." << "servizio completo" << std::endl;
                std::cout << "attendendo Y..." << "servizio completo" << std::endl;
            }
            if ( X == 'F' & Y == 'S')
            {
                std::cout << "X, hai la carta Poste Pay? -SI-NO-" << std::endl;
                std::cin >> PostePay;
                if (PostePay == "SI")
                {
                    std::cout << "attendendo Y..." << "servizio completo" << std::endl;
                }
                else{
                    std::cout << "carta non in possesspo, attendendo Y..." << "servizio completo" << std::endl;
                }
                std::cout << "attendendo Y..." << "servizio completo" << std::endl;
            }
            if ( X == 'R' & Y == 'R')
            {
                std::cout << "attendendo X..." << "servizio completo" << std::endl;
                std::cout << "attendendo Y..." << "servizio completo" << std::endl;
            }
            if ( X == 'F' & Y == 'F')
            {
                std::cout << "X, hai la carta Poste Pay? -SI-NO-" << std::endl;
                std::cin >> PostePay;
                std::cout << "Y, hai la carta Poste Pay? -SI-NO-" << std::endl;
                std::cin >> PostePay2;
                if (PostePay == "SI" & PostePay2 == "NO")
                {
                    std::cout << "Carta Poste Pay individuata: attendendo X..." << "servizio completo" << std::endl;
                    std::cout << "attendendo Y..." << "servizio completo" << std::endl;
                }
                if (PostePay == "SI" & PostePay2 == "SI")
                {
                    std::cout << "Carta Poste Pay individuata: attendendo X..." << "servizio completo" << std::endl;
                    std::cout << "Carta Poste Pay individuata: attendendo Y..." << "servizio completo" << std::endl;
                }
                if (PostePay == "NO" & PostePay2 == "SI")
                {
                    std::cout << "attendendo Y..." << "servizio completo" << std::endl;
                    std::cout << "Carta Poste Pay individuata: attendendo X..." << "servizio completo" << std::endl;
                }
                if (PostePay == "NO" & PostePay2 == "NO")
                {
                    std::cout << "attendendo X..." << "servizio completo" << std::endl;
                    std::cout << "attendendo Y..." << "servizio completo" << std::endl;
                }

                
            }
        }

};

