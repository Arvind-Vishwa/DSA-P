// print Digit
// i/p --> 389   o/p --> 3,8,9

#include <iostream>
using namespace std;

void printDigit(int num)
{
    if (num == 0)
    {
        return;
    }
    int no = num % 10;

    printDigit(num / 10);

    cout << no << " ";
}
int main()
{
    int num = 389;
    printDigit(num);
}