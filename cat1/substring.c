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
    fgets(s,50,stdin);
    s[strcspn(s,"\n")]='\0';
    fgets(t,50,stdin);
    t[strcspn(t,"\n")]='\0';
    printf("%d\n",issubtring(s,t));
    return 0;
}