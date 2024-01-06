#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int,int>pii;
 
const int N=2e5+10;
int a[N],b[N];
 
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b,c;
		cin>>a>>b>>c;
		map<char,int>m;
		for(int i=0;i<3;i++) 
		m[a[i]]++;
		for(int i=0;i<3;i++) 
		m[b[i]]++;
		for(int i=0;i<3;i++) 
		m[c[i]]++;
		if(m['B']==2) cout<<"B"<<endl;
		else if(m['C']==2 ) cout<<"C"<<endl;
		else cout<<"A"<<endl;
  	}
}

/*
// @Rakibul-Islam :)
 
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
 
#define dbg(a) cerr<<__LINE__<<": "<<#a<<" = "<<a<<'\n'
 
void solve(){
    int n = 3;
    string s[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
 
    for(int i = 0; i < n; i++)if(count(s[i].begin(), s[i].end(), '?')){
        int pos = 0;
        set<char> st;
        for(int j = 0; j < n; j++){
            if(s[i][j] == '?'){
                pos = j;
            }
            st.insert(s[i][j]);
        }
        for(int j = 0; j < n; j++){
            st.insert(s[j][pos]);
        }
 
        for(char ch:{'A', 'B', 'C'})if(!st.count(ch)){
            cout << ch << "\n";
            return;
        }
    }
}   
 
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    cin>>t;
 
    for(int i=1; i<=t; i++){
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
#define int ll
 
 
void solve(){
   
    map<char,int> q;
    q['A']=0;
    q['B']=0;
    q['C']=0;
    for (int i=0;i<3;++i){
        string s;
        cin>>s;
        for (auto c:s){
            if (c!='?'){
                q[c]++;
            }
        }
    }
 
    for (auto c:q){
        if (c.second!=3){
            cout<<c.first<<endl;
            return;
        }
    }
    
}
signed main(){
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}

#include <bits/stdc++.h>
void run_case(){
    std::unordered_map<char,int> mp;
    char a;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cin>>a;
            mp[a]++;
        }
    }
    if(mp['A']==2){
        std::cout<<"A\n";
    }
    if(mp['B']==2){
        std::cout<<"B\n";
    }
    if(mp['C']==2){
        std::cout<<"C\n";
    }
};
int main() {
    int t;
    std::cin>>t;
    while(t--){
        run_case();
    }
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
        map<char, int> m;
        for(int i = 0; i < 9; i++) {
            char x;
            cin >> x;
            if(x != '?')
                m[x]++;
        }
 
        for(auto i : m) {
            if(i.second == 2) {
                cout << i.first << endl;
            }
        }
    }
 
}

*/