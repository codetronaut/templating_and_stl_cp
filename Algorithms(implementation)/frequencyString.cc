// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     string str;
//     int t = 4;
//     while (t--)
//     {
//         getline(cin, str);

//         // Keep reading a new line while there is
//         // a blank line
//         while (str.length()==0 )
//             getline(cin, str);

//         cout << str << " : newline" << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
ifstream f("data.in");
ofstream g("data.out");
int A[100], n, i;
int main ()
{
    f>>n;
    for (i=1; i<=n; ++i) {
        int x;
        f>>x;
        x=x+10;
        ++A[x];
    }
    if (A[3] > 0) g<<"YES, it appears";
             else g<<"NO, it's not";

    return 0;
}
