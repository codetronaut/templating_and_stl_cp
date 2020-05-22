//Playing with the letters of English alphabet.

#include<bits/stdc++.h> 
using namespace std; 

typedef long long int ll; 
 

void caseChange(){
    
    //uppercase to lower
    for (char ch = 'A'; ch <= 'Z'; ch++)
	cout << char(ch | ' '); // prints abcdefghijklmnopqrstuvwxyz
    
    cout<<endl;
    //lowercase character to upper
    for (char ch = 'a'; ch <= 'z'; ch++)
	cout << char(ch & '_'); // prints ABCDEFGHIJKLMNOPQRSTUVWXYZ
        
    
    cout<<endl;

    
    //invert alphabet's case.
    
    // Convert lowercase alphabet to uppercase
    for (char ch = 'a'; ch <= 'z'; ch++)
	cout << char(ch ^ ' '); // prints ABCDEFGHIJKLMNOPQRSTUVWXYZ

    cout<<endl;

    // Convert uppercase alphabet to lowercase
    for (char ch = 'A'; ch <= 'Z'; ch++)
	cout << char(ch ^ ' '); // prints abcdefghijklmnopqrstuvwxyz

    
    
    
}

int main(void){
    
    caseChange();
    
    
    return 0;
}
