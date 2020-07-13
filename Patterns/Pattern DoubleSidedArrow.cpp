#include <iostream>

using namespace std;

int main()
{   int n,i,j;
    cin>>n;
    for(i=1;i<=(n+1)/2;i++){
            for(j=1;j<n-(2*i)+2;j++){
            cout<<"  ";
         }
         for(j=n-(2*i)+2;j<n-i+2;j++){
            cout<<n-j-i+2<<" ";
         }
         for(j=n-i+2;j<=n;j++){
            cout<<"  ";
         }

         for(j=n;j>n-i+2;j--){
            cout<<"  ";
         }
         if(i!=1){
         for(j=n-1+i;j<n+(2*i)-1;j++){
            cout<<j-n-i+2<<" ";
         }
         }
        cout<<endl;
         }

         for(i=((n+1)/2)-1;i>=1;i--){
            for(j=1;j<n-(2*i)+2;j++){
            cout<<"  ";
         }
         for(j=n-(2*i)+2;j<n-i+2;j++){
            cout<<n-j-i+2<<" ";
         }
         for(j=n-i+2;j<=n;j++){
            cout<<"  ";
         }

         for(j=n;j>n-i+2;j--){
            cout<<"  ";
         }
         if(i!=1){
         for(j=n-1+i;j<n+(2*i)-1;j++){
            cout<<j-n-i+2<<" ";
         }
         }
        cout<<endl;
         }
}