 
/*
   Author: Anmol
*/

#include<bits/stdc++.h>

#define watch(x) cout << (#x) << " is " << (x) << endl
#define watchLoop(v) for(int i = 0; i < v.size(); i++) cout << v[i] << " \n"[i == v.size()-1];
#define all(v) (v).begin(), (v).end()
 
#define pb push_back 
#define endl '\n'
 
typedef long long int lli;
typedef long double ld;
#define f_boot ios_base::sync_with_stdio(false); cin.tie(NULL);
    

using namespace std; 


int main(void) 
{ 
    f_boot
 
   string str1;
   string str2;
   
   getline(cin,str1);
   getline(cin,str2);
   
       if(int(str1[0]) == int(str2[0])) cout<<"0";
       else if(int(str1[0]) > int(str2[0])) cout<<"-1";
       else if(int(str1[0]) < (str2[0]))    cout<<"1";
       

	return 0; 
} 
