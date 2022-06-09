//bubble sort
#include <iostream>

using namespace std;

int tab[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

int bubblesort(int tab[]) {
    //here
}

int main() {
    for(int j=0; j<sizeof(tab)/sizeof(tab[0])-1; j++) {
        for(int i=0; i<sizeof(tab)/sizeof(tab[0])-1; i++) {
            if(tab[i]>tab[i+1]) {
                int x=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=x;
            }
        }
    }

    for(int i=0; i<10; i++) {
        cout <<tab[i];
    }

    return 0;
}