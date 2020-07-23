#include<iostream>
#include<cmath>
int c;
long long int power(long long int a,long long int b)
{
	long long ans=1;
	while(b>0)
	{
    if(b&1)
	{
		ans = (ans*a)%c;
	}
	b=b>>1;
	a=(a*a)%c;
	}

return ans;
}
using namespace std;
int main() {
	long long int a,b;
	cin>>a>>b>>c;
  long 	long int temp=power(a,b);
	cout<<(temp%c);
	return 0;
}