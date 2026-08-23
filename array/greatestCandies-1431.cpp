#include <iostream>
using namespace std;
void greatestCandies(int arr[],int sz,int extracandies){
    int maxcandies=arr[0];
    for(int i=1;i<sz;i++){
        if(arr[i]>maxcandies){
            maxcandies=arr[i];
        }
    }
    for(int i=0;i<sz;i++){
        if(arr[i]+extracandies >= maxcandies){
            cout<<"true"<<" ";
        }else{
            cout<<"false"<<" ";
        }
    }
}
int main(){
    int arr[]={2,3,5,1,3};
    int sz=5;
    int extracandies=3;
    greatestCandies(arr,sz,extracandies);
    return 0;
}