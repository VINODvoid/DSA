#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) {
            return false;  // A book has more pages than the maximum allowed
        }

        if (pageSum + arr[i] > mid) {
            studentCount++;
            pageSum = 0;  // Reset pageSum for the new student
        }

        pageSum += arr[i];
    }

    return studentCount <= m;
}


int findPages(vector<int>& arr, int n, int m) {
    int s = INT_MAX; // Initialize with the maximum possible value
    int e = 0;       // Initialize with the minimum possible value

    // Calculate the search space
    for (int i = 0; i < n; i++) {
        s = min(s, arr[i]); // Update the minimum value
        e += arr[i];        // Update the maximum value
    }

    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n, m;
    cout << "enter the size of array" << endl;
    cin >> n ;
    cout<< "enter the number of elements" << endl;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Enter the number of students"<< endl;
    cin>>m;

    cout << findPages(arr, n, m) << endl;

    return 0;
}
