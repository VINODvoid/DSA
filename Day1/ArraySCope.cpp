#include<iostream>
using namespace std;
void update(int a[], int n)
{
    cout << "Inside the function: " << endl;
    // * Updating the array elements.
    a[0] = 20;
    for (int i =0 ; i < n; i++)
    {
        cout << a[i] << " " ;
    }
    cout << endl;
    cout << "Going Back to main function: " << endl;
}
int main()
{
    int a[5] ={1,2,3,4,5};
    cout << "Inside the main function: " << endl;
    for (int  i = 0; i < 5; i++)
    {
        cout << a[i] << " " ;
    }
    cout << endl;
    update(a,5);
    for (int  i = 0; i < 5; i++)
    {
        cout << a[i] << " " ;
    }
    return 0;
} 