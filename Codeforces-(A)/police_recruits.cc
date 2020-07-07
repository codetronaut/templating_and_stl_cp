#include<bits/stdc++.h>
#define pb push_back 
#define endl '\n'
typedef long long int ll;
typedef long double ld;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(NULL);
    

using namespace std; 


int main(void) 
{ 
    f_boot
 
   //yha likh bakwass code
   
   	ll n;
   	ll inc;
   	ll c=0,count = 0;
	
	cin>>n;
	
	while(n--){
	   
       cin>>inc;
       if(inc > 0 and inc < 11){
       	c = c + inc;
       }
       else if(inc == -1){
		c = c + inc;
		if(c < 0){
			c = 0;
			++count;
		}
		else continue;
       }
       else continue;
	}
	
    cout<<count<<endl;

	return 0; 
} 
