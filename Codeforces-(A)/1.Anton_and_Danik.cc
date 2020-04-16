#include <bits/stdc++.h> 
using namespace std;

int main(void)
{
   int games,count_a=0,count_d=0;
   cin>>games;
   string str;
   cin>>str;
   for(int i=0; i<games; ++i)
   {
       if(str[i] == 'D') count_d++; 
       else count_a++; 
   }
   if(count_a > count_d) cout<<"Anton\n";
   if(count_a < count_d) cout<<"Danik\n";
   if(count_a == count_d) cout<<"Friendship\n";
}
