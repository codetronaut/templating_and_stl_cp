/*
file for the every implementation of bitwise operator in every possible way.
*/

#include<bits/stdc++.h> 
using namespace std; 

typedef long long int ll; 


// num is the number and pos is the position 
// at which we want to set the bit. 
void set(int & num,int pos) 
{ 
	// First step is shift '1', second 
	// step is bitwise OR 
	num |= (1 << pos); 
} 

//detect if two interger have opposite signs or not. 
void negativeORnot()
{
	int x = 4;
	int y = -8;
	
	cout << x << "  in binary is " << bitset<32>(x) << endl;
	cout << y << " in binary is " << bitset<32>(y) << endl;
	
	// true if x and y have opposite signs
	bool isOpposite = ((x ^ y) < 0);
	
	if (isOpposite)
		cout << x << " and " << y << " have opposite signs";
	else
		cout << x << " and " << y << " don't have opposite signs";	
	
	
}

//checking the position of rightmost setbit
ll positionRightmost(ll n){
    
    if(n & 1) return 1; //returns odd when no. is 1
    
    else n = n ^ (n & (n-1)); // unset the rightmost bit and take XOR wid the no. itself
    
    ll pos = 0;
    while(n){  n >>= 1;
               ++pos;   }  //for counting position.
    return pos;
    
}
//alternate solution for checking the position of rightmost setbit

ll positionRightmostAltr(ll n){
    
    if(n & 1) return 1;
    
    return log2(n & -n ) + 1;
    
    //for even no. identification also we can use (n & -n) == n
    
}

//checking the position of only setbit
ll positionRightmost(ll n){
    
    if(n & (n-1)) //returns odd when no. is 1
    {
        cout<<"input wrong!";
        
        return 1;
    }
    
    return log2(n) + 1;
}

//calculating parity of a no. i.e no. of 1s in a binary no. odd parity -> odd no. of 1s and vice-versa.

unsigned checkParity(unsigned n){
    
    bool parity = false;
    
    while(n){
        
        if(n & 1) parity = !parity;
        
        n >>= 1;
    }
    
    return parity;
    
//     also another efficient approach by turning off rightmost  bit,
//     
//     bool parity = fasle;
//     
//     while(n){
//         parity = !parity;
//         
//         n = n & (n-1);
//     }
//     return parity;
}


int main() 
{ 
// 	int num = 4, pos = 1; 
// 	set(num, pos); 
// 	cout << (int)(num) << endl; 

    cout<<positionRightmostAltr(4);
    return 0; 
} 
