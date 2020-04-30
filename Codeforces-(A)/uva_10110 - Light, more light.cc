#include <bits/stdc++.h> 
using namespace std;
#define endl '\n'
 
typedef long long int lli;
typedef long double ld;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(NULL);

/*
TLE :( 
void printDivisors(int n) 
{ int count=0,count1=0;
	for (int i=1; i<=sqrt(n); i++) 
	{ 
		if (n%i == 0) 
		{ 
			if (n/i == i) ++count1;
			else  count+=2;
		} 
	} 
 int r = count + count1;
 if(r%2 == 0)
	cout<<"no"<<endl;
 else 
   cout<<"yes"<<endl;
} */

void divisorSieve(int n){

    int divisors[n+1] = {0};
    for(int i=1; i<=n; ++i)
    {
        for(int j=i; j<=n; j+=i)
        {
            divisors[j] += 1;
        }
    }
    
for(auto &i :divisors)
    {
        cout<<i<<" ";
    }
}

int main(void) 
{ f_boot
    int n;
    cin>>n;
    divisorSieve(n);
    
//     for(int i=0; i<n; ++i){
//         std::cin>>n;
//         if(n != 0)
//         {
//             printDivisors(n); 
//         }
//         else break;
//     }
//     
	return 0; 

    
} 
