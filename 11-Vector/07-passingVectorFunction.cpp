#include <iostream>
#include <vector>
using namespace std;

void change(vector<int> &v){ // pass by value, pass by reference(&)
    v[2] = 99;
}

int main(){

    vector<int> nums = {2, 4, 5, 6, 3};
    change(nums);
    cout << nums[2] << endl;
    

    return 0;
}