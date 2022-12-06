#include <iostream>

using namespace std;
void Merge(int arr[],int l,int mid,int r)
{
    int i,j,k;
    int n = mid-l+1;
    int n1= r-mid;
    int arr1[n];
    int arr2[n1];
    for(int i=0;i<n;i++)
    {
        arr1[i]=arr[l+i];
    }
    for(int j=0;j<n1;j++)
    {
        arr2[j]=arr[mid+1+j];

    }
    i=0;
    j=0;
    k=l;
    while(i<n && j<n1)
    {
        if(arr1[i]<=arr2[j])
        {
            arr[k]=arr1[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<n)
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n1)
    {
        arr[k]=arr2[j];
        j++;
        k++;
    }


}
void MergeSort(int arr[],int l,int r)
{
    int mid;
    if(l<r)
    {
       mid= l+(r-l)/2;
       MergeSort(arr,l,mid);
       MergeSort(arr,mid+1,r);
       Merge(arr,l,mid,r);
    }
}

int main()
{

    int size_arr;
    cout<<size_arr;
    int arr[size_arr];
    for(int i=0;i<size_arr;i++)
    {
        cout<<arr[i];
    }
    MergeSort(arr,0,size_arr-1);
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" "<<endl;  // print sorted array
    }
    return 0;
}
