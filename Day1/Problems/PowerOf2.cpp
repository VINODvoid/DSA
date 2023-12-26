#include<iostream>
using namespace std;
// int CountBits(int num)
// {   
//     int count =0;
//     if(num == 0)
//     return 0;
//     while(num >0)
    // {                               //! Naive Approach : Where we are checking each and every bit of a number.
//         count += num&1;
//         num >>=1;
//     }
//     return count;
// }
bool CountBitsFast(int num)
{
    // int count =0;
    // while(num >0)
    // {
    //     num = num & (num-1);  //! In this approach we are compasring num and num-1 till it is num is equal to 0
    //     count++;
    // }
    // return count;
    return (num > 0) && ((num & (num-1)) == 0);
    
}
int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    if (CountBitsFast(num))
    {
        cout << "The number is power of 2" << endl;
    }
    else
    {
        cout << "The number is not power of 2" << endl;
    }
    return 0;
}