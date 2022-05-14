/*Escriba una funcion areFactors que tome un entero n y
un vector de enteros, y devuelva true si los números en el 
vector son todos factores de n (lo que significa que n es
divisible por todos ellos).*/

#include <iostream>
#include <vector>

using namespace std;

bool areFactor(vector<int> &vector,int);

int main(){

    vector<int> factor{};
    int numero,nfactor{};
    bool resultado;

    cout<<"Digite un numero: ";cin>>numero;

    cout<<"Digite los posibles factores: "<<endl;
    
    while(cin>>nfactor){
        factor.emplace_back(nfactor);
    }

    resultado=areFactor(factor,numero);

    if (resultado==true){
        cout<<"Verdadero";
    }
    else{
        cout<<"Falso";
    }

    return 0;
}

bool areFactor(vector<int> &factor,int numero){
    for(int i=0;i<factor.size();i++){
        if(factor[i]%numero!=0){
            return false;
        }
    }
    return true;       
}

