#include <iostream>
using namespace std;
int findNumber(int arr[],int sz){
    int count=0;
    for(int i=0;i<sz;i++){
        int nums=arr[i];
        int digits = 0;
        while(nums>0){
            nums=nums/10;
            digits++;
        }
        if(digits%2==0){
            count++;
        }
    
}
return count;
}
int main(){
    int arr[]={44,6,7,3333,2,82};
    int sz=6;
    cout<<findNumber(arr,sz);
}