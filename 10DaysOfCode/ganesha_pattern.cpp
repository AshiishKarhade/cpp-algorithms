#include <iostream>
using namespace std;

int main(){

  int no;
  cin >> no;
  int blank = (no-3)/2;

  char arr1[no];
  char arr_mid[no];
  char arr_full[no];

  arr1[0] = arr_mid[0] = arr_full[0] = '*';

  // First layer
  for(int j=1; j<=blank; j++){
      arr1[j] = ' ';
  }
  for(int k=blank+1; k<=no+1; k++){
      arr1[k] = '*';
  }

  //Medium Layer
  for(int i=1; i<=blank; i++){
    arr_mid[i] = ' ';
  }
  arr_mid[blank+1] = '*';
  for(int j = blank+2; j<no; j++){
    arr_mid[j] = ' ';
  }

// Full layer
  for(int i=0; i<no; i++){
    arr_full[i] = '*';
  }

//Printing

  for(int i=0; i<no; i++){
    cout << arr1[i];
  }
  cout << "\n";

  for(int i=1; i<blank+1; i++){
    for(int i=0; i<no; i++){
      cout << arr_mid[i];
    }
    cout << "\n";
  }

  //cout << "\n";
  for(int i=0; i<no; i++){
      cout << arr_full[i];
  }
  cout << "\n";
//reverse
  for(int j=0; j<blank; j++){
    for(int i=0; i<no; i++){
      cout << arr_mid[no-i];
    }
    cout << '*';
    cout << "\n";
  }


  for(int i=0; i<no; i++){
    cout << arr1[no-i];
  }
  for(int i=0; i<blank; i++){
    cout << " ";
  }
  cout << "*";
  cout << "\n";

  return 0;
}
