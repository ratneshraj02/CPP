#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> nums = {2, 4, 5, 6, 3, 7, 8, 4, 10};

    cout << nums.size() << " " << nums.capacity() << endl;

    for(int ele : nums){
        cout << ele << " ";
    }
    cout << endl;
    return 0;
}