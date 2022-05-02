/*
-Write a program that converts a total number of seconds to hours, minute, and seconds.
-It should (1) prompt the user for input, (2) read an integer from the keyboard,
(3) calculate the result, and (4) use std::cout to display the output.
*/
#include <iostream>

using namespace std;

int main(){

    int num, aux, hour, minute, second;

    cout<<"Enter the number of seconds to convert: "; cin>>num;

    if(num>=3600){
        hour=num/3600;
        aux=num-(3600*hour);
        if(aux>60){
            minute=aux/60;
            second=aux-(minute*60);
        }
        else{
            minute=0;
            second=aux;
        }
    }
    else if(num<60){
        hour=0;
        minute=0;
        second=num;
    }
    else{
        hour=0;
        minute=num/60;
        second=num%60;
    }

    cout<<num<<" seconds = "<<hour<<" hours, "<<minute<<" minutes, and "<<second<<" seconds.";

    return 0;
}