#include <iostream>
using namespace std;

bool is_sorted(int *a, int n){
  //base case
  if(n==1){
    return true;
  }

  if((a[0] < a[1]) && is_sorted(a+1, n-1)){
    return true;
  }
  return false;

}

int main(){
  int no;
  cin >> no;
  int arr[no];
  for(int i=0; i<no; i++){
    cin >> arr[i];
  }

  if(is_sorted(arr,no)){
    cout << "Yes, it is sorted!"  << endl;
  }
  else{
    cout << "No, it is not sorted!"  << endl;
  }

  return 0;
}
