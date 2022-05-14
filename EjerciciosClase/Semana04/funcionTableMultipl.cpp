/*Reescriba el ejercicio de la tabla de multiplicación usando
funciones.*/

#include <iostream>

using namespace std;

void tableMultiplicar(int); 

int main(){

    int cont=10;                    //Cantidad de numeros a multiplicar

    tableMultiplicar(cont);
    
    return 0;
}

void tableMultiplicar(int n){
    cout<<"   *|";                  //parte Superior de la tabla
    for(int i=1; i<=n;i++){
        cout<<"\t"<<i;
    }
    cout<<"\n----+";
    for(int i=0; i<=n-1;i++){       //Marco superior
        cout<<"--------";
    }
    
    for(int k=1; k<=n;k++){         
        cout<<"\n   "<<k<<"|";      //margen lateral
        for(int i=1; i<=n;i++){
            cout<<"\t"<<k*i;        //Resultados del producto 
        }
    }
}