#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    int c1,c2,c3,c4,n,m;
    int rick[1001],cab[1001];

    while(t--){
        cin>>c1>>c2>>c3>>c4;
        cin>>n>>m;

        for(int i=0; i<n; i++){
            cin>>rick[i];
        }
        for(int i=0; i<m; i++){
            cin>>cab[i];
        }

        int rickcost=0;
        for(int i=0; i<n; i++){
            rickcost+=min(c1*rick[i],c2);
        }
        int trickcost=min(rickcost,c3);

        int cabcost=0;
        for(int i=0; i<m; i++){
            cabcost+=min(c1*cab[i],c2);
        }
        int tcabcost=min(cabcost,c3);

        int finalanswer=min(trickcost+tcabcost,c4);
        cout<<finalanswer<<endl;
    }

}