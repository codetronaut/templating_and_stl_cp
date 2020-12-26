//Max Heap ----> pq.element * (-1)
// else Min Heap
// Kth Max and min
#include <bits/stdc++.h>
using namespace std;
int main() {
    priority_queue<int, vector<int>,greater<int>> pq;
    int n;
    cin>>n;
    int i=0;
    while (i < n) {
        int a=0;
        cin>>a;
        pq.push((-1)*a);
        ++i;
    }
    while (!pq.empty()) {
        cout<<(-1) * pq.top()<<" ";
        pq.pop();
        break;
    }


}

