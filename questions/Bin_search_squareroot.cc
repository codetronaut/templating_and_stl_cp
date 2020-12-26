#include <iostream>
using namespace std;

int square(int a)
{
	return a*a;
}

int sq_root(int a)
{
	int low =0; int high=a/2;
	
	while (low <= high) {
		int mid = low + ((high - low) >> 1);

		if (square(mid) > a)
			high = mid - 1;
		else if (square(mid) < a) {
			if(square(mid+1) > a)
				return mid;
			low = mid + 1;
		}		
		else 
			return mid;
	}
	return -1;
}

int main() {
	int a;
	cin>>a;
	int ret = sq_root(a);
	cout<<ret<<" ";
	return 0;
}
