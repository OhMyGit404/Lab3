#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cout<<"Enter Num1: ";
    cin>>num1;
    cout<<"Enter Num2: ";
    cin>>num2;

    if(num1 == num2){
        cout<<"Numbers are equal";
    }else if(num1 > num2){
        cout<<num1<<" is greater than "<<num2;
    }else{
        cout<<num2<<" is greater than "<<num1;

    }





    return 0;
}
