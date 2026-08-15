#include <iostream>

using namespace std;
int main(){

    int num;
    cout << "enter the number :";
    cin >> num;

    bool isPrime = false;

    for (int i = 2; i <= num; i++){

        if (num % i == 0){
            break;
        }
        isPrime = true;
    }

    if(isPrime){
        cout << "Prime Number";
    } else {
        cout << "Not prime Number";
    }
    cout << endl;
    return 0;
}