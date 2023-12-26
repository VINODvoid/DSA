#include<iostream>
using namespace std;
void swapAlternative(int arr [] , int n)
{
    // int i = 0 , j =1 ;
    // while (i < n && j < n)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[j];        //! Naive Solution : It may not work for all the cases
    //     arr[j] = temp;
    //     i = i + 2;
    //     j = j + 2;
    // }
    for (int i = 0; i < n;  i+=2)
    {
        if (i+1 < n)
        {
            swap(arr[i] , arr[i+1]);
        }
        
        
    
    }
    cout << "The array after swapping is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    
}
int main()
{
    int arr[10] , n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swapAlternative(arr , n);
    return 0;
}



