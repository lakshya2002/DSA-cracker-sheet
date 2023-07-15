#include<iostream>
using namespace std;
void printarr(int *arr,int n){
  for (int i=0 ; i<n ; i++){
    cout<<arr[i]<<" ";
  } 
}

void sort012(int *arr,int n){
  int c0 = 0;
  int c1 = 0;
  int c2 = 0;
  for (int i = 0; i < n; i++) {
        switch (arr[i]) {
        case 0:
            c0++;
            break;
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        }
    }
  
  //copy this into new array;
  int j = 0;
  while(c0>0){
    arr[j++] = 0;
    c0--;
	}
  while(c1>0){
    arr[j++] = 1;
    c1--;
	}
  while(c2>0){
    arr[j++] = 2;
    c2--;
	}
  printarr(arr,n);
}

int main(){
  int arr[10] = {1,1,0,0,2,0,1,0,1,2};
  sort012(arr,10);
 // printarr(arr,10);
}