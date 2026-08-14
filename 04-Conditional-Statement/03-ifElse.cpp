/* If Else Statement*/

 /* Syntax */
    /*
        if(condition){
            statement : This statement execute when condition is true.
        } else {
            statement : This statement execute when condition is false.
        }
*/

#include <iostream>
using namespace std;
int main(){

   
    int age;
    cout << "Enter your age :";
    cin >> age;

    if(age >= 18) {
        cout << "can vote" << endl;
    }
    else {
        cout << "can't vote" << endl;
    }
    return 0;
}