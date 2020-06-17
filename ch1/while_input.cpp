#include <iostream>

int main()
{
    int sum = 0, value = 0;
    // 当input stream作为判断条件的时候，效果是检测流的状态，如果输入未遇到错误
    // 就检测成功，如果输入是eof或者不是一个整数，就会检测不成功而跳出循环。
    // Note: 在windows上输入eof是ctrl+z然后回车，在UNIX上是ctrl+D
    while (std::cin >> value)
    {
        sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}