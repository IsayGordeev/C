#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;

int main() {
    string s, tmp;
    unordered_map<size_t, int> mmap;
    set<int> result;
    cin >> s;

    for (int l = 0, r = 9; r < s.size(); ++r, ++l) {
        tmp.clear();
        for (int i = l ; i <= r; ++i) {
            tmp += s[i];
        }
        size_t hhash = hash<string>{}(tmp);
        if (mmap.count(hhash)) {
            result.insert(mmap[hhash]);
        } else {
            mmap[hhash] = l;
        }
    }
    for (auto start_pos : result) {
        for (int i = 0; i < 10; ++i) {
            cout << s[start_pos + i];
        }
        cout << ' ';
    }
}