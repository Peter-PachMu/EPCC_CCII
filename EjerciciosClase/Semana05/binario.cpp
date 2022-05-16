/*
Escriba un programa para convertir un numero decimal a binario
*/

#include <iostream>
#include <vector>

using namespace std;

void binario(int, vector<int>);

int main(){
   
    vector<int> bin;
    int deci; 

    cout<<"Digite el numero decimal: ";cin>>deci;

    binario(deci,bin);



    return 0;
}

void binario(int decimal,vector<int> nbinar ){

    int residuo = decimal%2;
    nbinar.push_back(residuo);
    int cociente = decimal/2;
    //cout<<cociente<<endl; 
    if (cociente<1){
        cout<<"El numero binario:"<<endl;
        for(int i=nbinar.size()-1;i>=0;i--)
        {
            cout<<nbinar[i];
        }
    }
    else{
        binario(cociente,nbinar);
    }
}