#include <iostream>
using namespace std;
int sumofArray(int arr[],int sz){
    int sum=0;
    for(int i=0;i<sz;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[]={2,5,3,7};
    int sz=4;
    cout<<sumofArray(arr,sz)<<endl;
    return 0;
}