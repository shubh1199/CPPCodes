#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int s1,s2,j,k;
        cin>>s1;
        int ar[s1];
        for(j=0;j<s1;j++){
            cin>>ar[j];
        }
        cin>>s2;
        int ar2[s2];
        for(j=0;j<s2;j++){
            cin>>ar2[j];
        }
        int mergear[s1+s2];
        for(j=0;j<s1;j++){
            mergear[j]=ar[j];
        }

        for(k=0,j=s1; j<(s1+s2) && k<s2; k++, j++){
            mergear[j]=ar2[k];
        }

        sort(mergear,mergear+s1+s2);

        for(int j=0;j<s1+s2;j++){
            cout<<mergear[j]<<" ";
        }
    }
}