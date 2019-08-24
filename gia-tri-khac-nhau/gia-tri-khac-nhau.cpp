#include <fstream>
#include <stack>

using namespace std;

stack<int> sortStack(stack<int> input) {
    stack<int> tmpStack;

    while(!input.empty()) {
        int tmp = input.top();
        input.pop();

        while(!tmpStack.empty() && tmpStack.top() < tmp) {
            input.push(tmpStack.top());
            tmpStack.pop();
        }

        tmpStack.push(tmp);
    }

    return tmpStack;
}

int main() {
    ifstream in("gia-tri-khac-nhau.inp");
    ofstream out("gia-tri-khac-nhau.out");
    
    int n;
    in >> n;

    stack<int> input;
    for (int i = 0; i < n; i++) {
        int tmp;
        in >> tmp;
        input.push(tmp);
    }
    
    int count = 0;
    stack<int> tmpStack = sortStack(input);
    while (!tmpStack.empty()) {
        int tmp = tmpStack.top();
        tmpStack.pop();

        while (!tmpStack.empty() && tmp == tmpStack.top()) {
            tmpStack.pop();
        }
        
        count++;
        if (!tmpStack.empty()) {
            tmpStack.pop();
            count++;
        }
    }
    
    out << count;
}