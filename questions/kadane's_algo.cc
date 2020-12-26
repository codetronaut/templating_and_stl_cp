// KAdane's Algorithm for max. contiguous subarray sum
#include <bits/stdc++.h>
using namespace std;

int maxo(int a, int b) {
	return a>b?a:b;
}

int main() {
	int a[] = {4, -8, 9, -4, 1, -8, -1, 6}; 
	int size = sizeof(a)/sizeof(a[0]);
	int res = a[0]; int maxHere = a[0];
	
	for (int i =0; i<size; ++i) {
		maxHere = maxo(maxHere+a[i], a[i]);
		//cout<<"i= "<<i;
		//cout<<"\nmaxHere: "<<maxHere;
		res = maxo(res, maxHere);
		//cout<<"\nres: "<<res<<"\n";
	}
	cout<<res<<"\n";
}
