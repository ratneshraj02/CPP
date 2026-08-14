/* 
    Print the largest of two numbers
*/
#include <iostream>
using namespace std;
int main(){

    int a, b;
    cout <<"enter the two number :";
    cin >> a >> b;

    if(a > b){
        cout << a << " is largest" << endl;
    } else {
        cout << b << " is largest" << endl;
    }

    return 0;
}