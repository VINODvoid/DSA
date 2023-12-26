#include<iostream>
using namespace std;
int getPivot(int arr[], int  n)
{
    int s= 0, e= n-1;
    int mid = s+ (e-s)/2;
    while(s<e)
    {
    if(arr[mid] >=arr[0])
    {
        s= mid+1;
    }
    else{
        e= mid;
    }
    mid = s+ (e - s)/2;
    }
    return s;
}
int main()
{
    int arr[5] = {5,8,10 ,11,3};
    cout<<"Welcome to C++ Programming" << endl;
    cout <<"Pivot index is  " << getPivot(arr,5) << endl;
    return 0;
}
