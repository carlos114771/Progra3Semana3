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
    delete[] apuntador;
    return 0;
}
