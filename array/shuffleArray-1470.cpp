#include <iostream>
using namespace std;
void shuffleArray(int arr[],int n){
    int ans[100];
    int index=0;
    for(int i=0;i<n;i++){
        ans[index]=arr[i];
        index++;

        ans[index]=arr[i+n];
        index++;
    }
    for(int i=0;i<2*n;i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int arr[]={2,3,5,7,9,8};
    int n=3;
    shuffleArray( arr, n);
    return 0;

}