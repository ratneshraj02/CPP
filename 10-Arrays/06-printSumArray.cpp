#include <iostream>
using namespace std;
int main(){

    int nums[] = {2, 4, 6, 7};
    int sum = 0;

    for (int i = 0; i < size(nums); i++){
        sum += nums[i];
    }

    cout << "sum is :" << sum << endl;
}