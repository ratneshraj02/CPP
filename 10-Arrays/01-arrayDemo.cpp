#include <iostream>
using namespace std;
int main(){

    int marks[] = {76, 54, 78, 87,98, 64, 33, 54, 53, 45, 76, 56};

    cout << marks[0] << endl;
    cout << marks[2] << endl;
    cout << marks[4] << endl;

    marks[3] = 96;
    cout << marks[3] << endl;

    //size() : size of array
    cout << "size of marks :" << size(marks) << endl;

    //sizeof() : size of array
    cout << "size of marks :" << sizeof(marks)/sizeof(int) << endl;

    return 0;
}