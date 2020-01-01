#include <iostream>
#include <cstring>
using namespace std;
#define ll long long

ll arr[1000005], prefixSum[1000005];

int main() {
    int T; //Test cases
    cin >> T;

    while(T--){
        int n; //size of array
        cin >> n;

        ll sum = 0;
        memset(prefixSum, 0, sizeof(prefixSum)); // initializes the elements of prefixSum to '0' upto the sizeof(prefixSum) i.e all elements is initialised with 0
        prefixSum[0] = 1;

        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
            sum %= n;
            sum = (sum+n) % n;
            prefixSum[sum]++; 
        }

        ll ans = 0;
        for(int i=0; i<n; i++){
            ll no = prefixSum[i];
            ans += ((no)*(no-1))/2;
        }
        cout << ans << endl;

    }

}
/*
Input:
2
5
1 1 1 1 1
5
5 5 5 5 5

Output:
1
15
*/