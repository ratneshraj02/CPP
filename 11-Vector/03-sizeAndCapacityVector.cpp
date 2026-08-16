#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> nums;
    cout << nums.size() << " " << nums.capacity() << endl;
    nums.push_back(1);
   cout << nums.size() << " " << nums.capacity() << endl;
    nums.push_back(2);
   cout << nums.size() << " " << nums.capacity() << endl;
    nums.push_back(3);
   cout << nums.size() << " " << nums.capacity() << endl;
    nums.push_back(4);
   cout << nums.size() << " " << nums.capacity() << endl;
    nums.push_back(5);
   cout << nums.size() << " " << nums.capacity() << endl;
    nums.pop_back();
   cout << nums.size() << " " << nums.capacity() << endl;
    nums.pop_back();
   cout << nums.size() << " " << nums.capacity() << endl;
    nums.push_back(3);
   cout << nums.size() << " " << nums.capacity() << endl;

   

        return 0;
}