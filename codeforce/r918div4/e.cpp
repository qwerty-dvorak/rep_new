#include <bits/stdc++.h>
using namespace std; 

void solve() {
    int n; cin >> n;
    long long v[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    map<long long, long long> diff;
    long long even_sum = 0, odd_sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i & 1) {
            odd_sum += v[i];
        } else even_sum += v[i];
        long long curr_diff = odd_sum - even_sum;
        if (curr_diff == 0 || diff.find(curr_diff) != diff.end()) {
            cout << "YES" << endl;
            return;
        }
        diff[curr_diff]++;
    }
    cout << "NO" << endl;
}

void solvee()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> v[i];
        if(i & 1)
            v[i] = -v[i];
    }
    long long sum = 0;
    map<long long, bool> mp;
    mp[0] = 1;
    for (int i = 1; i <= n; i++){
        sum += v[i];
        if(mp.find(sum) != mp.end()){
            cout << "YES" << endl;
            return;
        }
        mp[sum] = 1;
    }
    cout << "NO" << endl;
    return;
}

int solveee() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
        if (i & 1) {
            a[i] = -a[i];
        }
    }
    map<long long, int> mp;
    long long s = 0;
    mp[0] = 1;
    for (int i=0; i<n; i++) {
        s += a[i];
        if (mp[s]) {
            return 1;
        } else {
            mp[s] = 1;
        }
    }
    return 0;
}

void solveeee() {
    int n;
    std::cin >> n;
    
    std::vector<long long> s(n + 1);
    std::set<long long> set{0LL};
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        s[i + 1] = s[i] + (i % 2 ? 1 : -1) * a;
        set.insert(s[i + 1]);
    }
    if (set.size() != n + 1) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}
 
void esolve()
{
    long long n;
    cin >> n;
    set<long long>s{0};
    long long cur = 0;
    for(int i=0; i<n; i++)
    {
        long long tmp;
        cin >> tmp;
        cur = cur + (i % 2 ? -1 : 1) * tmp;
        s.insert(cur);
    }
    if(s.size() != n + 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n=3;
        long long s=0;
        //cin >> n; 
        long long glass[n];
        bool flag=false;
        int k;
        for(int i=0; i<n; i++){
            cin >> k;
            if(i%2==0){
                s+=k;
            }else{
                s-=k;
            }
            glass[i]=s;
        }
        sort(glass, glass+n);
        for(int a=0; a<n-1; a++){
            if (glass[a]==glass[a+1] || glass[a]==0){
                flag=true;
                break;
            }
        }
        if(flag==true){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}