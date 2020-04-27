/*
    Author: Anmol
*/
#include<bits/stdc++.h>

#define watch(x) cout << (#x) << " is " << (x) << endl
#define watchArray(v) for(int i = 0; i < v.size(); i++) cout << v[i] << " \n"[i == v.size()-1];
#define all(v) (v).begin(), (v).end()
 
#define endl '\n'
 
typedef long long int lli;
typedef long double ld;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std; 

void primeSieve(vector<int>&v, int n)
{
    v[0]= v[1]=0;
    v[2] = 1;
    
    for(int i=3; i<=n; i+=2) //marking every odd prime
    {
        v[i] = 1;
    }
    
    for(int i=3; i<=n; i=i+2)  //this will save time by skipping even
    {
        if(v[i]){
            for(int j = i*i; j<=n; j+=2*i)  //we will go to i*i and j+2*i as numbers below this is already covered.
               { v[j] = 0; }
        }
    }
 
    for(int i=3; i<=n; i+=2) 
    {   if(v[i])
        {
             cout<<i<<",";
        }
    }
}

int main(void) 
{ 
    f_boot
    
    int n;
    cin>>n;
    
    vector<int>v(n,0);
    
    primeSieve(v,n);  //time complexity : O(nlog(log(n)))

	return 0; 
} 
