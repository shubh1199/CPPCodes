#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int n,num,t ;
    cin >> t ;
    for(int j = 0 ; j < t ; j++){ 
        cin >> n ; 
        vector<int> arr;
        for(int i = 0 ; i < n ; i++){
            cin >> num ; 
            arr.push_back(num) ;
        }
        vector<int> inc;
        vector<int> dec;
        inc.push_back(1);
        dec.push_back(1);
        for(int i= 1 ; i < n ; i++){
            if(arr[i-1] > arr[i])
            {
                inc.push_back(1);
            }
            else{
                inc.push_back(inc[i-1] + 1);
            }
        }
        for(int i = n-2 ; i>=0 ; i--){
            if(arr[i+1] > arr[i]){
                dec.push_back(1);
            }
            else {
                dec.push_back(dec[n-i-2] + 1);
            }
        }
        int max = -1;
      for (int i = 0; i < n; i++)  
        if (inc[i] + dec[n-i-1] - 1 > max)  
        max = inc[i] + dec[n-i-1] - 1;  
    
        cout << max <<endl ;  
    }         
}