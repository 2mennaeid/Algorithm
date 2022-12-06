#include <stdio.h>
#include <stdlib.h>
void _insertion(int arr[],int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[] = {6,8,3,4,2};
    _insertion(arr,5);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);

    }
}
