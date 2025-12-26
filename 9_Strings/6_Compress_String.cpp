#include <bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    int index = 0;

    for (int i = 0; i < n; i++) {
        char ch = chars[i];
        int count = 0;

        while (i < n && chars[i] == ch) {
            i++;
            count++;
        }

        chars[index++] = ch;

        if (count > 1) {
            string str = to_string(count);
            for (char dig : str) {
                chars[index++] = dig;
            }
        }

        i--;
    }
    return index;
}

int main() {
    string str1;
    cout<<"Enter a String: ";
    getline(cin, str1);

    vector<char> chars(str1.begin(), str1.end());
    int len = compress(chars);

    for (int i = 0; i < len; i++) {
        cout << chars[i];
    }
    return 0;
}
