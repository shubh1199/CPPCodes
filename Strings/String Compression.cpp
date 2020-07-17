#include<iostream>
using namespace std;
int main() {
    char strg[101];
    int i=0,j;
    cin>>strg;
    int count=1;


    while(strg[i]!='\0'){
    for( ;strg[i]!='\0';i++){
        if(strg[i]==strg[i+1]){
            count++;
        }
        else{
         break;
        }
    }
    cout<<strg[i]<<count;
    count=1;
    i++;
    }
}