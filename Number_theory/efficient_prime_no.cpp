#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int no){
    if(no==1){
        return false;
    }

    for(int i=2; i<=sqrt(no); i++){ 
    /*
     we are not checking all the numbers from 2 to n-1.. because it takes time rather we
     we check upto square root of that no. 
    */
        if(no%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    
    if(isPrime(n)){
        cout << "The no. is prime" << endl;
    }
    else{
        cout << "The no. is not prime" << endl;
    }
}