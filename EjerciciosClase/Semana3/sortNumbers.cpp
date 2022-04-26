/*Your job is to write a program that reads integers from the standard
input, sorts them into ascending order, and then prints the sorted numbers,
one per line.
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> vec(10);

    int cant,aux;

    cout<<"Cantidad de numeros a ingresar: ";cin>>cant;

    for(int i=0;i<cant;i++){
        cout<<"Ingresar numero: "<<endl;cin>>vec[i];
    }
    //Ordenamiento
    for(int i=0;i<cant;i++){
        for(int j=i+1;j<cant;j++){
            if(vec[i]<vec[j]){
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }

        }
    } 

    cout<<"Ordenado de forma ascendente"<<endl;

    for(int i=0; i<cant;i++){
        cout<<vec[i]<<endl;
    }
    
    return 0;
}