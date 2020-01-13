#include <iostream>
using namespace std;

void inc(int n){
  if(n==0){
    return;
  }
  int no = inc(n-1);
  cout << no << " ";
}

void dec(int n){
  if(n==0){
    return;
  }
  cout << n << " ";
  dec(n-1);
}

int main(){


  return 0;
}
