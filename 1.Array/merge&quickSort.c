#include <stdio.h>

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0; j = 0; k = l;
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if(l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1, t;
    for(int j = low; j <= high - 1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return(i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[100], size, ch , i;
    printf("Enter Elements Size  :  ");
    scanf("%d", &size);
    printf("Enter Array elements: ");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("1.Quick Sort\t2.Merge Sort\n");
    printf("Enter Your Choice  :  ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: quickSort(arr, 0, size - 1);
                print(arr,size);
                break;
        case 2: mergeSort(arr, 0, size - 1);
                print(arr,size);
                break;
        default:printf("Void Choice");
    }

return 0;
}
void print(int arr[100],int size)
{
    int i;
    printf("The sorted array is: ");
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


