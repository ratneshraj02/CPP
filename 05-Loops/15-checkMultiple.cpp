/*
    WAP to show number entered by user except multiple of 10.
*/
#include <iostream>
using namespace std;
int main(){

    int n;
    for (int i = 0; true; i++){
        cout << "enter number :";
        cin >> n;

        if(n % 10 == 0){
            break;
        }

    }
    cout << "out of loop" << endl;
    return 0;
}