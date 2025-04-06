#include <iostream>//这是一个预处理指令，用于包含输入输出库
using namespace std;//简化代码：避免重复写 std::，使代码更简洁；提高可读性：对于简单的程序，代码看起来更清晰

int main()//是C++程序的入口点，也就是程序开始执行的地方。所有c++文件必须拥有main函数，否则无法运行
{
    cout << "Hello World!" << endl;//将字符串 "Hello World!" 输出到控制台

    system("pause");//暂停程序，等待用户按任意键
    return 0;//表示程序正常退出
}