#include <stdio.h>

int issubtring(char *s,char *t){
    while(*s){
        char *p = s,*q = t;
        while(*p && *q && *p == *q){
            p++;
            q++;
        }
        if(!*q) return 1;
        s++;
    }
    return 0;
}

int main(){
    char s[50],t[50];
    gets(s);
    printf("%s\n",s);
    gets(t);
    printf("%s\n",t);
    printf("%d\n",issubtring(s,t));
    scanf("%s%s",s,t);
    printf("%d\n",issubtring(s,t));
    return 0;
}