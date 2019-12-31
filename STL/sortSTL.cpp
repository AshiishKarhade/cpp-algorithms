#include <algorithm>
#include <iostream>
using namespace std;

bool myCompare(int a, int b){
    cout << "compare " << a << " and " << b << endl;
    return a>b;
}

int main(){

    int a[] = {2,34,53,1,34,65,23,76,98};
    int n = sizeof(a)/sizeof(int);

    sort(a, a+n, myCompare);

    for(int i=0; i< n; i++){
        cout << a[i] << " ";
    }

    return 0;
}