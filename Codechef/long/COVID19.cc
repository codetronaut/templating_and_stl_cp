#include<bits/stdc++.h>
 
#define pb push_back 
#define endl '\n'

typedef long long int ll;
#define f_boot ios_base::sync_with_stdio(0); cin.tie(NULL);
    

using namespace std; 

void corona(vector<ll>&v, ll m)
{
    ll count =1; 
	ll i=0;
	ll arr[m+1] = {0};
	arr[0] = 1;
	arr[m] = 1;
	for(ll i=1; i<m; i++)
	{
		arr[i] = 1;
		if(v[i] - v[i-1] <= 2)
		{
			arr[i] +=arr[i-1];
		}
	}
	
// 	for(auto&i:arr)
// 	{
// 		cout<<i<<" ";
// 	}
	
	ll mini = INT_MAX;
	ll maxi = INT_MIN;
	
	for(ll i=0; i<m; i++)
	{
		if(arr[i+1] == 1)
		{
			mini = min(arr[i], mini);
		}
		
		if(arr[i+1] == 1)
		{
			maxi = max(arr[i], maxi);
		}
	}
	cout<<mini<<" "<<maxi<<endl;
}


int main(void) 
{ 
    f_boot
   
   	ll n;
	
	cin>>n;
	 ll m; ll dist; ll i=0;
      
	while(n--){
       
        cin>>m;
        vector<ll>v(m);
        
        for(int i=0; i<m; ++i)
        {
        	cin>>v[i];
        }
        corona(v,m);
	}
	
    // cout<<min(1, 2)<<endl;
	return 0; 
} 
