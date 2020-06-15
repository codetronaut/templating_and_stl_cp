#include<bits/stdc++.h>
 
#define pb push_back 
#define endl '\n'
typedef long long int ll;
typedef long double ld;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std; 

signed main (void) {
	f_boot
   ll t;
	cin >> t;
	while(t--) {
			ll n;
		cin >> n;
		ll a = 1;
    ll size = (n) + (0x0001>>0x0001);
		ll row = 0;
    while(row < size) {
      ll col = 0;
			while(col < n) {
				cout<<a++<<" "; //cout<<a<<endl;
        ++col;
			} 
      cout<<endl;
			if(n-1 > row) {
				for(ll col = 0; col < n; ) {
					if(n & 0x0001) {
						cout<<a++<<" ";
						//cout<<a<<endl;
					} else {
					    //ll try = n+a-col-1;
					    //cout<<try<<endl;
						cout<<n+a-col-1<<" ";
						if(col == n - 1) a += n;
						//cout<<a<<endl;
					}
				++col;
        }
        cout<<endl;
			}
		row += 2;
    }
	}
}
