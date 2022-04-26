//Multiplication table. Loops

#include <iostream>

using namespace std;

int main(){

    int cont=10;//Cantidad de numeros a multiplicar

    cout<<"   *|";
    for(int i=1; i<=cont;i++){
        cout<<"\t"<<i;
    }
    cout<<"\n----+";
    for(int i=0; i<=cont-1;i++){
        cout<<"--------";
    }
    
    for(int k=1; k<=cont;k++){
        cout<<"\n   "<<k<<"|";
        for(int i=1; i<=cont;i++){
            cout<<"\t"<<k*i;
        }
    }
    
    return 0;
}