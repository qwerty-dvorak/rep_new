#include <iostream>

using namespace std;

class test
{
    int a;
    static int b;
public:
    void setdata(void)
    {
        a = ++b;
    }
};