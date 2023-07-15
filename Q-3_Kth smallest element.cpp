#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> maxHeap;
        for(int i=l;i<=r;i++){
            maxHeap.push(arr[i]);
            if(maxHeap.size() > k){
                maxHeap.pop();
            }
          
        }
        return maxHeap.top();
}
int main(){
	int arr[6]={7,10,4,3,20,15};
	int ksmall = kthSmallest(arr,0,5,3);
	cout<<ksmall<<endl;	
}        
