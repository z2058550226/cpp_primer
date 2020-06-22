#include <iostream>

using namespace std;
string global_str;
int global_int;
int main()
{
    int local_int; // 未被初始化的内置类型，值是未定义的，输出也是随机的。有点坑。
    short local_short;
    string local_string;
    cout << global_str << endl;
    cout << global_int << endl;
    cout << local_int << endl;
    cout << local_short << endl;
    cout << local_string << endl;

    // double salary = wage = 9999.99;
    int a = 3.14;
    cout << a << endl;
    int _ = 3;
    int Double = 3;

    int i=100,sum=0;
    for (int i = 0; i < 10; i++)
    {
        sum+=i;
    }
    cout << i << " "<< sum << endl;

    return 0;
}