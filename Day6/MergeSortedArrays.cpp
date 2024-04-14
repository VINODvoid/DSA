#include <iostream>
#include <vector>
using namespace std;
vector <int> MergeSortedArrays(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3)
{
    int i=0,j=0;
    int arr_size = arr1.size() ;
    int arr2_size = arr2.size();
    while(i<arr_size && j<arr2_size)
    {
        if(arr1[i]<arr2[j])
        {
            arr3.push_back(arr1[i]);
            i++;
        }
        else
        {
            arr3.push_back(arr2[j]);
            j++;
        
        }
    }
    while (i < arr_size)
    {
        arr3.push_back(arr1[i]);
        i++;
    }

    while (j < arr2_size)
    {
        arr3.push_back(arr2[j]);
        j++;
    }
    
    
    return arr3;
}
int main()
{
    vector<int> arr1 = {1, 3};
    vector<int> arr2 = {2, 4, 6, 8, 10};
    vector<int> arr3;
    MergeSortedArrays(arr1, arr2, arr3);
    cout << "Merged Array: ";
    for (int i = 0; i < arr3.size(); i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;

}