#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[] = {4, 2, 6, 8, 1, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int mx = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > mx) {
            mx = arr[i];
        }
    }

    int smx = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > smx && arr[i] != mx) {
            smx = arr[i];
        }
    }

    cout << mx << " " << smx << endl;

    return 0;
}