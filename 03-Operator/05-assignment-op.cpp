/* Assignment & Compound assignment Operator */
/*
    Assignment operators are used to assign a value to a variable. They can also perform an operation and assign the result back to the same variable.
*/

#include <iostream>
using namespace std;
int main(){
    int a = 10;

    a += 10;
    cout << a << endl;

    a -= 10;
    cout << a << endl;
    
    a *= 10;
    cout << a << endl;

    a /= 10;
    cout << a << endl;
    return 0;
}