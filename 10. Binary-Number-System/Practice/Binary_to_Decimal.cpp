#include <iostream>
using namespace std;

void binaryToDecimal(int binaryNum)
{
    int n = binaryNum;
    int decimalNum = 0;
    int pow = 1; // 2^0 ,2^1, 2^2,

    while (n > 0)
    {
        int lastDig = n % 10;
        decimalNum += lastDig * pow;
        pow = pow * 2;
        n = n / 10;
    }
    cout << "Decimal of " << binaryNum << " is: " << decimalNum << endl;
}
int main()
{
    binaryToDecimal(10111); // Example usage
    return 0;
}