#include <iostream>

using namespace std;
int main()
{
    int a = -25602;
    unsigned int b = static_cast<unsigned int>(a);
    cout << b << endl;
    unsigned int c = static_cast<unsigned int>(-32);
    cout << c << endl;
    wchar_t d = -a;
    cout << d << endl;
    // char f = u8'A';
    // cout << f << endl;
    char16_t g = u'A';
    cout << g << endl;
    const char *s = u8"\t哈哈";
    cout << s << endl;
    cout << "Who goes with F\145rgus\12" << endl;
    return 0;
}