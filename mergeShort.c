#include <stdio.h>
#define size 10
int a[size];

int mergeSort(int, int);
int merge(int ,int,int );
int main()
{

    int i, j;
    printf("Enter the elements: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nPrint the unsorted array elements: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    mergeSort(0, 9);
    printf("\nSorted array :=");
    for (i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}

int mergeSort(int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
    }
    mergeSort(low, mid);
    mergeSort(mid + 1, high);
    printf("hii");
    merge(low, mid, high);
}

int merge(int low, int mid, int high)
{
    int b[size];
    int i = low;
    int k = low;
    int j = mid + 1;

    while ((i <= mid) && (j <= high))
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }

        else
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    if (i > mid)
    {
        while (j <= high)
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = a[i];
            k++;
            i++;
        }
    }
    printf("hii");
    for (i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}