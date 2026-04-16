#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,5,8,2,10};
    int n = 5, x = 5;

    int count = 0;

    for(int i=0;i<n;i++)
        if(arr[i] > x) count++;

    cout<<"Count: "<<count;
}
