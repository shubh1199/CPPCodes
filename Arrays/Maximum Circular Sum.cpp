#include<bits/stdc++.h>
using namespace std;
int kadane(int a[], int n);
int maxCircularSum(int a[], int n)
{
    int max_sum = kadane(a, n);
    int rsum = 0, i;
    for (i=0; i<n; i++)
    {
            rsum += a[i]; 
            a[i] = -a[i];   
    }
    rsum = rsum + kadane(a, n);
    return max(rsum, max_sum);
}

int kadane(int a[], int n)
{
    int ans = 0, end = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        end = end + a[i];
        if (end < 0)
            end = 0;
        if (ans < end)
            ans = end;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       int n;
       cin>>n;
       int a[n];
       for(int j=0;j<n;j++)
       {
           cin>>a[j];
       }
        cout<< maxCircularSum(a, n) <<endl;
    }
    return 0;
}