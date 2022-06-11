//bubble sort
#include <iostream>

using namespace std;

void bubblesort(int tab[], int size) {
    int size2=size;
    for(int j=0; j<size-1; j++) {
        for(int i=0; i<size2-1; i++) {
            if(tab[i]>tab[i+1]) { //if left point > right point
                int x=tab[i];     //swaping..  
                tab[i]=tab[i+1];
                tab[i+1]=x;
            }
        }
    }
}