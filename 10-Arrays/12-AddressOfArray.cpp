#include <iostream>
using namespace std;
int main(){

    int nums[] = {2, 4, 6, 8};

    cout << nums << endl
         << endl;

    cout << &(nums[0]) << endl;
    cout << &(nums[1]) << endl;
    cout << &(nums[2]) << endl;
    cout << &(nums[3]) << endl;
}