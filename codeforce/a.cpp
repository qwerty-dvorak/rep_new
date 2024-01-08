#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int a;
        cin>>a;
        string str[a];
        int alph[26];
        int r=0;
        for (auto i:str){
            alph[int(i)-97]++;
            if (alph[int(i)-97]==(int(i)-97)){
                r++;
            }
        }
    }
    return 0;
}