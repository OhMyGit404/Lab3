#include <iostream>

using namespace std;
int main() {
    double grosssalary;
    cout<<"Enter your gross salary: ";
    cin>>grosssalary;

    double tax;
    if(grosssalary<=10000){
        tax = 0;
    }else if(grosssalary<=30000){
        tax = grosssalary*0.05;
    }else if(grosssalary<=50000){
        tax = grosssalary*0.1;
    }else if(grosssalary<=70000){
        tax = grosssalary*0.13;
    }else{
        tax = grosssalary*0.15;
    }

    double netsalary = grosssalary-tax;
    cout<<"Your net salary is: "<<netsalary;



    return 0;
}