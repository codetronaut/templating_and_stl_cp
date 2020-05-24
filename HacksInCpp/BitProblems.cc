/*

Author: Anmol

*/
#include<bits/stdc++.h>

#define endl '\n'

typedef long long int ll;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
    
 
using namespace std;

ll bitFlipped(ll x, ll y){
    
    ll z = x ^ y;
    
    ll count = 0;
    while(z){
        
        ++count;
        
        z = z & (z-1);
    }
    
    return count;
    
}

ll bitPalindrome(ll n){
/*    
    if((n & (n-1)) == (n-1))
    {
        cout<<"Palindrome!!!";
    }
    else cout<<"not";
    */
    
    ll reve = 0;
    unsigned k = n;
    
    while(k)
    {
        reve = (reve << 1) | (k & 1);
        k >>= 1;
    }
    
    return n == reve;

}

unsigned bitPalindrome2(ll n){
    
    unsigned x = 1;         //start range
    unsigned y = x<<ll(log2(n)); //end range
    bool ans = true;
    while(y >= x)
    {
         
        ll a1 = (x & n)>0;
        ll a2 = (y & n)>0;
//         cout<<a1<<" "<<a2<<endl;
        
        if(a1!=a2)
        {
            return !ans;
          
        }
        x <<= 1; y >>= 1; 
    }
    
    return ans;
     
}

int main(void){
/*    
    f_boot
    ll x,y;
    
    cin>>x>>y;
    
    cout<<"binary of "<<x<<":"<<bitset<8>(x)<<endl<<"binary of "<<y<<":"<<bitset<8>(y)<<endl;
    
    cout<<bitFlipped(x,y)<<endl;
    */
   ll x;
   cin>>x;
//  bitPalindrome(x);



    if(bitPalindrome2(x)){
        cout<<"Palindrome"<<endl;
    }
    else cout<<"Not";
}
