#include <iostream>

using namespace std;

int main()
{
    char strg[50];
    cin>>strg;

    int i=0;
    if(strg[i]=='9'){
        i++;
    }

    for( ;strg[i]!='\0';i++){
            int digit=strg[i]-'0';
        if(strg[i]>'4'){
            digit=9-digit;
            strg[i]=digit+'0';
        }
    }
    cout<<strg;
}