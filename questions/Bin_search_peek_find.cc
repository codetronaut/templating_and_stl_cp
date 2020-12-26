/*
A peak element in an array A is an A[i] where its neighboring elements are less than A[i].
So, A[i - 1] < A[i] and A[i + 1] < A[i].
Assume there are no duplicates. Also, assume that A[-1] and A[length] are negative infinity (-∞).
So A[0] can be a peak if A[1] < A[0].
A = [1,3,4,5,2] => Peak = 5
A = [5,3,1] => Peak = 5
A = [1,3,5] => Peak = 5
*/

#include <iostream>
using namespace std;

long long find_peak(int *a, int n)
{
	int low = 0; int high = n-1;
	
	if (a[low] > a[low+1])
		return low;
	if (a[high] > a[high-1])
		return high;
	
	while (low <= high) {
		long long mid = low + ((high - low) >> 1);
		if (a[mid] < a[mid+1] and a[mid] > a[mid-1]) {
			low = mid;
			continue;
		}
		else if (a[mid] > a[mid+1] and a[mid-1] < a[mid]) {
			return mid;
		}
	}
	return -1;
}

int main() {
	int a[] = {7,6,5,1,2,3,4,0};
	int n = sizeof(a)/sizeof(a[0]);
	long long res = find_peak(a,n);
	cout<<res<<" ";
	return 0;
}
