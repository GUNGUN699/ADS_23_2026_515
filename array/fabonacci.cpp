#include <iostream>
using namespace std ;
void fabonacci(int n){
    int first=0, second=1, next;
    for(int i=0;i<n;i++){
         cout << first << " ";
        next=first+second;
        first=second;
        second=next;
    }
}
int main(){
    int n=10;
    fabonacci(n);
    return 0;
}