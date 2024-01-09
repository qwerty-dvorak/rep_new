#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
      int n; cin >> n;
      vector<array<int, 3>> v(n);
      vector<int> mx1(3, 0), mx2(3, 0);
      for (int j = 0; j < 3; ++j) for (int i = 0; i < n; ++i) cin >> v[i][j];
      int ans = 0;
      for (int i = 0; i < n; ++i) {
            if (i >= 2) for (int j = 0; j < 3; ++j) ckmax(ans, mx2[j] + v[i][j]);
            if (i >= 1) {
                  for (int j = 0; j < 3; ++j) {
                        ckmax(mx2[j], mx1[(j+1)%3] + v[i][(j+2)%3]);
                        ckmax(mx2[j], mx1[(j+2)%3] + v[i][(j+1)%3]);
                  }
            }
            for (int j = 0; j < 3; ++j) ckmax(mx1[j], v[i][j]);
      }
      cout << ans << endl;
}

int main()
{
    int t;
    cin >> t ; 
    while(t--){
        long long n , k;
    	cin >> n >> k; 
    	long long a[n + 1] , b[n + 1] ;
    	for(int i = 0 ;i < n ; i++) 
			cin >> a[i + 1] ; 
    	for(int j = 0 ; j < n ;j++ ) 
			cin >> b[j + 1] ; 
    	for(int i = 1 ; i <= n ; i++) 
			a[i] += a[i - 1] ; 
    	for(int i = 1 ; i <= n ; i++) 
			b[i] = max(b[i] , b[i - 1]) ; 
    	long long ans = 0 ; 
    	for(int i = 1 ; i <= n ; i++){
    	    if(i > k) break; 
    	    ans = max(ans , a[i] + (k - i) * b[i]) ;
    	}
    	cout << ans <<"\n" ;  
    	}
    return 0;
} 