#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    cout << "Enter the number :";
    cin >> num;
    int lastdig = 0;
    while (num != 0)
    {
        lastdig = num % 10 + lastdig;
        num = num / 10;
    }
    cout << "the sum is :" << lastdig;
    return 0;
}