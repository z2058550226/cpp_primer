#include <iostream>
using namespace std;
int main(){
    int i=1, &r1=i;
    double d=3.14, &r2=d;
    r2 = r1;
    cout << r2 << endl;
    r2=3.141;
    i=r2;
    cout << i << endl;
    return 0;
}