#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int sum = 0;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int min = arr[0];
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"The minimum element in the array is: "<<min<<endl;
    cout<<"The maximum element in the array is: "<<max<<endl;
    return 0;
}