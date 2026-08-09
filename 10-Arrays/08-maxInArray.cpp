#include <iostream>
using namespace std;
int main(){

    int nums[] = {23, 43, 67, 89};
    int max = 0;
    for (int i = 0; i < size(nums); i++){
        if(nums[i] > max){
            max = nums[i];
        }
    }
    cout << max << endl;
}