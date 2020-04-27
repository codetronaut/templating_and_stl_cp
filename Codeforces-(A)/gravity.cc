#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define loop(i,n) for (i=0; i<n; ++i)

int main(void) {
    vector<int> v; 
    int i,choice;
    std::cin>>choice;
    loop(i,choice)
    {
        int a;
        cin>>a;
        v.pb(a);      
    }    
    sort(v.begin(), v.end()); 
    for (auto x : v) 
        std::cout << x << " "; 
}
 
