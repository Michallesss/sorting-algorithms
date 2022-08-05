//selection sort
#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionsort(int tab[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {
            if (tab[i] < tab[min_idx])
            min_idx = i;
        }
        swap(&tab[min_idx], &tab[step]);
    }
}
//https://www.programiz.com/dsa/selection-sort#:~:text=Selection%20sort%20is%20a%20sorting,beginning%20of%20the%20unsorted%20list.