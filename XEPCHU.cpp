#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

string words[1000002];
int wordCount = -1, sentence_len = 0;

bool compare(string a, string b) {
    int min_len = min(a.length(), b.length());

    for (int i = 0; i < min_len; i++) {
        int 
            x = a.at(i), 
            y = b.at(i);

        if (x == y)
            continue;
        else
            return x < y;
    }
    return true;
}

int main() {
    freopen("XEPCHU.INP", "r", stdin);
    freopen("XEPCHU.OUT", "w", stdout);

    while ( !feof(stdin) ) {
        wordCount++;
        cin >> words[wordCount];
        sentence_len += words[wordCount].length();
    }
    sentence_len += wordCount;

    sort(words, words + wordCount + 1, compare);

    cout << wordCount + 1 << " " << sentence_len << endl;
    for (int i = 0; i <= wordCount; i++)
        cout << words[i] << " ";

    return 0;
}