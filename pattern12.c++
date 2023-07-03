#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k, l, t = 0;
    cin >> n;
    int van;
    if (n % 2 != 0)
    {
        van = (n / 2) + 1;
    }
    else
    {
        van = n / 2;
    }
    int sus = van;
    for (i = 0; i < n; i++)
    {
        t = 0;
        if (i < van)
        {
            for (j = 0; j <= i; j++)
            {
                cout << van - j;
                t++;
            }
            for (k = 0; k < n - 2 * (i + 1); k++)
            {
                cout << sus;
                t++;
            }
            for (l = t; l < n; l++)
            {
                cout << van - (n - (l + 1));
            }
            cout << "\n";
            sus--;
        }
        else
        {
            sus++;
            t++;
            for (j = 0; j < n - i; j++)
            {
                cout << van - j;
                t++;
            }
            for (k = 0; k < (2 * (i - n / 2)); k++)
            {
                if (n % 2 != 0)
                {
                    cout << sus + 1;
                }
                if (n % 2 == 0)
                {
                    cout << sus;
                }
                t++;
            }
            for (l = t; l <= n; l++)
            {
                cout << van - (n - l);
            }
            cout << "\n";
        }
    }
    return 0;
}
