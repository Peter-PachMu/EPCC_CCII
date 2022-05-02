/*Write a program that converts a temperature from Celsius to Fahrenheit.
It should (1) prompt the user for input, (2) read a double value from the keyboard, 
(3) calculate the result, and (4) format the output to one decimal place. 
When it's finished, it should work like this:*/

#include <iostream>
#include <iomanip> //Libreria para los decimales

using namespace std;

int main(){

    float celsius,resultado;

    cout<<"Enter a temperature in Celsius: ";cin>>celsius;

    //Operacion
    
    resultado=(celsius*9/5)+32;

    //fixed para contar la cantidad despues de la coma decimal.
    
    cout<<fixed<<setprecision(1)<<celsius<<" C = "<<resultado<<" F";

    return 0;
}