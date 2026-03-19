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
    bool c=false;

    for (int i=0;i<n;i++){
        if (k==arr[i]) c= true;


    }
    if (c) cout << "element is present "<<endl;
    else cout <<" not found"<<endl;
    return 0;

}