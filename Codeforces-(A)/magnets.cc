#include <bits/stdc++.h> 
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long int ll;
typedef long double ld;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(NULL);

ll magnets(vector<ll>&v)
{	ll count=0;
    
    if(v.size() <= 1){
        ++count;
    }
    else{
        for(ll i=0; i<v.size(); ++i)
        {
            if(v[i] == v[i+1]){
                continue;
            }	
            else ++count;
        }
    }
    
    return count;
}

int main(void) 
{ 
    f_boot
    vector<ll>v;
    ll t;
    cin>>t;
    while(t--)
    {
    	ll c;
    	cin>>c;
    	v.pb(c);
    	
    }
    ll results = magnets(v);
    cout<<results<<endl;
    
}
