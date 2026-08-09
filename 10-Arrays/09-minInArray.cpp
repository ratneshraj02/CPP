#include <iostream>
#include <climits>
using namespace std;
int main(){

    int nums[] = {23, 43, 67, 89};

    //Method - 1
    int mn = INT_MAX;
    for (int i = 0; i < size(nums); i++){
        if(nums[i] < mn){
            mn = nums[i];
        }
    }
    cout << mn << endl;

    //Method - 2
    mn = nums[0];
    for (int i = 0; i < size(nums); i++)
    {
        if(nums[i] < mn){
            mn = nums[i];
        }
    }
    cout << mn << endl;

     //Method - 3 : using inbuilt function min()
    int minimum = nums[0];
    for (int i = 0; i < size(nums); i++)
    {
        minimum = min(nums[i], minimum);
    }
    cout << minimum << endl;
}