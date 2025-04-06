#include <iostream>
using namespace std;

int main(){
    //字符型
    //创建变量方式
    char a = 'a';
    cout << a << endl;

    //查询占用内存大小
    cout << "char= " << sizeof(char) << endl;

    //常见错误
    //char a = "b"; 必须用单引号
    //char a = 'abc'; 单引号里面必须是一个字符

    //对应ASCII编码
    cout << (int)a << endl;

    system("pause");
    return 0;
}