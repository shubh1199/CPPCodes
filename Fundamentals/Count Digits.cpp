#include<iostream>
using namespace std;
int main(){
long long n;
int digit;
cin>>n>>digit;
int ld;
int count=0;
while(n>0){
    ld=n%10;
    if(ld==digit){
        count=count+1;
    }
    n=n/10;
}
cout<<count;
    return 0;
      }