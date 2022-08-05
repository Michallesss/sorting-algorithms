//merge sort
#include <iostream>

using namespace std;

void merge(int tab[], int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (tab[i] < tab[j]) {
            c[k] = tab[i];
            k++;
            i++;
        }
        else  {
            c[k] = tab[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = tab[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = tab[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
        tab[i] = c[i];
    }
}

void mergesort(int tab[], int low, int high)
{
    int mid;
    if (low < high){
        mid=(low+high)/2;
        mergesort(tab,low,mid);
        mergesort(tab,mid+1,high);
        merge(tab,low,high,mid);
    }
}
//https://www.softwaretestinghelp.com/merge-sort/#:~:text=C%2B%2B%20Merge%20Sort%20Technique.,to%20form%20a%20unified%20solution.