// Recursion with Auxiliary buffer- combinations
#include <bits/stdc++.h>
using namespace std;


void print_array(vector<int> &a) {
	
	for (int i=0; i<a.size(); ++i) {
		cout<<a[i]<<"";
	}
	cout<<"\n";
}

void print_combos_helper(vector<int> &a, vector<int> &buf, int si, int bi)
{
	if (buf.size() == bi) {
		print_array(buf);
		return;
	}
	
	if (si == a.size())
		return;
	
	for (int i = si; i<a.size(); ++i) {
		buf[bi] = a[i];
		print_combos_helper(a, buf, i+1, bi+1);
	}
	
}

void print_combos(vector<int> &a, int x) 
{
	if (a.empty() || x > a.size() || !x)
		return;
	
	vector<int> buf(x);
	
	print_combos_helper(a,buf,0,0);
}


int main() {
	
	vector<int> a;
	int n,x;
	cin>>n;
	cin>>x;
	
	for(int i=0; i<n; ++i) {
		int e;
		cin>>e;
		a.push_back(e);
	}
	
	print_combos(a,x);

	return 0;
}
