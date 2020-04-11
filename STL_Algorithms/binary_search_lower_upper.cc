//By Anmol
#include<iostream>
#include<algorithm>

int compare(int a, int b){ //comparator fn
    return a<=b;
}

//A function for find() Implementation or search in container
void find_stl()
{
    int arr[] = {1, 10, 11, 9, 100};
    int n = sizeof(arr) / sizeof(int);
    
    int key;
    std::cin>>key;
    auto it = find(arr, arr+n, key); // we used auto because we don't know the nature of return type or rather I am too lazy to write :P, but for clearance it will result address(i.e it).
    
    int index = it - arr; //Logic: in c++ if we subtract two pointers then we get the remaining boxes(obviously spaces for storage/no.of locations) between these addresses.
    
    if(index == n) std::cout<<key<<"Not present!";
    else std::cout<<"present @ index"<<index;

    
}



int main(void){
    int arr[] = {20, 30, 40, 40, 40, 50, 100, 1100};
    int n = sizeof(arr) / sizeof(int); //size of static array
    
    int key;
    std::cin>>key;
    
    bool present = binary_search(arr, arr+n, key)// time complexity: O(log(N))
    
    if(present)
    {
        std::cout<<"yupp!";
    }
    else std::cout<<"Nopee!";
    
    /*Lower Bound: First element which is greater-than or equals to the intentional value
    
    Upper Bound: First element which is greater-than the intentional value
    */

     //Implementation for the same
     
     auto lb = lower_bound(arr, arr+n, 40);//here 40 is the intentional value
     std::cout<<std::endl<<"Lower Bound of 40 is at Position: "<< (lb-arr);
     auto ub = upper_bound(arr, arr+n, 40); //taking both intentional values as equal bcoz, it will give deeper insight of the working of lb and ub
     std::cout<<std::endl<<"Upper Bound of 40 is at Position: "<< (lb-ub);
     
     //lb-arr --> it will give the position at which lower bound of intentioanl value present and same for the lb-ub(it will give upper bound).
     
     std::cout<<"Frequency of occurance of 40 will be: "<<(ub-lb);
    
}
