/* Typecasting */
/*
    Conversion of data from one type to another one.

    There are two type of typecasting.
    1.Implicit Conversion : Done by compiler to avoid dataloss.
    2.Explicit Conversion : Force by Programmer.
*/
#include <iostream>
using namespace std;
int main(){
    // Implicit Conversion
    cout << (10 / 3) << endl; //3
    cout << (10 / 3.0) << endl; //3.3333

    cout << ('A' + 1) << endl; // 66
    cout << ('B' - 1) << endl; // 66

    cout << ('a' - 0) << endl; //97

    /*
        bool > char > int > float > double
    */

    //Explicit Conversion
    float PI = 3.14;
    cout << (int)(PI) << endl; //3

    cout << (float)(10 / 3.0) << endl; //3.33333

    cout << (char)('A' + 2) << endl; // C

    return 0;
}