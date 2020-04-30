#include <bits/stdc++.h> 
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long int ll;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(NULL);

void cards(vector<ll>&v)
{
	ll sereja=0,dima=0;
	 int i=0,j=v.size()-1;
     int k=0;
		while(i <= j){
			int comp = 0;
			comp = max(v[i],v[j]);
			if(k & 1)
            {
                if(comp == v[j]) {
                    sereja += v[j];
                    --j;
                }
                else{
                    sereja += v[i];
                    ++i;
                    }
            }
			else {
                
                if(comp == v[j])
                {
                    dima += v[j];
                    --j;
                }
                else if(comp == v[i]){
                    dima += v[i];
                    ++i;
                }
            }
            ++k;
        }
	
	cout<<sereja<<" "<<dima;
	
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
    	v.push_back(c);
    }    
    // for(auto &i: v)
    // {
    // 	cout<<i<<" ";
    // }
    // cout<<endl;
    cards(v);
    
    return 0;
    
}
