#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int a;
        string str;
        cin>>a>>str;
        int r=0;        
        int alph[26];
        for (int i=0;i!=26;i++){
            alph[i]=0;
        }
        for (int i=0;i!=a;i++){
            alph[str[i]-'A']++;
            if (alph[str[i]-'A']==str[i]-'A'+1){
                r++;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}