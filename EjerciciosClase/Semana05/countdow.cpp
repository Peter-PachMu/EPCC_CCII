/*
Modifique el programa count Down para imprimir los numeros en forma ascendente
*/

#include <iostream>

using namespace std;

void countdown(int n,int inicio){
    //Segun el ejercicio
    /*
    if (n ==0){
        cout<<"blastoff!";
    }
    else{
        cout<<n<<endl;
        countdown(n-1);
    }
    */
    //Lo modificado
    if (n == inicio){
        cout<<"blastoff!";
    } 
    else{
        cout<<inicio+1<<endl;
        inicio++;
        countdown(n,inicio);
    }
    
}    

int main(){
    int n{};
    cout<<"Digite un numero: ";
    cin>>n;
    countdown(n,0);
    
    return 0;
}