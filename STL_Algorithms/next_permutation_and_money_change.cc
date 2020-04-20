//By Anmol
#include <iostream>
#include<algorithm>
#include<vector>
using std::vector;
using std::rotate;
using std::next_permutation;
#define f_boot std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);

//Implementation of next permutations.
void permutation_next()
{
    fast_code
    vector<int> v{1,2,3}; int it=0; int n;
    
    while(it < v.size())
    {
    std::cout<<v[it];
    it++;    
    }
    //For next permutations
    std::next_permutation(v.begin(), v.end());
    std::next_permutation(v.begin(), v.end());
    
    std::cout<<std::endl;
    
    //for each loop only  in stdc++11
    
    for(auto& x : v)
    {
        std::cout<<x<<" ";
    }    
}

//Implementation of rotate

void Rotate_me()
{
    //with ancient array :P
    
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    
    std::rotate(arr, arr+2, arr+n); // in 'arr+2' 2 is the position from which we have to rotate like ans for this will be   30 40 50 10 20, here 30 40 50 rotates and comes at front.
    
    int it=0;
    while(it < n)
    {
        std::cout<<arr[it]<<" ";
        it++;
    }
    
    std::cout<<std::endl;
    
    //with vectors
    
    vector<int> v{10,20,30,40,50};
    
    std::rotate(v.begin(), v.begin()+2, v.end());
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    
}

int main(void){
    f_boot
    Rotate_me();
    permutation_next();
    
}
