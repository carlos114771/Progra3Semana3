#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (int argc, char* argv[]) {
    char letra;
    ifstream myfile (argv[1]);
    if (myfile.is_open()){
        int cont=0;
        //TODO: Leer el tama�o de la matriz e iniciarlizarla
                    
        while ( !myfile.eof() ) {
            myfile >> letra;
            cout<<" "<<letra;
            if(cont == 9){
                cout<<endl;
                cont=0;
            }else
            cont++;
            //TODO:Llenar la matriz
        }
        myfile.close();
    }
    else cout << "El archivo no existe"; 
        //TODO: llamar funci�n SalirLaberinto
        //TODO: Liberar Memoria
    return 0;
}

