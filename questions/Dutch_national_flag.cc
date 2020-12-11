/*
 Q.Move all zeroes(0) to thr beginning of an array.
 Dutch NAtional Flag
   ________________________________________
  | pivot < 4  | pivot = 4   | pivot > 4   |
  |____________|_____________|_____________|
  |
  |
  |

unsorted chalega!
*/

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

void swap(int &a, int &b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a[] = {1,4,5,4,4,6,2,3};
    int size = my_sizeof(a)/my_sizeof(a[0]);

    if (!size || !a)
        return -1;
        
    int lower_bound = 0;
    int higher_bound = size-1;
    int i = 0; int pivot = a[4];

    while (i <= higher_bound) {
        if (a[i] == pivot) {
            i++;
        }
        else if (a[i] > pivot) {
            swap(a[i], a[higher_bound]);
            higher_bound--;
        }
        else {
            swap(a[i], a[lower_bound]);
            lower_bound++;
            i++;
        }        
    }
    for (auto &itr: a) {
        cout<<itr<<",";
    }
}

