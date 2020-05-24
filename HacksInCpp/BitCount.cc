#include<bits/stdc++.h>

#define endl '\n'

typedef long long int ll;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
    

using namespace std; 

ll countBit(ll n){
	
		
 	ll count = 0;
 	
 	while(n>0){
 		count += (n&1);
 		
 		n = n>>1;
 	}
 	
 	// cout<<"No. of setbits: "<<count<<" ";
 	return count;
	
}
ll countBitFast(ll n){
	
	ll count = 0;
	
	while(n>0){
		n = n & (n-0x0001);
		++count;
	}
	
	return count;
}

ll setIthBit(ll &n, ll i){
	//set bits  
 	// Time: O(No. of bits)
	ll mask = 1<<i;
	
	n =  (n | mask);
	
	return n;
}

//clear the ith bit of a number...

ll clearIthBit(ll &n, ll i){
	
	ll mask = ~(1<<i);
	
	n = (n & mask) ;

	return n;
}

//Find subsequences of a string

// a b c ---> a,b,c,ab,bc,ca,abc.
void filterCharacters(char *a, ll num){
    
    ll i =0;
    while(num > 0){
        (num & 1) ? cout<<a[i] : cout<<"0";
        
        ++i;
        
        num = num>>1;
        
    }
    
    cout<<endl;
}

void generateSubsets(char *a){
    
    ll length = strlen(a);
    
    ll range = (0x0001 << length) - 0x0001; // (2^n - 1)
    
    for(ll i=0; i<=range; ++i)
    {
            filterCharacters(a,i);
    }    
}
////////////////////////////////////

int main(void) 
{ 
    f_boot
	
 	
 	// ll n;
 	// cin>>n;
 	
 	// cout<<"No. of setbits: "<<countBit(n)<<endl;
 	
 	// cout<<"No. of setbits: "<<countBitFast(n);
	//cout<<" "<<setIthBit(n,1); 
//  	cout<<" "<<clearIthBit(n,2);
    
    char a[100];
    cin>>a;
	generateSubsets(a);
    
    return 0; 
} 
 
