#include <iostream>

int main(){
    int n;
    std:: cin >> n;
    while(n>0){
        int area;
        int a,b;
        std:: cin >> a >> b;
        int c,d;
        std:: cin >> c >> d;
        if (a!=c && b!=d){
            area = (a-c)*(b-d);
        }
        int e,f;
        std:: cin >> e >> f;
        if (a!=e && b!=f){
            area = (a-e)*(b-f);
        }
        int g,h;
        std:: cin >> g >> h;
        if (a!=g && b!=h){
            area = (a-g)*(b-h);
        }
        area=std::abs(area);
        std:: cout << area << std:: endl;
        n--;
    }
}