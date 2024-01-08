#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int r=0;
    while (t--){
        int a;
        cin>>a;
        string str;
        cin>>str;        
        int alph[26];
        for (int i=0;i<26;i++){
            alph[i]=0;
        }
        for (int i=0;i<a;i++){
            alph[str[i]-'a']++;
            if (alph[str[i]-'a']==str[i]-'a'){
                r++;
            }
        }
    }
    cout<<r<<endl;
    return 0;
}