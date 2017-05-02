#include <iostream>

using namespace std;
int main(){
    int arregloEstatico[5];
    cout<<"Dir arr: "<<arregloEstatico<<endl;

    //apuntador de enteros
    int* apuntador = arregloEstatico;

    cout<<"Dir ptr: "<<apuntador<<endl;
    
    for(int i=0;i<5;i++){
        arregloEstatico[i] = i+1;
    }

    cout<<"Contenido de ptr: "<<endl;

    for(int i = 0;i<5;i++){
        cout<<apuntador[i]<<endl;
    }


    return 0;
}
