#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    vector<int> v = {4,3, 8, 2, 9};

    //sort
    sort(v.begin(), v.end());
    for(int ele : v){
        cout << ele << " ";
    }
    cout << endl;

    //reverse
    reverse(v.begin(), v.end());
    for(int ele : v){
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}