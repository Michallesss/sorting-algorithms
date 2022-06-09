#include <iostream>

#include "bubblesort.cpp"
#include "quicksort.cpp"
#include "mergesort.cpp"
#include "selectionsort.cpp"

using namespace std;

int tab[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
int size = sizeof(tab)/sizeof(tab[0]);

int main() {

    bubblesort(tab, size);

    return 0;
}