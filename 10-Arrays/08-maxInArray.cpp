#include <iostream>
#include <climits>
using namespace std;
int main(){

    int nums[] = {23, 43, 67, 89};

    //Method - 1
    int mx = INT_MIN;
    for (int i = 0; i < size(nums); i++){
        if(nums[i] > mx){
            mx = nums[i];
        }
    }
    cout << mx << endl;

    //Method - 2
    mx = nums[0];
    for (int i = 0; i < size(nums); i++)
    {
        if(nums[i] > mx){
            mx = nums[i];
        }
    }
    cout << mx << endl;

    //Method - 3 : using inbuilt function max()
    int maximum = nums[0];
    for (int i = 0; i < size(nums); i++)
    {
        maximum = max(maximum, nums[i]);
    }
    cout << maximum << endl;

}