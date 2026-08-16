#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> nums(7);
    nums.push_back(4);

    cout << nums.size() << " " << nums.capacity() << endl;

    return 0;
}