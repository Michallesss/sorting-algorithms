#include <iostream>

#include "bubblesort.cpp"
#include "quicksort.cpp"
#include "mergesort.cpp"
#include "selectionsort.cpp"

using namespace std;

int tab[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
int tabsize = sizeof(tab)/sizeof(tab[0]);

void coutarray(int arr[], int arrsize);

int main() {
    //dodać podawanie zawartości tablicy

    cout <<"1.Bubble sort\n 2.Merfe sort\n 3.Selection sort\n 4.Quick sort" <<endl <<"Option: ";
    int option;
    cin >>option;
    switch(option) {
        case 1:
            bubblesort(tab, tabsize);
            coutarray(tab, tabsize);
            break;
        case 2:
            mergesort(tab, tabsize);
            coutarray(tab, tabsize);
            break;
        case 3:
            selectionsort(tab, tabsize);
            coutarray(tab, tabsize);
            break;
        case 4:
            quicksort(tab, 0, tabsize-1);
            coutarray(tab, tabsize);
            break;
        default:
            cout<<"That option doesn't exist";
    }

    return 0;
}

void coutarray(int arr[], int arrsize) {
    for(int i=0; i<arrsize; i++) {
        cout <<tab[i];
    }
}