#include <iostream>
#include <algorithm>    // std::sort

using namespace std;

//O(nlogn) complexity
/*
void min_max(int* arr, int n){
	sort(arr,arr+n);
	int min = arr[0];
	int max = arr[n-1];
	cout<<"minimum : "<<min;
	cout<<"maximum : "<<max;	
}
*/

void min_max(int arr[], int n){
	int min,max;
	
	if(n==1){
		min = arr[0];
		max = arr[0];
	}
	
	if(arr[0]>arr[1]){
		min = arr[1];
		max = arr[0];
	}
	else{
		min = arr[0];
		max = arr[1];
	}
	for(int i=2;i<n;i++){
		if(arr[min]>arr[i]){
			min = arr[i];
		}
		else{
			max = arr[i];
		}
	}
	cout<<"minimum : "<<min<<endl;
	cout<<"maximum : "<<max<<endl;
}
int main(){
	int arr[7] = {1,8,5,6,4,7,2};
	int n=7;
	
	min_max(arr,n);
}
