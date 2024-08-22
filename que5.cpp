#include <iostream>
using namespace std;

int main(){

    double num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num>0){
        cout<<"Number is a positive number ";
    }else if(num<0){
        cout<<"Number is a negative number ";
    }
    else{
        cout<<"Number is zero";
    }
    return 0;
}