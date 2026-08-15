/* Print the digit of given number in reverse using while loop */
#include <iostream>
using namespace std;
int main(){
    int digit, res = 0;
    cout << "Enter the number :";
    cin >> digit;

    while(digit > 0){
        int lastDigit = digit % 10;
       
        res = res * 10 + lastDigit;
        digit /= 10;
    }
    cout << res << endl;
    return 0;
}