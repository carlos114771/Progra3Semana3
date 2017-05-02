#include <iostream>

using namespace std;
int main(){
    int arregloEstatico[5];
    cout<<"Dir arr: "<<arregloEstatico<<endl;

    //apuntador de enteros
    int* apuntador = arregloEstatico;

    cout<<"Dir ptr: "<<apuntador<<endl;
    

    //inicializar
    for(int i=0;i<5;i++){
        arregloEstatico[i] = i+1;
    }

    cout<<"Contenido de ptr: "<<endl;
    

    //importar contenido
    for(int i = 0;i<5;i++){
        cout<<apuntador[i]<<endl;
    }
    cout<<"________________"<<endl;
    cout<<*(apuntador)+4<<endl;
    
    //reserva un arreglo tamaño 10
    apuntador = new int[10];

    cout<<"Dir arreglo en heap: "<<apuntador<<endl;

    //liberar memoria
    delete[] apuntador;
        apuntador = NULL;
    delete[] apuntador;

    //matrices
    int** matriz;

    matriz = new int*[5];
    
    for(int i=0;i<5;i++){
        matriz[i] = new int[5];
    }
    //poblar matriz
    for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){
            matriz[i][j]=i+j;
        }
    }
    
    //usar la matriz



    //liberar la memoria
    for(int i=0;i<5;i++){
        delete[] matriz[i];
    }
    delete[] matriz;



    return 0;
}
