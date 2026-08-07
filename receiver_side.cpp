#include <iostream>
using namespace std;

int main()
{
    char a[50], b[50];
    int n, i = 0, j = 0, count = 0;

    cout << "Enter the size of stuffed data: ";
    cin >> n;
    cout << "Enter the stuffed data (0 & 1): ";
    cin >> a;

    while (i < n)
    {
        b[j] = a[i];

        if (a[i] == '1')
            count++;
        else
            count = 0;

        if (count == 5)
        {
            i++;          // Skip stuffed 0
            count = 0;
        }

        i++;
        j++;
    }

    b[j] = '\0';
    cout << "Frame after Bit De-stuffing: " << b;
    return 0;
}