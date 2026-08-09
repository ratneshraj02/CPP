#include <iostream>
using namespace std;
int main(){

    int nums[] = {2, 3, 4, 5, 6, 5};
    int k = 5;
    bool flag = false; // false means not present
    int n = size(nums);
    for (int i = 0; i < n; i++){
        if(nums[i] == k){
            flag = true; // true mean present
            break;
        }
    }
    
    if(flag){
        cout << "Element found";
    } else {
        cout << "Element not found";
    }

    return 0;
}