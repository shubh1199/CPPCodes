#include<iostream>
using namespace std;
#include<math.h>
int main(){
int a,b,c;
cin>>a>>b>>c;
int F=(b*b)-(4*a*c);
int D= pow(F,0.5);
if(F==0 && a!=0){
    cout<<"Real and Equal"<<endl;
}
else if(F>0 && a!=0){
    cout<<"Real and Distinct"<<endl;
}
else if(F<0 && a!=0) {
    cout<<"Imaginary"<<endl;
}
int x,y;
if (D>=0 && a!=0){
    x=(-b+D)/(2*a);
    y=(-b-D)/(2*a);
    cout<<y<<" "<<x; 
}
return 0;
}