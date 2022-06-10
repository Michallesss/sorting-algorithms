#include <iostream>

#include "bubblesort.cpp"
#include "quicksort.cpp"
#include "mergesort.cpp"
#include "selectionsort.cpp"

using namespace std;

int tab[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
int tabsize = sizeof(tab)/sizeof(tab[0]);

int main() {
    //dodać podawanie zawartości tablicy

    cout <<"1.Bubble sort\n 2.Merfe sort\n 3.Selection sort\n 4.Quick sort" <<endl <<"Option: ";
    int option;
    cin >>option;
    switch(option) {
        case 1:
            bubblesort(tab, tabsize);
            break;
        case 2:
            mergesort(tab, tabsize);
            break;
        case 3:
            selectionsort(tab, tabsize);
            break;
        case 4:
            quicksort(tab, tabsize);
            break;
        default:
            cout<<"That option doesn't exist";
    }

    return 0;
}