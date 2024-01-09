#include<iostream>

using namespace std;
int cnt[26];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n >> s;
		for (int i = 0; i != 26; ++i)
			cnt[i] = 0;
		int ans = 0;
		for (int i = 0; i != n; ++i) {
			++cnt[s[i] - 'A'];
			if (cnt[s[i] - 'A'] == s[i] - 'A' + 1)
				++ans;
		}
		cout << ans << '\n';
	}
}