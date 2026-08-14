/*
    Print if a number is odd and even
*/
#include <iostream>
using namespace std;
int main(){

    int num;
    cout << "Enter the number :";
    cin >> num;

    if(num % 2 == 0){
        cout << "Number is Even" << endl;
    } else {
        cout << "Number is Odd" << endl;
    }
    return 0;
}