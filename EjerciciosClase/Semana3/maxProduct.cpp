/*Producto máximo de dos números en una secuencia 
- Dada una secuencia de n números no negativos y mayores que cero.
- El objetivo es encontrar el mayor número que se pueda obtener multiplicando
dos números de esta secuencia.
-Usando un bucle For.
*/

#include <iostream>

using namespace std;

int main(){

    int n1,produc,nmax=0;

    int lista[100] ;

    cout<<"Ingresar cantidad de numeros a ingresar: "<<endl;

    cin>>n1;

    cout<<"Ingresar numeros: \n";

    for(int i=0;i<n1;i++){
        cin>>lista[i];
    }

    //Multiplicacion con cada uno
    for(int j=0;j<n1;j++){
        for(int k=j+1;k<n1;k++){
            produc=lista[j]*lista[k];
            //cout<<lista[j]<<" * "<<lista[k]<<endl;
            if (produc>=nmax){
                nmax=produc;
            }
        }
    }

    cout<<"Resultado: "<<nmax;

    return 0;
}