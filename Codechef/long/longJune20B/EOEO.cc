#include<bits/stdc++.h>
 
#define pb push_back 
#define endl '\n'
typedef long long int ll;
typedef long double ld;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std; 
 
 
signed main() 
{ 
    f_boot
    ll t;
    cin>>t;
    
    while(t--){
    	ll ts;
    	cin>>ts;
    	while((ts&0x0001) == 0){
    	    ts = ts>>0x0001;
    	}
    	
    	ll tsr = ts>>0x0001;
    	cout<<tsr<<endl;
    }
    
}
