#include <iostream>
#include <cstdlib>
#include <ctime>

class mastermind
{
private:
    int numero_mosse;
    std::string ultima_mossa;

    static const int DIM_MOSSA_VALIDA = 4;
    int mossa_valida[DIM_MOSSA_VALIDA];
    int codice_segreto[DIM_MOSSA_VALIDA];
    int posizione_numeri[DIM_MOSSA_VALIDA];

    bool sanifica_input(){
        if( DIM_MOSSA_VALIDA != ultima_mossa.size()){

            return false;
        }
        for (int i = 0; i < ultima_mossa.size(); i++)
        {
            char c = ultima_mossa[i];
            if (c >= '0' && c <= '9'){
                // salvo il risultato 
                mossa_valida[i] = c - '0';

            } else if ( c == '-'){
                // il trattino verra convertito in -1 e salvato
                mossa_valida[i] = -1;
            }else{
                return false;
            }
        }
        return true; 
    }

    void genera_codice_segreto(){
        srand(time(NULL));
        for (int i = 0; i < DIM_MOSSA_VALIDA; i++)
        {
            codice_segreto[i] = rand() % 10;
            std::cout<< codice_segreto[i];
        }
        std::cout << std::endl;
    }
    void assegna_posizioni(){

        for(int i = 0; i < DIM_MOSSA_VALIDA; i++)
        {
            posizione_numeri[i] = codice_segreto[i];
        }
    }
    int* copia_vettore(int vettore_originale[DIM_GIOCATA_VALIDA]){

        static int vettore_copia[DIM_GIOCATA_VALIDA];

        for(int i = 0; i < dim vec; i++)
        {
            vettore_copia[i]=vettore_originale[i]
        }
        return vettore_copia;
    }
public:

    mastermind(/* args */)
    {
        numero_mosse = 0;
        ultima_mossa = "";
    }

    void nuova_giocata()
    {
        do{
            std::cout<< numero_mosse + 1 << ": ";
            std::getline(std::cin, ultima_mossa);
        }while(!sanifica_input());

        numero_mosse++;
    }


    void risultato_mossa()
    {
        int strike, ball;
        strike = ball = 0;
        //Creo una copia del vettore codice per non andare a sovrascrivere il valore originale
        int *codice_segreto_bis = copia_vettore(codice_segreto, DIM_GIOCATA_VALIDA);
        //cerco quanti strike e quanti ball
        for(int i=0;i<DIM_GIOCATA_VALIDA;i++) //Uso i per iterare su mossa_valida
        {
            for(int j=0;j<DIM_GIOCATA_VALIDA;j++)//Uso j per iterare su codice segreto_bis
            {
                if(mossa_valida[i]==codice_segreto_bis[j]){
                    if(i==j){
                        strike++;

                    }else
                        ball++;
                    codice_segreto_bis[j]=2;
                }
            }
        }    
        std::cout<<"Il numero di strike e' : "<<strike<<std::endl;
        std::cout<<"Il numero di ball e' : "<<ball<<std::endl;

    }
    void risultato_mossa_bis(){
        int strike, ball;
        strike = ball = 0;

        int *codice_segreto_bis= copia_vettore(codice_segreto_bis, DIM_MOSSA_VALIDA);
        copia_vettore_bis(codice_segreto, codice_segreto_bis, DIM_GIOCATA_VALIDA);

        for (int i = 0; i < DIM_GIOCATA_VALIDA; i++)
        {
            for (int j = 0; i < DIM_GIOCATA_VALIDA; j++)
            {
                if(mossa_valida[i] == codice_segreto_bis[j])
                {
                    if(i == j)
                        strike++;
                    else
                        ball++;
                    codice_segreto_bis[j] = -2;
                }
            }
        }
        std::cout<< "Il numero di strike e': " << strike << std::endl;
        std::cout << "Il numero di ball e': " << ball << std::endl;
    }    

};


using namespace std;

int main(int argc, char const *argv[])
{
    mastermind prova = mastermind();

    cout << "Benvenuto al gioco mastermind!" << endl;

    
}