#include <iostream>
#include <string>
#include<vector>
#define lli long long int 
using namespace std;

int road_width(lli *arr, int height_fence,int no_of_launde)
{ 
    int count=0;
    while(no_of_launde--){
        if(arr[no_of_launde] > height_fence)
            count +=2;
        else if(arr[no_of_launde] <= height_fence)
            count +=1;
    }
    return count;
}

int main(void) {
    int no_of_launde; int height_fence;
    cin>>no_of_launde;
    cin>>height_fence;
    
    lli arr[no_of_launde];
    
    for(int it=0; it<no_of_launde; it++){
    
        cin>>arr[it];
    }
    
   int width = road_width(arr, height_fence, no_of_launde);
   cout<<width;
}
