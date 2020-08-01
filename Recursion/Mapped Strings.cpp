#include<iostream>
using namespace std;
void generate(char *ip,char *ou, int i,int j)
{
    if(ip[i]=='\0')
    {
        ou[j]='\0';
        cout<<ou<<endl;
        return;
    }
    int digit=ip[i]-'0';
    char ch=digit +'A'-1;
    ou[j]=ch;
    generate(ip,ou,i+1,j+1 );
    if(ip[i+1]!='\0')
    {
        int second =ip[i+1]-'0';
        int no= digit*10+second;
        if(no>26){ return; }
        if(no<=26)
        ch=no+'A'-1;
        ou[j]=ch;
        generate(ip,ou,i+2,j+1);

    }return;
}
int main()
{
    char ip[100];
    char op[100];
    cin>>ip;
    generate(ip,op,0,0);
    return 0;
}