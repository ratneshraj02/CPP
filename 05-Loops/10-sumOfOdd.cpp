/*
    Print the sum of odd digits of a number using while loop
*/

#include <iostream>
using namespace std;
int main(){

    int n, sum = 0;
    cout << "enter the number :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
       if(i % 2 == 1){
           sum += i;
       }
    }
    cout << "odd sum is :" << sum << endl;
    cout << endl;
    return 0;
}