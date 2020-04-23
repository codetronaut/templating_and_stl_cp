#include<bits/stdc++.h>

#define loop(i,n) for (i=0; i<n; ++i)
#define LOOP(i,k,n) for (i=k; i<=n; ++i)
#define LOOPR(i,k,n) for (i=k; i>=n; --i)

#define f_boot ios_base::sync_with_stdio(false); cin.tie(NULL);
    
 

using namespace std; 
void RangeBasedLoops()
{
    // Create a vector object that 
	// contains 5 elements 
	vector<int> vec = {0, 1, 2, 3, 4}; 

	// Type inference by reference using auto. 
	
    // (Imp.)Range based loops are preferred when no 
	// modification is needed in value 
	for (const auto &value : vec) 
		cout << value << ' '; 

	cout << '\n'; 

	// Basic integer array 
	int array[]= {1, 2, 3, 4, 5}; 
	for (const auto &value: array) 
		cout << value << " "; 
    
}

void MacroLoop()
{
    int i;
    vector<int>v = {9,1,9,5,6,0}; 
    
    loop(i,v.size())
        cout<<v[i]<<" ";
    cout<<"\n";    
    
    LOOP(i,1,v.size())
        cout<<v[i]<<" ";
    cout<<"\n";
    
    LOOPR(i,v.size()-1,1)
        cout<<v[i]<<" ";
    cout<<"\n";
            
}

int main(void) 
{ 
    f_boot
 
    MacroLoop();

	return 0; 
} 
