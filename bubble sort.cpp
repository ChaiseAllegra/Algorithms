#include <iomanip>
#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
            {
                int tmp =arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=tmp;
            }
}
void printArray(int arr[], int n)
{
    for(int i=0; i<n;i++)
        cout<<arr[i]<<endl;
}
int main()
{
    int arr[] = {5, 67, 98, 3, 200, 21};
    int n = sizeof(arr)/sizeof(arr[0]);//find the size of the array 
    sort(arr,n);
    cout<<"Sorted array"<<endl;
    printArray(arr,n);
    return 0;
}