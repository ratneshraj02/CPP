/*
    Create an income tax calculator.

    income < 5lakh - 0%
    income between 5 to 10lakh - 10%
    income > 10lkh - 20%
*/
#include <iostream>
using namespace std;
int main(){

    float income, tax;

    cout << "Enter your income:";
    cin >> income;

    if(income < 500000){
        tax = 0;
    }
    else if(income <= 1000000){
        tax = income * 0.1;
    } else {
        tax = income * 0.2;
    }

    cout << "Tax will be :" << tax << endl;

    return 0;
}
