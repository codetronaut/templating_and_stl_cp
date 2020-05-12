#include <bits/stdc++.h> 
using namespace std;
#define endl '\n'
typedef long long int ll;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(NULL);
/*
void trplsrt(vector<ll>&v){
	
}*/

// o/p: 3 2 4 1 -> pi1=3, pi2=4, pi3=1; (i1,i2,i3) -> (1,3,4)
/*
Example Input
1
4 2
3 2 4 1
Example output
1
1 3 4
*/

//incomplete
int main(void) 
{ 
   f_boot
   ll t; /*ll k;*/ ll n; vector<ll> v(100); /*vector<ll>length(100,0);*/

   
   unorderd_map<vector<ll>,ll> count;
   
   cin>>t; ll length=0;
   
   while(t--){

   	cin>>n; 
   	//cin>>k;
   	for(ll i=0; i<n; ++i){
   		cin>>v[i];
   	}
    ll i1=0,i2=0,i3=0;
    
    for(ll i=0; i<v.size(); ++i){
    
        if(i == v[i]) continue;
        
        else if(i != v[i]){
            
            ++length[v[i]];
        }
        
        
    }
  
}
   	
   	
   	for(int i=0; i<v.size(); ++i){
    
        cout<<v[i]<<" ";
    }
   	
   	return 0;
   	
}
