#include <iostream>

using namespace std;
int main() {
    double units;
    cout<<"Enter units used: ";
    cin>>units;

    double charges=0;
    if(units<=50){
        charges = 0.50*units;
    }else if(units<=150){
        charges = 50*0.50+(units-50)*0.75;
    }else if(units<=250){
        charges = 50*0.50+100*0.75+(units-150)*1.20;
    }else {
        charges = 50*0.50+100*0.75+100*1.20+(units-250)*1.50;
    }

    if(units>250){
        charges += charges*0.20;
    }

    cout<<"Total bill is Ksh."<<charges;


    return 0;
}