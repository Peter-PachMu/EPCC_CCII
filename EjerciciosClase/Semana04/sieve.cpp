/*
Escriba una función sieve que tome un parámetro entero, n,
y devuelva un vector de bools que indique, para cada
número de 0 a n - 1, si el número es primo.
*/

#include <iostream>
#include <vector>

using namespace std;

/*
void sieve(int n){
    vector<int> primos{};
    primos[0]=false;
    primos[1]=false;
    for(int i=2;i<n;i++){
        primos[i]=true;
    }


}
*/

/*while (i * i <= n):
    if (sieve[i]):
        k = i * i
        while (k <= n):
            sieve[k] = False
            k += i
    i += 1
  return sieve
*/

int main(){

    //int nLimite;

    vector<int> original{1,2};
    vector<int> copy = original;
    vector<int>& ref = original;
    original.push_back(3);
    copy.push_back(4);
    ref.push_back(5);

    cout<< original <<endl;
    cout<<copy<<endl;
    cout<<ref<<endl;

    return 0;
}

