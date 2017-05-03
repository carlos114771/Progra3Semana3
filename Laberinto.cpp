#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//funcion crea una matriz de chars de n x n
char** createMatrix(int);

//funcion para liberar la memoria de la matriz

void freeMatrix(int,char**);

//imprimir una matriz
void printMatrix(int , char**);

int main (int argc, char* argv[]) {
    char letra;
    int size;
   // cout<<size<<endl;
    char** matrix;
    ifstream myfile (argv[1]);
    if (myfile.is_open()){
        //int cont=0;
        
        myfile >> size;
        matrix = createMatrix(size);
        //leer la matriz

        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                myfile >> matrix[i][j];
            }
        }




        //TODO: Leer el tama�o de la matriz e iniciarlizarla
                    
       /* while ( !myfile.eof() ) {
            myfile >> letra;
            cout<<" "<<letra;
            if(cont == 9){
                cout<<endl;
                cont=0;
            }else
            cont++;
            //TODO:Llenar la matriz
        }*/
        myfile.close();
    }
    else cout << "El archivo no existe"; 

        //imprimir laberinto
        printMatrix(size,matrix);

        //TODO: llamar funci�n SalirLaberinto
        //TODO: Liberar Memoria
        freeMatrix(size,matrix);
    return 0;
}

//imprimir matriz

void printMatrix(int size, char** matrix){
    for(int i = 0 ;i<size;i++){
        for(int j =0;j<size;j++){
            cout<<" "<<matrix[i][j];
        }
        cout<<endl;
    }

}


//crear matriz

char** createMatrix(int n){
    char** retval = new char*[n];

    for(int i=0;i<n;i++){
        retval[i] = new char[n];
    }

    return retval;

}

//lierar memoria

void freeMatrix(int n,char** matrix){
    for(int i = 0; i < n; i++){
        delete[] matrix[i];
    }
    delete[] matrix;

}
