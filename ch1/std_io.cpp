#include <iostream>

using namespace std;
int main()
{
    // 使用两次 << 运算符，<< 运算符的返回值是左值，所以连续使用两次就是两次cout，cin同理。
    // endl不仅起到一个 \n 的作用，还起到输出流的flush作用。将内存中的buffer刷到屏幕上并清空buffer
    cout << "Enter two numbers:" << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " and " << v2 << " is: " << v1 + v2 << endl;
    return 0;
}