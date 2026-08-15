/* Print sum of first natural number */

#include <iostream>
using namespace std;
int main(){

    int n, sum = 0;
    cout << "Enter the number :";
    cin >> n;

    for (int i = 1; i <= n; i++){
        sum += i;
    }
    cout << "sum is " << sum;
    cout << endl;
    return 0;
}