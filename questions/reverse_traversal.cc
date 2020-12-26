#include <iostream>
using namespace std;
# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type)) 

int findLastNum(int *a, int n)
{
    int i = n-1;
    int ret = -1;
    while (i>=0 && i < n) {
        if (a[i] != -1) {
            ret = i;
            break;
        }
        else --i;
    }
    return i;
}

int main() {
    int a[] = {2,4,1,0,9,3,7,6,66,-1,-1,-1,-1,-1};
//    int a[] = {2,4,1,0,3,NULL,NULL,NULL};    

    int n = (my_sizeof(a)/my_sizeof(a[0])) - 1;
    if  (n == NULL) return -1;
    int i = findLastNum(a, n); //index
    while (i>=0 && i < n) {
        if (a[i]%2 == 0) {
            a[n--] = a[i];
	    a[n--] = a[i];
        }
        else {
            a[n] = a[i];
            n--;
        }
        i--;
    }
    for (auto &itr: a) {
        cout<<itr<<",";
    }
}

