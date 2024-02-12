#include <stdio.h>
#include <string.h>

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

int ifsubstr(char s,char t){
    while(s && t && s == t){
        s++;
        t++;
    }
    return !t;
}

int main(){
    char s[50],t[50];
    fgets(s,50,stdin);
    s[strcspn(s,"\n")]='\0';
    fgets(t,50,stdin);
    t[strcspn(t,"\n")]='\0';
    printf("%d\n",issubtring(s,t));
    printf("%d\n",ifsubstr(s,t));
    return 0;
}