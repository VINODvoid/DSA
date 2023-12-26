#include<iostream>
using namespace std;
void Reverse(int arr[], int n)
{
    int s = 0 , e = n-1, temp = 0;
    while(s <=e)
    { 
    //         temp = arr[s];
    //         arr[s]=arr[e];     //! Naive Approach and it can take more time and space
    //         arr[e]= temp;
    //         s +=1 ;
    //         e -=1;
        swap(arr[s], arr[e]);
        s++;
        e--;                   //! Efficient Approach
    }

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    Reverse(arr, 6);
}