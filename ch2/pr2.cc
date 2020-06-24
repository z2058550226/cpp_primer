#include <iostream>

using namespace std;

int main()
{
    int i = 42;
    int &r1 = i;
    const int &r2 = i;
    r1 = 44;
    // r2 = 0;
    cout << r2 << endl;

    const double pi = 3.14;
    // double *ptr = &pi;
    const double *cptr = &pi; // 指针常量(pointer to const)：
    // *cptr = 42;
    double dval = 3.14;
    cptr = &dval ;

    int errNumb = 0;
    int *const curErr = &errNumb; // 常量指针(const pointer)：无法改变指针中的地址

    
    return 0;
}