/*
    Author: Anmol
*/

// This one need more optimisation (halted)
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


void primeSegmentedSeive(lli a, llib) //a and b are the extreme values of segment
{
    int n = 1000000;
    vector<int>v(n,0);
    primeSieve(v,n);
    
    bool v[b-a+1]; //array ofsize b-a
    memset(v,1,v.size()); //sets every value in array to 1
    /*or, 
    int n = b-a+1;
    vector<bool>v(n+1,false);
    */
    
    for(lli i = 2; i*i<=b; ++i)
    {
            for(lli j=a; j<=b; ++j)
            {
                if(v[i]){
                    if(j == i) continue;
                    
                    if(j%i == 0)    
                    {
                        v[j-i] = 0; //e.g 25-25=0, 26-25=1 this will put zero to array1(in which segement is present).
                    }
                }
            }
    }
    for(lli i=a; i<b; ++i)
    {
        cout<<v[i-a]<<",";
    }
}

int main(void) 
{ 
    f_boot
    
    lli a,b;
    cin>>a>>b;
    
    vector<int>v(1000000,0);
    
    primeSegmentedSeive(a,b);

	return 0; 
} 
