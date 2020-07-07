#include<bits/stdc++.h>
#define pb push_back 
#define endl '\n'
#define mp make_pair
typedef long long int ll;
typedef long double ld;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(NULL);
    

using namespace std; 

ll count_activity(vector< pair<size_t,size_t> >&v,ll n){
	ll i,j;
	
	j=0;
	ll count=0;
        for(ll i=1; i<n; i++)
        {
            if(v[i].first >= v[j].second)
            {
                // count<<count;
                j = i;
                ++count;
            }
        }
       return count;
}

int main(void)
{
    ll choice, a, b;ll n;
    cin>>choice;
  
    while(choice--) 
    {
        cin>>n;
        vector< pair <size_t, size_t> >v;
        for(ll i=0; i<n; ++i)
        {
            cin>>a>>b;
            v.pb({b,a});
        }
        sort(v.begin(), v.end());
        cout<<count_activity(v,n)<<endl;	
    }
} 
