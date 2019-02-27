//selection sort

#include <iomanip>
#include <iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
    int min;
    for(int i=0; i<n; i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j; 
        }
        int tmp=arr[i];
        arr[i]=arr[min];
        arr[min]=tmp;
    }
}

int main()
{
    int arr[]={3, 56, 21, 67, 209, 1};
    selectionSort(arr,6);
    for(int i=0; i<6;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}