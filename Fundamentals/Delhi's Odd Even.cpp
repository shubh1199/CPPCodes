#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
int number;

while(i<=n){
    cin>>number;
     int ld;
     int sumeven=0;
int sumodd=0;
     while(number>0){
        ld=number%10;
        if(ld%2==0){
            sumeven=sumeven+ld;
        }
        else if (ld%2!=0){
            sumodd=sumodd+ld;
        }
        number=number/10;
     }
     if(sumeven%4==0 || sumodd%3==0){
        cout<<"Yes"<<endl;;
     }
     else {cout<<"No"<<endl;}
    i++;
}
return 0;
}