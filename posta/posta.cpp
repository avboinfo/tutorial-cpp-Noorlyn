#include <iostream>
#include <cstdlib>
#include <ctime>

class Posta
{

    private:

        char spedizione;
        char ricezione;
        char finanziario;

    public:

        Posta( int spedizione, int ricezione, int finanziario)
        {
            spedizione = 'S';
            ricezione = 'R';
            finanziario = 'F';
        }

        void posto (int spedizione, int ricezione, int finanziario, char X, char Y)
        {

            if ( X == 'S' & Y == 'S')
            {
                std::cout<< "X in attesa..." << std::endl << "spedizione completata";
                std::cout<< "Y in attesa..." << std::endl << "spedizione effettuata";

            }
            if (X == 'S' & Y == 'R')
            {
                std::cout<< "Y in attesa..." << std::endl << "ricezione effettuata";
                std::cout<< "X in attesa..." << std::endl << "spedizione completata";
            }
            if ( X == 'S' & Y == 'F')
            {
                std::cout<< "X in attesa..." << std::endl << "spedizione completata";
                std::cout<< "Y in attesa..." << std::endl << "finanziario completato";

            }
            if ( X == 'R' & Y == 'S')
            {
                std::cout<< "X in attesa..." << std::endl << "ricezione completata";
                std::cout<< "Y in attesa..." << std::endl << "spedizione completata";

            }
            if ( X == 'F' & Y == 'S')
            {
                std::cout<< "Y in attesa..." << std::endl << "finanziario completato";
                std::cout<< "X in attesa..." << std::endl << "spedizione completata";

            }
            if ( X == 'R' & Y == 'R')
            {
                std::cout<< "X in attesa..." << std::endl << "ricezione completata";
                std::cout<< "Y in attesa..." << std::endl << "ricezione effettuata";

            } 
            if ( X == 'F' & Y == 'F')
            {
                std::cout<< "X in attesa..." << std::endl << "finanziario completato";
                std::cout<< "Y in attesa..." << std::endl << "finanziario completato";

            }

        }

};