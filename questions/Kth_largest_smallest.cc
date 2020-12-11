#include <bits/stdc++.h>
using namespace std;
int main() {
    int min; int max;
    int n;
    cin>>n;
    vector<int> a(n);

    for (int i=0; i<n; ++i)
    {
        int v;
        cin>>v;
        a.push_back(v);
    }

    if (n==1) {
        max = min = a[0];
    } else {
        if (a[0] > a[1]) {
            min = a[0];
            max = a[1];
        } else {
            max = a[1];
            min = a[0];
        }
    }
    int cnt = 0; int mini = 0, maxi = 0;
    for (int i=2; i<a.length(); ++i) {
        if (a[i] > a[i+1] && a[i] && a[i+1]) {
            if (a[i] > max) {
                max = a[i];
                mini = i;
            }
            if (a[i] < min) {
                min = a[i];
                mini = i;
            }
        } else if (a[i] < a[i+1] && a[i] && a[i+1]) {
            if (a[i] < min) {
                min = a[i];
                mini = i;
            }
        } 
        if (i == a.length()-1) {
            a[maxi] = NULL;
            ++cnt;
        }
        if (cnt == Kmax) {
            Kth = a[maxi];
        }
        cout<<"Kth Max element is:"<<a[maxi]<<endl;
    }
    return 0;
}

