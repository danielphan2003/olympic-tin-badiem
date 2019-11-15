#include <iostream>
#include <vector>

using namespace std;

int get_bit(int pos, int number) {
    return number & (1 << pos);
}

int get_msb_pos(int number) {

    int get_msb_pos = 1;
    
    while (number >= 0) {
        get_msb_pos++;
        number >> 1;
    }

    return get_msb_pos;
}

// 0 0 1 0 0 0 1 0
// 1 1 0 1 1 1 1 0
// 0 0 0 0 0 0 1 0

int list_sum_xor(vector<int> x) {
    int sum_xor = 0;

    for (int i = 1; i <= x.size() - 1; i++) {
        sum_xor ^= x[i];
    }

    return sum_xor;
}

void split_xor(vector<int> x, int pos) {
    int a = 0, b = 0;

    for (int i = 1; i <= x.size() - 1; i++) {

        if (get_bit(pos, x[i]) != 0) {
            a ^= x[i];
        }
        else {
            b ^= x[i];
        }

    }

    cout << a << " " << b;
}

int main() {
    freopen("double_unique.inp", "r", stdin);

    int n;
    cin >> n;

    vector<int> list(n+1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> list[i];
    }

    int sum_xor = list_sum_xor(list);

    int msb = get_msb_pos(sum_xor);
    cout << msb << "\n";
    return 0;
    split_xor(list, msb);
    
    return 0;
}