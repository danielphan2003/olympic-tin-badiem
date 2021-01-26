#include <iostream>

using namespace std;

int a[1000];

int main()
{
    int n, m, x, y, z, q, Start, End;
    z = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        a[i] = z;
    }
    // thuc hien m phep truy van
    cin >> m;
    // thuc hien thao tac cua m phep truy van
    for (int k = 1; k <= m; ++k)
    {
        cin >> Start >> End >> z;
        for (Start; Start <= End; ++Start)
        {
            a[Start] += z;
        }
    }
    // in ra ket qua cua mang sau m phep truy van
    for (int i = 1; i <= n; ++i)
    {
        cout << a[i] << ' ';
    }
}