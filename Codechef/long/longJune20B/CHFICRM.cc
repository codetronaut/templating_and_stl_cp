#include<bits/stdc++.h>
 
#define pb push_back 
#define endl '\n'
typedef long long int ll;
typedef long double ld;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std; 
 
 
signed main(void) 
{ 
    f_boot
    ll t, n;
    //     ll a;
    cin >> t; //i/p
	while (t--) {

        cin>>n; //i/p

        ll copy = n;
        ll __v;
        //vector<ll>v(1000);
        // memset(chef, 0, sizeof(chef));
		    vector<ll>ci(2,0); //money counter
        // while(n--){
        //     cin>>a; //ip
        //     v.pb(a);
        // }
        ll jhanda = 0;

		for(ll i=0; i<n; ++i) {
          cin>>__v;
          
            if(__v == 5)
            {
                ++ci[0];
                ++jhanda;
            }
            else if(ci[0] >= 1 and __v == 10 )
            {
                ++ci[0x0001];
                --ci[0];
                ++jhanda;
            }
            else if(ci[0x0001] >= 1 and __v == 15){
                ++jhanda;
                --ci[0x0001];
            }
            else if(ci[0] >= 2 and __v == 15 ){
                ci[0] -= 2;
                ++jhanda;
            }
            else continue;
   
    //       switch(__v)
    //       {
    //       case 5:   ++ci[0];
    //                 ++jhanda;
    //                 break;
    //       case 10:   
    //                   if(ci[0] >= 1){
    //                   ++ci[0x0001];
    //                   --ci[0];
    //                   ++jhanda;
    //                   }
    //                   break;
    //       case 15: if(ci[0x0001] >= 1){
    //                   ++jhanda;
    //                   --ci[0x0001];   }
    //               else if(ci[0x0001] >= 2){
    //                   ci[0] -= 2;
    //                   ++jhanda;                
    //               }
    //               break;
    //   }
    }
        bool can_sell = (copy == jhanda);
			cout << ((can_sell) ? "YES" : "NO") << endl;
			
	}
	return 0;
}
