#include <iostream>
using namespace std;

typedef long long ll;
int main()
{
    ll x;
    cin >> x;
    while (x != 1)
    {
        cout << x << " ";
        if (x % 2 == 0)
        {
            x /= 2;
        }
        else
        {
            x = 3 * x + 1;
        }
    }
    cout << x << "\n";
}