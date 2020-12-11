#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    set<int> s = {0, -1, -2, -2, -3, -3, 1, 1, 4, 4};

    // for (int i=0; i<n; ++i) {
    //     int a;
    //     cin>>a;
    //     s.insert(a);
    // }
    vector<int> v;
    v.assign(s.begin(), s.end());
    long long int min=v[0], max=v[0];

    // for (auto const &c: v) {
    //     std::cout << c << ' ';
    // }
    for (long long int i=0; i<s.size(); i++) {
        if (v[i+1] && (v[i+1] > max))
            max = v[i+1];
        if (v[i+1] && (v[i+1] < min))
            min = v[i+1]; 
    }
    cout<<" min: "<<min<<" max: "<<max<<endl;

}
