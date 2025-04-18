#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int k = 0, j = 0;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
        k += a[i];
        if (a[i] < a[i + 1])
        {
            a[i] = a[i + 1];
            int j = n * a[i];
        }
    }
    cout << abs(j - k) << endl;
}