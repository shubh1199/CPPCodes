#include<iostream>
#include<cstring>
using namespace std;
char keypad[][10]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};
int count;
void printKeypad(char *in,char *out,int i, int j){
    if(in[i]=='\0'){
     out[j]='\0';
     count++;
     cout<<out<<" ";
     return;
    }
    int digit=in[i]-'0';
    if(digit==0){
        printKeypad(in,out,i+1,j);
    }
    for(int k=0;keypad[digit][k]!='\0';k++){
        out[j]=keypad[digit][k];
        printKeypad(in,out,i+1,j+1);
        
    }
}
int main() {
    char in[1000];
    char out[1000];
    cin>>in;
    printKeypad(in,out,0,0);
    cout<<endl<<count;
    return 0;
}