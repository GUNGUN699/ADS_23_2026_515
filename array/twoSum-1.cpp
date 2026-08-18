#include <iostream>
using namespace std;
pair<int, int> twoSum(int arr[],int sz){
    int target=7;
    for(int i=0;i<sz;i++){
        for(int j=i+1;j<sz;j++){
            if(arr[i]+arr[j]==target){
                return {i,j};
            }
        }
       
    }
     return {};
}
int main(){
    int arr[]={2,5,11,12,10};
    int sz=5;
     pair<int, int> ans = twoSum(arr, sz);
    cout<<ans.first << " " << ans.second;
}