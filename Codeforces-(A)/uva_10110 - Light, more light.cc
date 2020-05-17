#include<bits/stdc++.h>

#define endl '\n'

typedef long long int ll;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
    

using namespace std; 


int main(void) 
{ 
    f_boot
	
	ll n;
	
	while(cin>>n){
		ll sqr = (ll) sqrt(n);
		if(n == 0) break;
		if(sqr * sqr == n) cout<<"yes\n";
		else cout<<"no\n";
	}

	return 0; 
} 
