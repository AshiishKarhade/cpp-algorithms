#include <iostream>
#define lli long long int
using namespace std;
lli happiness(lli *a,lli n){
    

}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        lli n;
        cin>>n;
        lli arr[n];
        for(lli i=0;i<n;i++){
            cin>>arr[i];
        }
        for(lli i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        
        t--;
    }

    return 0;
}