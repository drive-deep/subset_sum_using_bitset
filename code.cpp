#include <bits/stdc++.h>
using namespace std;

#define mx_sum 10000
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    
    
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
    }
    
    bitset<mx_sum>bit;
    bit.reset();
    
     bit[0]=1; // because of subset of sum 0 exists
     
     for(int i=0; i<n; i++){
         bit = bit | (bit<<arr[i]);
         
         for(int i=0; i<=16; i++){
             cout<<bit[i];
         }
         cout<<endl;
     }
     
     int sum;
     cin>>sum;
     
     if(sum>mx_sum){
         cout<<"No"<<endl;
     }
     
     else if(bit[sum]){
         cout<<"Yes"<<endl;
     }
     else{
         cout<<"No"<<endl;
     }
    
    
    return 0;
}
