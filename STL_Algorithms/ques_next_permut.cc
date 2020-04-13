/*
NextPermutationProblem(Have to do it w/ and w/o STL)
Given an array Arr[], Treat each element of the array as the digit and whole array as the number. Implement the next permutation, which rearranges numbers into the numerically next greater permutation of numbers.

If such arrangement is not possible, it must be rearranged as the lowest possible order ie, sorted in an ascending order.

Note: The replacement must be in-place, do not allocate extra memory.

Input Format
The First Line contains the Number of test cases T.
Next Line contains an Integer N, number of digits of the number.
Next Line contains N-space separated integers which are elements of the array 'Arr'.

Constraints
1 <= T <= 100
1 <= N <= 1000
0 <= Ai <= 9

Output Format
Print the Next Permutation for each number separated by a new Line.

Sample Input
2
3
1 2 3 
3
3 2 1

Sample Output
1 3 2
1 2 3

Explanation
Possible permutations for {1,2,3} are {1,2,3} , {1,3,2} , {2,1,3} , {2,3,1}, {3,1,2} and {3,2,1}. {1,3,2} is the immediate next permutation after {1,2,3}.
For the second testcase , {3,2,1} is the last configuration so we print the first permutation as its next permutation.
*/

//Solution:

#include<iostream>
#define fast_code std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);


#include<iostream>
#include<algorithm>
using namespace std;

void next_permutation(vector<int>&arr, int length)
{
    /*Mera intuition kya hai?
    e.g {0,1,2,5,3,3,0} iska just next wala nikalna hai 
    1) pehle increasing suffix sequence find karo then jha par break ho i.e chota value dikhe use pivot le lo --->{0,1,2(pivot), 5, 3, 3,0}
    2) pivot ka jsut greater find karo and logic will be: (i-1) ko compare karo (length-1) se jah bhide kar dalo swap.---->{0,1,3,5,3,2,0}
    yha arr[i-1] = 2 rhega and arr[i]=5.
    3) then ab jo sequence bacha h use reverse kar dalo---> {0,1,3,0,2,3,5}
    */
    
    //finding increasing suffix
    int i = length - 1;
    while(i > 0 && arr[i-1] >= arr[i])
        --i;

    if(i==0)
    {
        sort(arr.begin(),arr.end());
        return;
    }

    //fimding pivot

    int j = length - 1;

    while(arr[j] <= arr[i-1])
    {
        --j;
    }        
        
// j++;
    int temp = arr[i-1];
    arr[i-1] = arr[j];
    arr[j] = temp;

    // cout<<i-1<<" "<<j<<endl;

// for(int i=0; i<length; i++)
// {
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
    //done with pivoting
    j = length -1; //again initializing "j" as lenght - 1 to update it's value
    while(i<j)
    {
        int temp1 = arr[i];
        arr[i] = arr[j];
        arr[j] = temp1;

        ++i;
        --j;
    }       

}

int main(void) {
    int choice, n;
    cin>>choice;
    
    while(choice--)
    {
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; ++i)
        {
            cin>>arr[i];
        }
        next_permutation(arr,n);
        for(int i:arr)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}




