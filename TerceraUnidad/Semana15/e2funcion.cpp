/*
Escriba una función de tal forma que usted pueda invocar a cualquiera de
las funciones siguientes.

    float sumafi(float a, int b) {
    return a + b;
    }
    double restalf(float a, double b) {
    return a - b;
    }
    long multiplicaid(int a, long b) {
    return a * b;
    }
    
Forma de llamar a la función:

    funcion(sumafi, 4.0f, 5);
    funcion(restalf, 4.0f, 5.0);
    funcion(multiplicaid, 4, 5L);
*/

#include <iostream>

using  namespace std;

float sumafi(float,int);

double restalf(float,double);

long multiplicaid(int, long);

//Template para llamar a cualquier operador
template<typename operador,typename A,typename B> 
operador funcion(operador(*op)(A,B),A,B);

int main(){

    cout<<"Resultados:"<<endl;
    cout<<funcion(sumafi,4.0f,5);
    cout<<endl;
    cout<<funcion(restalf,4.0f,5.0);
    cout<<endl;
    cout<<funcion(multiplicaid,4,5L);

    return 0;
}

//Implementacion
float sumafi(float a,int b){
    return a+b;
}

double restalf(float a,double b){
    return a-b;
}

long multiplicaid(int a, long b){
    return a*b;
}

template<typename operador,typename A,typename B>
operador funcion(operador(*op)(A,B),A a,B b){
    return op(a,b); //Regresa el resultado de la operacion
}