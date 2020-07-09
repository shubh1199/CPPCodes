#include<iostream>
using namespace std;
int main(){
    int number;
    cin>>number;
int n;
int i=1;
while(i<=number){
cin>>n;
int last_digit;
int ans;
int sum=0;
int p=1;
while(n>0){
    last_digit=n%10;
    ans=last_digit*p;
    sum=sum+ans;

    p=p*2;
    n=n/10;

}
 cout<<sum<<endl;
i++;
}
return 0;
}