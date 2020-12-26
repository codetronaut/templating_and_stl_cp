// Subarray Slinidng window problem.
// For contiguous subarray sum.
// All no.s +ve Integers 
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[] = {1,4,2,10,23,3,1,0,20};
	
	int size = sizeof(a)/sizeof(a[0]);
	
	if (!size) return -1;
	
	int start=0,end=0;
	int sum = a[0];
	int target = 39;
	
	while (start < size) {
		if (sum < target) 
			sum += a[++end];
		if (sum > target)
			sum -= a[start++];
		else if (sum == target)
			break;
	}
	cout<<"Start idx:"<<start<<"\nend idx: "<<end<<"\n";
}
