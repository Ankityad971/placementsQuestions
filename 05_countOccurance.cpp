#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int k;
    cin>>k;
    int count =0;
    for (int i=0;i<n;i++)
        if (k==arr[i]) count++;

cout <<"the element is "<<count <<" time present in array"<<endl;
return 0;

}