#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int ll;

int main(void) {
	ll t;
	cin>>t;
	
	ll price;
	ll ceiling;
	ll nos;
	ll revenue=0;
	
	while(t--){
		cin>>nos;
		cin>>ceiling;
		
		for(ll i=0; i<nos; ++i){
			cin>>price;
			
			if(price > ceiling){
				revenue += (price - ceiling);
				//cout<<revenue;
			}
			else continue;
		}
			cout<<revenue<<endl;
			revenue = 0;
		}
	return 0;
	
}
