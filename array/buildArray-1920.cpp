#include <iostream>
using namespace std;
void buildArray(int arr[],int sz){
    int ans[6];
    for(int i=0;i<sz;i++){
        ans[i]=arr[arr[i]];
    }
    for(int i=0;i<sz;i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int arr[]={0,2,1,3,4,5};
    int sz=6;
    buildArray(arr,sz);
}