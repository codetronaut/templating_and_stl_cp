#include<bits/stdc++.h>

#define pb push_back 
#define endl '\n'
typedef long long int ll;
typedef long double ld;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std; 


signed main(void) 
{ 
    f_boot
	signed t;
	cin>>t;
	
	string st;
	ll c =0;
	
	while(t--)
	{
					
		cin>>st;
		ll itr = 0;
		ll size = st.length()-0x0001;	
// 		while(size--){
// 			if((st[i] == 'x' && st[i+1] == 'y') || (st[i] == 'y' && st[i+1] == 'x')){
// 				i++;
// 				++count;
// 			}
// 			else if(st[i] == 'x' && st[i+1] == 'x' || st[i] == 'y' && st[i+1] == 'y'){
// 				i++;
// 			}			
		while(size > itr){
			if(st[itr+0x0001] != st[itr]){
				++c; ++itr;
			}
			++itr;
		}
		cout<<c<<endl;
		c = 0;
    }
} 
