#include <iostream>
using namespace std;

// 2^3 = 8
// a^b = a * a * a * .... (b times)
// i.e a^b = a * (a)^(b-1)

int power_recursive(int a, int b){
  //base case
  if(b==0){
    return 1;
  }

  //recursive case
  int ans = a * (power_recursive(a, b-1));

  return ans;
}

//fastest
int fast_power(int a, int b){
  if(b==0){
    return 1;
  }
  int smallAns = fast_power(a, b/2);
  smallAns = smallAns * smallAns;

  if(b&1){
    smallAns = a*smallAns;
  }
  return smallAns;
}

int main(){
  int no1, no2;
  cin >> no1 >> no2;

  cout << power_recursive(no1, no2) << endl;

  return 0;
}
