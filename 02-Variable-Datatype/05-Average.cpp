/* Print average marks */

#include <iostream>
using namespace std;
int main(){

    int math, english, science;

    cout << "Enter marks of math, english, science :";
    cin >> math >> english >> science;

    int avg = (math + english + science) / 3;
    cout << "Average :" << avg << endl;
    return 0;
}