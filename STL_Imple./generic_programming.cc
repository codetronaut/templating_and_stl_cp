/*
    Author: Anmol
*/

//Note: Used to pass the custom parameters to the predefined functions.
#include<iostream>
#include<list>
#include<vector>
using namespace std;


/*
 *Iterators overview
-Input iterator(Read-only) -Output iterator(Write only e.g prints data on console)
-Forward iterator(input+output e.g singly linked list) 
-Bidirectional iterator(Forward iterator with bidirectional iterator) 
-Random access iterator(Bidirectional + can jump on any index)
*/

//Comaprator 
class template<class ForwardIterator, class T, class Compare>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, Compare cmp) 
{ 
    while(start != end) { 
        if(cmp(*start,key)) 
        { 
            return start; 
        }
        start++; 
        
    } return end;
    
} 
class Book { public: string name; int price; 
    Book(){} Book(string name, int price){ this->name; this->price; } }; 
    class BookCompare{ public: bool operator()(Book A, Book B){ if(A.name == B.name){ return true; } return false; } };
    
    
    int main(void) 
    { 
        Book b1("c++",100); Book b2("java",110); Book b3("Python",120); 
        // Book b4("Rust",130);
        // Book b5("Lisp",140);
        // Book b6("ObjectiveC",150); list<Book> l;
        // vector<Book> v; l.push_back(b1); l.push_back(b2); l.push_back(b3);
        // v.push_back(b4); 
        // v.push_back(b5);
        // v.push_back(b6); 
        //Book booktofind("c++", 110); Book booktofind("c",190);
        BookCompare cmp; auto it = search(l.begin(),l.end(),booktofind,cmp);
        //auto it1 = search(v.begin(),v.end(),booktofind,cmp);
        if(it != l.end())
        cout<<"Book Found in the Library\n"; 
        
        else cout<<"Not Found";
        
    } 
