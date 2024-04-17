#include <iostream>
#include <vector>
using namespace std;

void MoveZeros(vector<int> &arr)
{
    int n = arr.size();
    vector<int> numbers;
    int count = 0;
    

    for(int i=0;i<n;i++){
            if(arr[i]!=0) numbers.push_back(i);
        }
        for(int i=0;i<numbers.size();i++){
            arr[i]=arr[numbers[i]];
        }
        for(int i=numbers.size();i<n;i++){
            arr[i]=0;
        }

}
int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << "Array before moving zeros: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    MoveZeros(arr);
    cout << "\nArray after moving zeros: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}