#include <iostream>
using namespace std;

void decimalToBinary(int decimalNum)
{
    int n = decimalNum;
    int pow = 1; // 10^0, 10^1, 10^2....
    int binaryNum = 0;

    while (n > 0)
    {
        int rem = n % 2;
        binaryNum += rem * pow;
        pow = pow * 10;
        n = n / 2;
    }
    cout << "Binary of " << decimalNum << " is: " << binaryNum << endl;
}
int main()
{
    decimalToBinary(5);
    return 0;
}