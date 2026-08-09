#include <iostream>
using namespace std;
int main(){

    int nums[] = {2, 4, 6, 7, 9};
    int product = 1;

    for (int i = 0; i < size(nums); i++){
        product *= nums[i];
    }

    cout << "product is :" << product << endl;
}