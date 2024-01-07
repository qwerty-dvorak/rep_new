#include <bits/stdc++.h>
using namespace std; 
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