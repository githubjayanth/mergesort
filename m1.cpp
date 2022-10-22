#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int size, int lb, int mid, int up)
{
    int i = lb;
    int j = mid + 1;
    int k = lb;
    int b[size];
    while (i <= mid && j <= up)
    {
        /* code */
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= up)
        {
            b[k] = a[j];
        }
        j++;
        k++;
    }
    else
    {
        while (j > up)
        {
            while (i <= mid)
            {
                b[k] = a[i];
                i++;
                k++;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        a[i] = b[i];
    }
}
void mergesort(int a[], int size, int lb, int up)
{
    if (lb < up)
    {
        int mid = (lb + up) / 2;
        mergesort(a, size, lb, mid);
        mergesort(a, size, mid + 1, up);
        merge(a, size, lb, mid, up);
    }
}
int main()
{
    int a[] = {45, 8, 5, 76, 9};
    mergesort(a, 5, 0, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}