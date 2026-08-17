#include <iostream>
using namespace std;
int singleDigit(int num[],int sz){
    int ans=0;
   for(int i=0;i<sz;i++){
        ans=ans^num[i];
    }
    return ans;
}
int main(){
    int num[]={4,1,2,1,2};
    int sz=5;
    cout<<singleDigit(num,sz);
    return 0;
}