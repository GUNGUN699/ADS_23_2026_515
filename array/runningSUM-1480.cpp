#include <iostream>
using namespace std;
void runningSum(int arr[], int sz){
    for(int i=1;i<sz;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    for (int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={3,2,5,6,8,2};
    int sz=6;
    runningSum(arr,sz);
}