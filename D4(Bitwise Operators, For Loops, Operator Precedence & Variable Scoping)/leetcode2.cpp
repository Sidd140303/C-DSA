#include <iostream>
using namespace std;

int countSetBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of set bits in " << n << " are: " << countSetBits(n) << endl;
    return 0;
}
