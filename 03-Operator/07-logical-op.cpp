/* Logical Operator */
/*
    Logical operators are used to combine or reverse conditions. They return either true (1) or false (0).

    AND(&&) - It give true when both expression true
    OR(|| - It give true when one expression true
    NOT(!) - It reverse the output
*/
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    cout << (a > 5 && b < 10) << endl;  // 1 (true)
    cout << (a < 5 || b < 10) << endl;  // 1 (true)
    cout << !(a > 5) << endl;           // 0 (false)

    return 0;
}