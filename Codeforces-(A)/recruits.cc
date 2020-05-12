#include <bits/stdc++.h>
using namespace std;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(void) {
	f_boot
	int n; int count =0;
	cin>>n;
	vector<int>stk(n); vector<int>stk1;
	int i=0;
	while(n--){
		cin>>stk[i];
		++i;
	}
	int j=0;
	while(n--){
		if(stk[j] == -1)
			stk1.push_back(stk[j]);
		else if(stk[j] != -1 && stk[j] >0){
			while(stk[j]--)
			{
				stk1.pop_back();
				++count;
			}
		}
	}
} 
