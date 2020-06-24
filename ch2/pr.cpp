#include <iostream>

using namespace std;

int main()
{
    int i = 42;
    int *p;
    int *&r=p;
    
    r = &i;
    *r = 1;
    cout << i << endl;

    double dval = 3.14;
    const int &ri = dval;
    // wrong: 不能指定一个临时常量给一个引用(p55)
    // int &iri = dval;
    cout << ri << endl;
    return 0;
}
