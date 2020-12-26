// Binary search on cyclic sorted array
// a[] = {7,8,1,2,4,6} 
#include <bits/stdc++.h>
using namespace std;

int b_search(int *a, int n) {
	
	if (a == NULL and !n)
		return -1;
		
	int low = 0; int high = n-1;
	while (low < high) {
		int mid = low + ((high - low)>>1);
		if (a[mid] == a[high])
			--high;
		else if (a[mid] > a[high])
			low = mid + 1;
		else
			high = mid;
	}
	return a[high];
}

int main() {
	int a[] = {2, 3, 4, 5, 6, 7, 8, 1};
	
	int n = sizeof(a)/sizeof(a[0]);
	
	int res = b_search(a, n);
	cout<<res<<" ";
	//b_search(a,n);
	return 0;
}
