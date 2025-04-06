#include <iostream>
using namespace std;

int main(){
    //整型
    //短整型
    short a = 10;
    //整型
    int b = 20;
    //长整型
    long c = 30;
    //长长整型
    long long d = 40;
    //就这四种

    cout << "Q:a+b+c+d*(b+c)=? " << "A:=" << a+b+c+d*(b+c) << endl;

    //下方是数据类型占用内存表示代码
    cout << "Short=" << sizeof(short) << endl;
    cout << "Int=" << sizeof(int) << endl;
    cout << "Long=" << sizeof(long) << endl;
    cout << "Long long=" << sizeof(long long) << endl;

    //浮点型
    //默认情况下，只显示出6个有效数字
    //单精度
    float f1 = 2.17f;
    //双精度
    double d1 = 2.17;

    cout << f1 << "float=" << sizeof(float) << endl;
    cout << d1 << "double=" << sizeof(double) << endl;

    //科学计数法
    float f2 = 3e2; //3*10^2
    float f3 = 3e-2; //3*0.1^2

    cout << "f2= " << f2 << endl;
    cout << "f3= " << f3 << endl;

    system("pause");
    return 1573;
}