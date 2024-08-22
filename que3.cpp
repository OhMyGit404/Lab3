#include <iostream>
using namespace std;

int main(){
    int productCost;

    cout<<"Enter how much you are using: ";
    cin>>productCost;

    if(productCost >= 30000){
        int discount = 0.1*(productCost);
        cout<<"Your discount will be: "<<discount;
    }else if(productCost < 30000){
        int discount2 = 0.02*(productCost);
        cout<<"Your discount will be: "<<discount2;
    }else{
        cout<<"Enter Number";
    }

    return 0;
}
