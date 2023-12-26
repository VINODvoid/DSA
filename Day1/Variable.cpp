#include<iostream>
using namespace std;
void update_var(int n)
{
    n = 20;
    cout << "Inside the Function : " << endl;
    cout << "The value of n is : "<< n << endl;
}
int main()
{
    int n=10;
    update_var(n);
    cout << "Inside the main function: " << endl;
    cout << "The value of n is : "<<n << endl;
    return 0;
}