/* Arithmetic Operator */
/*
    Arithmetic operators are used to perform mathematical operations on numbers.
    e.g : 
        Addition(+)
        Substraction(-)
        Multiplication(*)
        Division(/)
        Modulo(%)
    
*/
#include <iostream>
using namespace std;
int main() {

    int a = 5;
    int b = 3;

    cout << "Addition:" << (a + b) << endl; //8
    cout << "Substraction:" << (a - b) << endl; //2
    cout << "Multiplication:" << (a * b) << endl; //15
    cout << "Division:" << (a / b) << endl; //1
    cout << "Modulo:" << (a % b) << endl; //2


    return 0;
}