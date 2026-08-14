/* Variable and Datatype */
/*
    Variable are buckets in the memory which store values.
    e.g : a = 10;

    Naming Conventions
    1. The name should start with an letter or underscore(_).
    2. The name can only contain uppercase & lowercase, digit from 0 to 9 and underscore.
    3. It must not be a keyword. Keywords have a special meaning for the compiler.
*/

#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;

    cout << "a:" << a << endl;
    cout << "b:" << b << endl;

    return 0;
}