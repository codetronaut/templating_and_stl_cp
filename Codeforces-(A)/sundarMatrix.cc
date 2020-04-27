#include <bits/stdc++.h>
using namespace std;
int main(void) {
    vector<vector<int>>vect;

    for(int i=0; i<5; ++i)
    {
      vector<int>row;
       for(int i=0; i<5; ++i)
       {
           int a;
           cin>>a;
           row.push_back(a);
       }
        vect.push_back(row);
    }
    for(int i=0; i<5; ++i)
    {
        for(int j=0; j<5; ++j)
        {
            if(vect[i][j] == 1)
            {
                int ab = abs(3-(i+1)) + abs(3-(j+1));
                cout<<ab;
            }               
        }
    }
}
