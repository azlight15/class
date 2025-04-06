#include "iostream"
#include<string>
using namespace std;

int main()
{
    //转义字符
    cout << "Hello World\nHello!" << endl;//换行
    cout << "\\" << endl;//代表一个“\”
    cout << "huh?\t\thello" << endl;//水平制表（一个\t占用8个字符。但如果\t之前有四个a，那么有四个空格。总言而之，\t=已写字符+空格=8）

    //字符串类型
    char a1[] = "hello";
    cout << a1 << endl;//C语言风格

    string a2 = "huh？";//string必须拥有string头文件（见第2行）
    cout << a2 << endl;//C++语言风格

    //布尔类型（逻辑判断）
    bool flag = true;
    cout << flag << endl;

    flag = false;
    cout << flag << endl;
    cout << "flag= " << sizeof(flag) << endl;

    //数据输入
    int a = 0;
    cout << "Please enter: " << endl;
    cin >> a ;
    cout << "a = " << a << endl;

    //浮点型输入
    double d = 0;
    cout << "Please enter: " << endl;
    cin >> d;
    cout << "d = " << d << endl;

    //布尔类型输入
    bool a4 = false;
    cout << "Please enter: " << endl;
    cin >> a4;
    cout << "a = " << a4 << endl;

    system("pause");
    return 0;
}