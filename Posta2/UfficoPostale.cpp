#include <iostream>
#include "Coda.cpp"
using namespace std;

class UfficioPostale
{

    private:
        Coda cR, cS, cF;
        int nR, nS, nF;
    
    public:
        UfficioPostale ( string nome)
        {
            this -> nome = nome;
            cR = Coda("rizezione",1000);
            cS = Coda("spedizione",1000),
            cF = Coda("servizi finanziari",1000);
            nR = nS = nF = 100;

        }

        void nuovoCliente( char servizio)
        {

            switch ( servizio ){
                case 'r':
                    cR.enter (nR++);
                    break;
                case 's':
                    cS.enter( nS++ );
                    break;
                case 'f':
                    cF.enter ( nF ++);
                    break;
                default:
                    cout << "Questo servizio lo fai da solo" << endl;
            }

        }

        void chiamaClient ( char servizio)
        {

            switch ( servizio ){
                case 'r':
                    cR.exit ( );
                    break;
                case 's':
                    cS.exit( );
                    break;
                case 'f':
                    cF.exit ( );
                    break;
                default:
                    cout << "Questo servizio non è previsto" << endl;
            }

        }

        void stampaTabellone ()
        {
            cout << "tabellone dell'Ufficio Postale " << nome << endl;
            cR-> stampa;

        }
        
};