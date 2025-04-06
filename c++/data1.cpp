#include <iostream>
#include <string>//string头文件
using namespace std;

int a;//a表示数值
string b = "低头";//b表示字符
//数值可以不填写数值，但如果是字符的话，就要填东西了，不要问我为什么

int main(){
    cout << "Some easy math question\n"
    //第一题
         << "Question 1: 1+1=? " << endl;
    cout << "Please answer: " << endl;
    cin >> a;
    if(a==2){
        cout << "Yes,you are right!" << endl;
    }
    else{
        cout << "Oh,no! You are a wrong!" << endl;
    }

    //第二题
    cout << "Question 2: 5+2=?\n"
         << "Please answer: " << endl;
    cin >> a;
    if(a==7){
        cout << "Yes,you are right!" << endl;
    }
    else{
        cout << "Oh,no! You are a wrong!" << endl;
    }

    //第三题，这题是语文题
    cout << "Question 3: \n 举头望明月，__思故乡" << endl;
    cout << "Please enter white:" << endl;
    cin >> b;
    if(b=="低头"){
        cout << "Yes,you are right!" << endl;
    }
    else{
        cout << "Oh,no! You are a wrong!" << endl;
    }

    //第四题，这题是选择题
    cout << "Question 4: " << endl;
    cout << "下列各句中，没有语病的一句是（\t）" << endl;
    cout << "A．以1994年创办的“焦点访谈”、“新闻纵横”为代表，广播电视的舆论监督不仅成为我国扩大民主的一个标志，而且成为十一届三中全会以来新闻改革的一大突破。\n"
            "B．大力推广普通话数十年来已经取得很大成就，虽然还不到人人会讲的程度，但利用各种方言腔调的普通话来交流一般没有太大的障碍。\n"
            "C．“生存美学”的发展彻底改变了实践美学一枝独秀的格局，形成了多元并存、相互促进，为美学走向更高层次的综合创新奠定了雄厚的基础。\n"
            "D．生活方式，是人类行为活动的空间展现，包含人的学习生活、职业生活、家庭生、闲暇生活、社会交往等内容。从生活方式上，大体可以看出一个人的文化素养和思想品位。" << endl;
    cin >> b;
    cout << "您选择的是：\t（填大写字母）" << endl;
    if(b=="B"){
        cout << "回答正确" << endl;
        cout << "解析：" << endl;
        cout << "A：逻辑顺序颠倒，将“不仅”、“而且”两句的内容互换，才构成递进关系。\n"
                "C：成分残缺，在“相互促进”后面加上“的态势”。\n"
                "D：并列使用了有包含关系的概念，应去掉“学习生活”、“社会交往”。" << endl;
    }else{
        cout << "回答错误" << endl;
        cout << "请重新思考一下到底哪里错了" << endl;
    }

    //第五题，是小数点计算（实验在int属性下能否进行小数运算）
    cout << "Question 5: \n"
            "1.1*5.9=? " << endl;
    cout << "请输入您的答案" << endl;
    cin >> a;
    if(a==6.49){
        cout << "Yes,you are right!" << endl;
    }
    else{
        cout << "Oh,no! You are a wrong!" << endl;
    }

    cout << "End" << "\\" << endl;
    return 0;
}