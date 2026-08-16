#include <iostream>
using namespace std;
int multiplyofArray(int arr[],int sz){
    int multiply=1;
    for(int i=0;i<sz;i++){
        multiply=multiply*arr[i];
    }
    return multiply;
}
int main(){
    int arr[]={2,5,3,7};
    int sz=4;
    cout<<multiplyofArray(arr,sz);
    return 0;
}