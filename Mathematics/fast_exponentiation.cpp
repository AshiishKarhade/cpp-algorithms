#include <iostream>
using namespace std;

int power(int a, int b){
    //base case
    if(b==0){
        return 1;
    }
    //recursive case - b is odd/ b is even
    int smallAns = power(a, b/2);
    smallAns *= smallAns;
    
    if(b&1){
        smallAns = smallAns * a;
    }
    return smallAns;
}

using namespace std;
int main() {
    int a, b;
    cin >> a >> b;

    cout << power(a, b);
}
