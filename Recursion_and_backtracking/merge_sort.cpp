#include <iostream>
using namespace std;

void merge(int *a, int s, int e){

  int mid = (s+e)/2;

  int i = s;
  int j = mid+1;
  int k=s;

  int temp[100]; // to store the result of sorted arrays

}

void mergeSort(int a[], int s, int e){

  if(s>=e){
    return ;
  }

  int mid = (s+e)/2;

  mergeSort(a, s, mid);
  mergeSort(a, mid+1, e);

  //Merge the sorted arrays


}

int main(){

  int a[] = {5,4,3,2,1}
  int n= 5;

  mergeSort(a, n);

  return 0;
}
