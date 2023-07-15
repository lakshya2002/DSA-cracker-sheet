#include <iostream>
using namespace std;

void reverseArr(int *arr, int s, int e){
    while(s<=e){
        swap(arr[s++],arr[e--]);
    }
}

//recursive function 
void reversearr(int *arr, int s , int e){
    //base case
    if(s>=e){
        return ;
    }
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
  
    reversearr(arr,s+1,e-1);
}


int main(){
    int arr[4] = {4, 5, 1, 2};
    int n = 4;
    //reverseArr(arr,0,n-1);
    for (int i = 0; i<n;i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<"============"<<endl;
    reversearr(arr,0,n-1);
    for (int i = 0; i<n;i++ ){
        cout<<arr[i]<<" ";
    }
}

















////
/*
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

vector<int> min_max(vector<int> arr[],int low, int high){
    vector<int> minmax(2);
    //minmax[0]---> minimum
    //minmax[1]---> maximum
    //base case
    //if there is one elment
    if(low==high){
        minmax[0] = arr[low];
        minmax[1] = arr[low];
        return minmax;
    }
    
    // if there is 2 element
    if(high == low+1){
        if(arr[low]<arr[high]){
            minmax[0] = arr[low];
            minmax[1] = arr[high];
        }
        else{
            minmax[0] = arr[high];
            minmax[1] = arr[low];
        }
    }
    
    // if there are more than 2 element
    int mid = low+(high-low)/2;
    int lft = min_max(arr,low,mid);
    int rht = min_max(arr,mid+1,high);
    
    if(lft)
}
int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    int mid = 0+(5-0)/2;
    cout<<mid<<endl;
    return 0;
}
*/
