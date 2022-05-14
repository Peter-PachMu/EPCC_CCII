/* 
-Your task is to write a program that reads words and counts the frequency
of each unique word.
-A word is a string of nonspace characters separated by white space.
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

    //Como llamar al primer elemnto Key y al segundo value
    map<string, int>counts{};
    string word{}, palabra;
    while(cin>>word){
        ++counts[word];
    }
    
    cout<<"\ningresar palabra: ";cin>>palabra;
    cout<< counts[palabra]<<endl;

}