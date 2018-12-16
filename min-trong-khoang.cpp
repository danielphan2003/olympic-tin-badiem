#include <fstream>
#include <queue>

using namespace std;

int main() {
    int n, k;
    ifstream in("min-trong-khoang.inp");
    ofstream out("min-trong-khoang.out");

    int input[1000010];
    deque<int> tmpStack;
    in >> n >> k;
    for (int i = 0; i < n ; i++) {
        in >> input[i];
    }

    for (int i = 0; i < n; i++) {
        tmpStack.push_back(i);
        if (i-k+1 > tmpStack.front() || i-tmpStack.front()+1 <= k) {

            tmpStack.push_back(i+1);

            if (input[tmpStack.front()] < input[tmpStack.back()]) {
                tmpStack.pop_back();
            }

            if (input[tmpStack.front()] > input[tmpStack.back()]) 
                tmpStack.pop_front();

        }
        else {
            out << tmpStack.front();
            tmpStack.pop_front();
        }
    }

}