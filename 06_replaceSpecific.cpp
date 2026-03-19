#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 2};
    int n = 5;

    int oldVal = 2;
    int newVal = 9;

    for(int i = 0; i < n; i++) {
        if(arr[i] == oldVal) {
            arr[i] = newVal;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}