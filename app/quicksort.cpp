//quick sort
#include <iostream>

using namespace std;

void quicksort(int tab[], int left, int right) {
    int v=tab[(left+right)/2]; //checking pivot(in this situation it's middle point)
    int i,j,x;  //defining variables
    i=left; //i==start point(left)
    j=right; //i==end point(right)
    do {
        while(tab[i]<v) {
            i++; 
        } 
        while(tab[j]>v) {
            j--;
        } 
        if(i<=j) {
            x=tab[i];   //swapping..
            tab[i]=tab[j];
            tab[j]=x;
            i++;
            j--;
        }
    } while(i<=j);
    if(j>left) {
        quicksort(tab, left, j);
    } 
    if(i<right) {
        quicksort(tab, i, right);
    }
}