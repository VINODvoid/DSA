// // this program is for higher data structures
#include <iostream>
#include <unordered_map>

using namespace std;

bool UniqueOccurence(int arr[], int n)
{
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    unordered_map<int, int> uniqueFreq;
    for (auto it = freq.begin(); it != freq.end(); it++)
    {
        if (uniqueFreq.find(it->second) != uniqueFreq.end())
        {
            return false;
        }
        uniqueFreq[it->second] = 1;
    }
    return true;
}

int main()
{
    int arr[10], n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (UniqueOccurence(arr, n))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}