/*
    Build a calculator using switch for the 4 basic arithmetic operator(+, -, *, /).
*/

#include <iostream>
using namespace std;
int main(){

    int num1, num2;
    char op;

    cout << "enter the two number :" << endl;
    cin >> num1 >> num2;

    cout << "Enter the operator(+, - , * , /)" << endl;
    cin >> op;

    switch(op){
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 + num2 << endl;
            break;
        case '*':
            cout << num1 + num2 << endl;
            break;
        case '/':
            cout << num1 + num2 << endl;
            break;
        default:
            cout << "Invalid operator";
            break;
        }
    return 0;
}