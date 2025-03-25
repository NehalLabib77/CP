#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int c = t % 10;
    t /= 10;

    int b = t % 10;
    t /= 10;

    int a = t % 10;

    int abc = 0;

    abc = abc + a;
    abc = abc * 10;
    abc = abc + b;
    abc = abc * 10;
    abc = abc + c;

    int bca = 0;
    bca = bca + b;
    bca = bca * 10;

    bca = bca + c;
    bca = bca * 10;
    bca = bca + a;

    int cab = 0;
    cab = cab + c;
    cab = cab * 10;
    cab = cab + a;
    cab = cab * 10;
    cab = cab + b;

    int res = abc + bca + cab;
    cout << res << endl;
}
// is this ok
