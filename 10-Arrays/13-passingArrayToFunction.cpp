#include <iostream>
using namespace std;

void printArray(int nums[], int n){
    for (int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

void change(int arr[]){
    arr[0] = 20;
}

int main(){

    int nums[] = {2, 4, 6, 8};
    int n = size(nums);

    change(nums);
    cout << nums[0] << endl;
}