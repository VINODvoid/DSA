#include<iostream>
using namespace std;
void SelectionSort(int n, int arr[])
{
    for (int i = 0; i < n; i++)
{
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if (arr[j]<arr[minIndex])
            {
                /* code */
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    
}
int main()
{
    int n, arr[10];
    cout<<"Enter the size of the array: ";
    cin >> n;
    cout<<"Enter the elemets of the array" << endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Unsorted Array is: " ;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i] << " ";
    }
    cout<<"\nSorted Array is: ";
    SelectionSort(n,arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i] << " ";
    }
    return 0;
}