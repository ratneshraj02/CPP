/* Ternary Operator */
/*
    Variable = Condition? Statement1 : Statement2;
*/
#include <iostream>
using namespace std;
int main(){

    int a, b, largest;

    cout << "enter the two number :" << endl;
    cin >> a >> b;

    largest = a > b ? a : b;
    cout << "largest is " << largest << endl;
    return 0;
}