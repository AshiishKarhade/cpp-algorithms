#include <iostream>
using namespace std;

int main(){

    int a[49];
    for (int i=1; i<=49; i++){
        a[i]=i;
    }
    int n = sizeof(a)/sizeof(int);
    int count=0;
    for(int i=1; i < n-5; i++){
        for(int j=i+1; j< n-4; j++){
            for(int k=j+1; k<n-3; k++){
                for(int l=k+1; l<n-2; l++){
                    for(int m=l+1; m<n-1; m++){
                        for(int o=m+1; o<n; o++){
                            cout << a[i] << "," << a[j] << "," << a[k] << "," << a[l] << "," << a[m] << "," << a[o]<< endl;
                            //count++;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
