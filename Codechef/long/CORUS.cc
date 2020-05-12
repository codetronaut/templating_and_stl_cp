#include <bits/stdc++.h> 
using namespace std;
#define endl '\n'
 
typedef long long int ll;
typedef long double ld;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(NULL);

//efficient
ll isolation(string &str,vector<ll>&arr, ll cen){
    
    ll s = 0;
   
    for(ll i=0; i<arr.size(); i++)
    {
        s += (arr[i] - min(arr[i], cen));
    }
    return s;
    
}

int main(void) 
{ 
    f_boot
    string str;  ll n; ll no_of_places;
    ll t;
    cin>>t;
    
    
    while(t--){
        cin>>n;
        cin>>no_of_places;
        cin>>str;
        ll cen;
         vector<ll>arr(27, 0);
            for(char c:str)
            {
                ll var =  (int)c - 97;
                // arr[var] = 0;
                arr[var]++;
            }
        while(no_of_places--){
            cin>>cen;
            cout<<isolation(str, arr, cen)<<endl;
        }
    }
    
}
