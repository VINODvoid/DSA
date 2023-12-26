#include<iostream>
using namespace std;
void UniqueElement(int arr [] , int n)
{
//     for(int i =0 ; i < n ; i++)
//     {
//         int j;
//         for (j = 0; j < n; j++)
//         {
//             if (i != j && arr[i] == arr[j])    //! Naive Solution : It may take more time to execute
//             {
//                 break;
//             }
            
//         }
//         if (j == n)
//         {
//             cout << "The unique element is: " << arr[i] << endl;
//         }
//     }
    int ans =0;
    for (int  i = 0; i < n; i++)
    {
        ans = ans^arr[i]; //? " ^ " is the XOR operator which gives 0 if both the bits are same and 1 if both the bits are different
    }
    cout << "The unique element is: " << ans << endl;
    
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
    UniqueElement(arr, n);
    return 0;

}