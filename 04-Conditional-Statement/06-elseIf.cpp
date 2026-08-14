/* Else If Statement*/

/* Syntax */
    /*
        if(condition1){
            statement : This statement execute when condition is true.
        }
        else if(condition2) {
            statement : This statement execute when above condition is false.
        }
        else if(condition3) {
            statement : This statement execute when above condition is false.
        }
        else {
            statement : This statement execute when all above condition is false.
        }
*/

#include <iostream>
using namespace std;
int main(){

    int marks;
    cout << "Enter the marks :";
    cin >> marks;

    if(marks >= 90){
        cout << "A" << endl;
    }
    else if(marks >= 80){
        cout << "B" << endl;
    }
    else if(marks >= 70){
        cout << "C" << endl;
    } else {
        cout << "D" << endl;
    }
    return 0;
}