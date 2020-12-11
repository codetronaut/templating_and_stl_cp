// KAdane's Algorithm for max. contiguous subarray sum
#include <bits/stdc++.h>
using namespace std;

int maxo(int a, int b) {
	return a>b?a:b;
}

int main() {
	int a[] = {-2,-3,4,-1,-2,1,5,-1};
	int size = sizeof(a)/sizeof(a[0]);
	int res = a[0]; int maxHere = a[0];
	
	for (int i =0; i<size; ++i) {
		maxHere = maxo(maxHere+a[i], a[i]);
		res = maxo(res, maxHere);
	}
	cout<<res;
}
