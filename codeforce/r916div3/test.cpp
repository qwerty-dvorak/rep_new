#include <bits/stdc++.h>
using namespace std;

istream& operator>>(istream& in, vector<T>& v) {
    for (auto& item : v) cin >> item;
    return in;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt[27];
    for (char ch : s) {
        cnt[ch - 'A']++;
    }

    int ans = 0;
    for (int i = 0; i < 26; i++) {
        ans += (cnt[i] >= (i + 1));
    }

    cout << ans;
}

signed main() {
    int t = 1;
    cin >> t;
    while (t--) solve(), cout << '\n';
}