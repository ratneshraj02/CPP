/*
    Print number from n to 1 using for loop
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;

    for (int i = n; i > 0; i--){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}