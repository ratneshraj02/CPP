#include <iostream>
using namespace std;
int main(){

    int *nums = new int[4];

    for (int i = 0; i < 4; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}