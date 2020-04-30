#include <bits/stdc++.h> 
using namespace std;
#define endl '\n'
 
typedef long long int ll;
typedef long double ld;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(NULL);
vector<int>arr(100, 0);

int main(void) 
{ 
    f_boot
    string g;
    cin>>g;
    
   ll count = 0;
    for(char c:g)
    {
        ll var = abs(49 - (c-'0'));
         arr[var]++;
    }
    
    for(ll i:arr)
    {
        if(i!=0)
        {
            count++;
        }
    }

    if((count & 1) == 0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!";
} 
