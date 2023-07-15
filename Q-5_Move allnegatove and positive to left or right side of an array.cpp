#include<iostream>
using namespace std;
void printarr(int *arr,int n){
  for (int i=0 ; i<n ; i++){
    cout<<arr[i]<<" ";
  } 
  cout<<endl;
}
void move(int arr[],int n){
  
  int left = 0;
  int right = n-1; 
  while (left<=right)
  {
    // Condition to check if the left
    // and the right elements are
    // negative
    if (arr[left] < 0 && arr[right] < 0)
      left+=1;
     
    // Condition to check if the left
    // pointer element is positive and
    // the right pointer element is negative
    else if (arr[left]>0 && arr[right]<0)
    {
      int temp=arr[left];
      arr[left]=arr[right];
      arr[right]=temp;
      left+=1;
      right-=1;
    }
     
    // Condition to check if both the
    // elements are positive
    else if (arr[left]>0 && arr[right] >0)
      right-=1;
    else{
      left += 1;
      right -= 1;
    }
  } 	
  printarr(arr,n);
}
int main(){
    
    int arr[7] = {-12, 11, -13, -5,
               6, -7, 5};
    move(arr,7);
  
}