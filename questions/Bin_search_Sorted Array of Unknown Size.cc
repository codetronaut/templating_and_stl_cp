// Binarysearch in unbound or infinitr number array

#include <bits/stdc++.h>
using namespace std;

int bin_search(int *a, int low, int high, int x)
{
	while(true) {
		int mid = low + ((high-low) >> 1);
		if (a[mid] == x) {
			return a[mid];
			break;
		}
		if (a[mid] < x)
			low = mid+1;
		if (a[mid] > x)
			high = mid-1;	
	}
	return -1;
}

/*
int oob_bin_search(int *a, int x)
{
	int low = 0;
	int high = 1;
	
	while (true) {
		int mid = low + ((high-low) >> 1);
		if (a[mid] == x)
			return a[mid];
		if (a[mid] > x) {
			low = mid;
			return bin_search(a, low, high, x);
		}
		if (a[mid] < x && a[high*2] < x)
			high *= 2;
	}
}
*/

int oob_bin_search(int *a, int x)
{
	if (a == NULL)
		return -1;
	int low = 0;
	int high = 1;
	int val = a[0];
	
	while (true) {
		if (val < x) {
			low = high;
			high *= 2;
			val = a[high];
		}
		else break;
	}
	return bin_search(a, low, high, x);
}

int main() {
	int a[] = {2,3,4,5,6,7,8,9,10,11,12};
	
	int x = 11;
	
	int ret =0;
	if ((ret = oob_bin_search(a,x))) cout<<"Present";
	else cout<<"Not Present..";
	return 0;
}
