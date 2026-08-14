/* Relational Operation */
/*
    Relational operators are used to compare two values or expressions. The result of a comparison is either true (1) or false (0).
*/

#include <iostream>
using namespace std;
int main(){

    int a = 3;
    int b = 5;

    cout << (a == b) << endl;
    cout << (a != b) << endl;

    cout << (a < b) << endl;
    cout << (a <= b) << endl;

    cout << (a > b) << endl;
    cout << (a >= b) << endl;

    return 0;
}