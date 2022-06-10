//quick sort
#include <iostream>

using namespace std;

void quicksort(int tab[], int left, int right) {
    int v=tab[(left+right)/2];
    int i,j,x;
    i=left; 
    j=right;
    do {
        while(tab[i]<v) i++;
        while(tab[j]>v) j--;
        if(i<=j) {
            x=tab[i];
            tab[i]=tab[j];
            tab[j]=x;
            i++;
            j--;
        }
    } while(i<=j);
    if(j>left) quicksort(tab, left, j);
    if(i<right) quicksort(tab, i, right);
}