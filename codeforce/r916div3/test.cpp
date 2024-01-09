#include <iostream>
#include<bits/stdc++.h>
using namespace std;

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