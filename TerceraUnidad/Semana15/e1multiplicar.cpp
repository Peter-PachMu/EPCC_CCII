/*
Implemente una función que reciba dos parámetros, una matriz "x" y un
valor, que multiplique los elementos de dicha matriz por ese valor.

La implementación debe funcionar para cualquier tamaño de matriz
tridimensional.
La implementación debe deducir el tamaño para cada dimensión.
Forma de llamar a la función multiplicar(x, 4); significa que cada
elemento de la matriz se multiplicará por 4.
Implemente además una función para imprimir la matriz tridimensional.
*/

#include <iostream>

using  namespace std;

//Uso de size_t para determinar el tamanio
template<size_t Fila,size_t Columna,size_t Dato> 
void mostrarMatriz(int (&matriz)[Fila][Columna][Dato]);

template<size_t Fila,size_t Columna,size_t Dato>
void multiplicar(int (&matriz)[Fila][Columna][Dato], int multiplicador);


int main()
{   
    cout<<"\tMatriz inicial\n"<<endl;

    int x[3][4][2]={{{1,2},{4,5},{7,8},{1,2}},
                    {{10,11},{13,14},{16,17},{1,2}},
                    {{19,20},{22,23},{25,26},{1,2}}};

    mostrarMatriz(x);
    cout<<endl;
    multiplicar(x,4);

    return 0;
}

//Implementacion
template<size_t F,size_t C,size_t D>
void mostrarMatriz(int (&matriz)[F][C][D]){
    
    for(int i=0;i<F;i++){
        for(int j=0;j<C;j++){
            cout<<"{ ";
            for(int k=0;k<D;k++){
                cout<<matriz[i][j][k]<<" ";
            }
            cout<<"} ";
        }
        cout<<endl;
    }
}

template<size_t F,size_t C,size_t D>
void multiplicar(int (&matriz)[F][C][D], int multi)
{
    for(int i=0;i<F;i++){
        for(int j=0;j<C;j++){
            for(int k=0;k<D;k++){
                matriz[i][j][k]=matriz[i][j][k]*multi;    
            }
        }
    }
    cout<<"Resultado de Matriz multiplicado por "<<multi<<endl;
    cout<<endl; 
    mostrarMatriz(matriz);
}