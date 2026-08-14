/* Unary Operator */
/* */
#include <iostream>
using namespace std;
int main(){

    int a = 3;
    ++a; //pre
    cout << "a:" << a << endl;

    int b = 5;
    b++; //post
    cout << "b:" << b << endl;

    /*
        Pre = update & then use
        Post = use & than update
    */

    a = 3;
    b = ++a;

  cout << "a:" << a << endl;
    cout << "b:" << b << endl;

    a = 3;
    b = b--;
    
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;

    return 0;
}