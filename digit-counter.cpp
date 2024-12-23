#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0,digit=0;

    cout << "Enter any number: ";
    cin >> num;

    for (; num > 0;)
    {
        sum += (num % 10);
        num /= 10;

        digit +=1;
    }
    // cout << "Sum of digits is " << sum<<endl;
    cout << "Sum of digits is " << digit;
}