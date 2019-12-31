#include <iostream>
#include <algorithm>
using namespace std;

bool removeBadElement(int n){
    if (n<20) return true;
    return false;
}

int main() {
    int n;
    int arr[10];
    cin>>n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    remove_if(arr, arr+n, removeBadElement);

    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
