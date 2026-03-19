#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    int avg=0;

    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        avg += arr[i];
    }
    avg = avg/n;
    cout<<"The average of the elements in the array is: "<<avg<<endl;
    return 0;
    
    
}