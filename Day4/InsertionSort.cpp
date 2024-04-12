#include<iostream>
using namespace std;
void InsertionSort(int n,int arr[])
{
    // for (int i = 0; i <n; i++)
    // {
    //     int temp = arr[i];int j=i-1;
    //     for(;j>=0;j--)
    //     {
    //         if(arr[j]>temp)
    //         {
    //             arr[j+1]= arr[j];
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     arr[j+1] = temp;
    // }
    int i=0;
    while(i<n)
    {
        int temp = arr[i];
        int j=i-1;
        while(j>=0)
        {
            if(arr[j]>temp)
            {
                arr[j+1]= arr[j];
            }
            else{
                break;
            }
            j--;
        }
        i++;
        arr[j+1]=temp;
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
    InsertionSort(n,arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i] << " ";
    }
    return 0;
}