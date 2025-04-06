#include <iostream>
using namespace std;

//水仙花数
//达成条件：1^3+3^3+5^3=153
int main(){
    int i = 100;//输出三位数字
    do {
        int a;//个位
        int b;//十位
        int c;//百位

        cin >> a;
        cin >> b;
        cin >> c;

        a = i%100;
        b = (i/10)%10;
        c = i/100;
        
        if(a*a*a + b*b*b + c*c*c ==i){
            cout << i << endl;
        }
        i++;
    } while (i < 1000);
}