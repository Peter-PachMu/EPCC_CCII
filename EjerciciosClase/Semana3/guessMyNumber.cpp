/*
-The goal of this exercise is to program a Guess My Number game.
When it's finished, it should work like this:

-To choose a random number, use the random library of C++
<random> 
*/
#include <iostream>
#include <random>
#include <chrono>

using namespace std;

int main(){

    int numero, numJugador, diferencia;

    auto semilla = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine generador(semilla);
    uniform_int_distribution<int> rango(1,100);  

    numero = rango(generador);

    cout<<"I'm thinking of number between 1 and 100(including both)."<<endl;
    cout<<"Can you guess what it is?"<<endl;
    cout<<"Type a number: ";cin>>numJugador;
    cout<<"Your guess is: "<<numJugador<<endl;
    cout<<"The number I was thinking of is: "<<numero<<endl;

    diferencia=numero-numJugador;

    if(diferencia<0){
        diferencia=diferencia*(-1);
    }

    cout<<"You were off by: "<<diferencia;

    return 0;
}
