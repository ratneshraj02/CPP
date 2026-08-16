#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // syntax
    vector<int> arr;        // empty vector
    vector<int> arr(5, -1); // 5 is size of vector and -1 is default value

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr.push_back(10); // adds an element at last
    arr.push_back(12);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr.pop_back(); // delete an element at last

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}