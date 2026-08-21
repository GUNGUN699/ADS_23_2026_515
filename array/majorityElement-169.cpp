#include <iostream>
using namespace std;
int majorityElement(int arr[],int sz){
    int freq=0, ans=0;
    for(int i=0;i<sz;i++){
        if(freq==0){
            ans=arr[i];
        }
        if(ans==arr[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}
int main(){
    int arr[]={1,2,2,1,1,1};
    int sz=6;
    cout<<majorityElement(arr,sz);
}