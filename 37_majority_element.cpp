#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,2,1,2,3,2,2};
    int n = 7;

    int count=0,candidate;

    for(int i=0;i<n;i++) {
        if(count==0) candidate=arr[i];
        if(arr[i]==candidate) count++;
        else count--;
    }

    count=0;
    for(int i=0;i<n;i++)
        if(arr[i]==candidate) count++;

    if(count>n/2) cout<<candidate;
    else cout<<"No Majority";
}
