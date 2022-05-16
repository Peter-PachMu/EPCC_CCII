/*Escriba una función letterHist que tome un string como parámetro y devuelva un histograma de las letras del string. 
• El elemento cero del histograma debe contener el número de aes (plural de a) en el string (mayúsculas y minúsculas)
• El elemento 25 debe contener el número de zetas.
• Sólo recorra el string una vez*/
#include <iostream>
#include <map>
#include <string>

using namespace std;

void letterHist(string);

int main(){

    string palabra;
    cout<<"\t-----Cantidad de letras por Palabra-----"<<endl;
    cout<<"\nDigite la palabra: ";cin>>palabra;

    letterHist(palabra);

    return 0;
}

void letterHist(string palabra){
    string letra;
    //Palabra en mayuscula
    for (int i = 0; i < palabra.length(); i++) {
        palabra[i] = toupper(palabra[i]);
    }

    map<string,int>counts{};

    for(int i= 0; i< palabra.size();i++){
        letra = palabra.at(i);
        counts[letra]++;
    }
    for(auto i = counts.begin();i!=counts.end(); ++i){
        cout<< i->first <<": ";  
        for(int j=0;j<i->second;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
