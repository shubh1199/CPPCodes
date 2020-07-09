#include<iostream>
using namespace std;
int main(){
    int number;
    cin>>number;


int last_digit;
int ans;
int sum=0;
int p=1;
while(number>0){
    last_digit=number%10;
    ans=last_digit*p;
    sum=sum+ans;
    p=p*2;
    number=number/10;

}
 cout<<sum<<endl;

return 0;
}