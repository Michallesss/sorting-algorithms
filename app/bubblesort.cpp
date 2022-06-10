//bubble sort
#include <iostream>

using namespace std;

void bubblesort(int tab[], int size) {
    for(int j=0; j<size-1; j++) {
        for(int i=0; i<size-1; i++) {
            if(tab[i]>tab[i+1]) {
                int x=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=x;
            }
        }
    }
}