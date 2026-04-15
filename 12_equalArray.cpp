#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], b[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];

    bool same = true;
    for(int i=0;i<n;i++){
        if(a[i] != b[i]){
            same = false;
            break;
        }
    }

    if(same) cout << "Equal";
    else cout << "Not Equal";

    return 0;
}