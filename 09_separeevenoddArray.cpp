#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int even[n], odd[n];
    int e = 0, o = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even[e++] = arr[i];
        } else {
            odd[o++] = arr[i];
        }
    }

    cout << "Even array: ";
    for(int i = 0; i < e; i++) {
        cout << even[i] << " ";
    }

    cout << "Odd array: ";
    for(int i = 0; i < o; i++) {
        cout << odd[i] << " ";
    }

    return 0;
}