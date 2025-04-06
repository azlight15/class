#include <iostream>
#include <ctime>
using namespace std;

int a;//系统随机出数字
int b;//玩家输入的数字

int main(){
    cout << "在1-100之间猜一个数字" << endl;
    srand((unsigned int) time(NULL));

    a = rand()%100+1;

    while (a){
        cin >> b;
        if (b > a) {
            cout << "过大了" << endl;
        } else if (a > b) {
            cout << "过小了" << endl;
        } else {
            cout << "猜对了！" << endl;
            return 0;
        }
    }
}