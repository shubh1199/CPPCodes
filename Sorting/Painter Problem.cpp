#include<iostream>
#include<climits>
using namespace std;

bool check(long long int boards[],long long int n, long long int k, long long int mid)
{
     long long int painter_count=1;
    long long int current_time=0;
    for(long long int i=0;i<n;i++) 
    {
        if(current_time+boards[i]>mid)
         {
            painter_count++;
            current_time=boards[i];
            if(painter_count>k) 
            {
                return false;
            }
        }
        else
         {
            current_time+=boards[i];
        }
    }
    return true;
}

long long int binary_painter(long long int boards[],long long int n,long long int k)
{
      long long int s=0;
        long long int e=0;
    long long int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=boards[j];
            s=max(s,boards[j]);
        }
        e=sum;
        long long int final_ans=0;
        while(s<=e)
        {
            long long int mid=(s+e)/2;
            if(check(boards,n,k,mid))
            {
                final_ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
      return final_ans;
}

int main() 
{
    long long int n,k,t;
    cin>>n>>k>>t;
        long long int boards[n];
        for(int i=0;i<n;i++)
        {
            cin>>boards[i];
        }
        cout<<(binary_painter(boards,n,k)*t)%10000003<<endl;


        
    return 0;
}