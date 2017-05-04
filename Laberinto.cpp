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

//funcion para salir del laberinto
void salirLaberinto(char**, int, int, int);

int main (int argc, char* argv[]) {
    char letra;
    int size;
    //cout<<size<<endl;
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
                    
       /*while ( !myfile.eof() ) {
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
        salirLaberinto(matrix, size, 1, 0);
        printMatrix(size,matrix);

        //TODO: Liberar Memoria
        freeMatrix(size,matrix);
    return 0;
}

//salir del laberinto

void salirLaberinto(char** matrix,int size,int x, int y){
    printMatrix(size,matrix);
    cin.get();
    if(y == size - 1){
        cout<<"Ha encontrado la salida del Laberinto! "<<endl;
        return;
    }else{
        //mover hacia arrbia
        if(x > 1){
            if(matrix[x - 1][y] == '.'){
                matrix[x][y] = '*';
                salirLaberinto(matrix, size, x - 1, y);
            }
        }
        //moverse hacia abajo
        if(x < size - 1){
            if(matrix[x + 1][y] == '.'){
                matrix[x][y] = '*';
                salirLaberinto(matrix, size, x + 1, y);
            }
        }
        //moverse a la izquierda
        if(y > 0){
            if(matrix[x][y - 1] == '.'){
                matrix[x][y] = '*';
                salirLaberinto(matrix, size, x, y - 1);
            }
        }
        //moverse a la derecha
        if(y < size - 1){
            if(matrix[x][y + 1] == '.'){
                matrix[x][y] = '*';
                salirLaberinto(matrix, size, x, y + 1);
            }
        }
    }
   

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

//liberar memoria

void freeMatrix(int n,char** matrix){
    for(int i = 0; i < n; i++){
        delete[] matrix[i];
    }
    delete[] matrix;

}
