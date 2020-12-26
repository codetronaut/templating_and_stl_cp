#include<bits/stdc++.h>
#define pb push_back 
#define endl '\n'
typedef long long int ll;
typedef long double ld;
using namespace std; 

ll fib(ll n) {
    if (n==0 or n==1)
        return 1;
    ll r = fib(n-1)+fib(n-2);
    return r;
}

ll fib2(ll n, ll *arr){
	if (n==0 or n==1)
        return 1;
	if(arr[n] > 0)
		return arr[n];
	int output = fib2(n-1, arr)+fib2(n-2, arr);
	arr[n] = output;
	return output;
	
}
ll fibi(ll n, vector<ll>&arr){
	arr[0] = 1;
	arr[1] = 1;
	for(ll i=0; i<=n; ++i){
		arr[i] = arr[i-1] + arr[i-2];
	}
	ll output = arr[n];
	return output;
}

int main() 
{
  ll n; vector<ll>v = {0};
  cin>>n;
  
   cout<<fibi(n, v)<<endl;
} 
