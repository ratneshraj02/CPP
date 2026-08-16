#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> nums = {10, 20, 30, 40, 50, 60, 70};

    int i = 0,j = nums.size() - 1;

    while(i < j){
        swap(nums[i++], nums[j--]);
    }

    for(int ele : nums){
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}