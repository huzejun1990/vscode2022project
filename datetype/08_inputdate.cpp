/*
* Created by huzejun on 2022/10/16 1:05
*/
#include <iostream>
using namespace std;
#include <string> // string头文件

int main() {

    //1、整型
/*    int a = 0;
    cout << "请给整型变量a赋值：" << endl;
    cin >> a;
    cout << "整型变量 a = " << a << endl;*/

    //2、浮点型
/*    float f = 3.14f;
    cout << "请给浮点型变量f赋值：" << endl;
    cin >> f;
    cout << "浮点型变量 f = " << f << endl;*/

    //3、字符型
/*    char ch = 'a';
    cout << "请给字符型变量ch赋值" << endl;
    cin >> ch;
    cout << "字符型变量ch = " << ch << endl;*/

    //4、字符串型
/*    string str = "hello";
    cout << "请给字符串 str赋值" << endl;
    cin >> str;
    cout << "字符串str = " << str << endl;*/

    //5、布尔型
    bool flag = false;
    cout << "请给布尔类型 flag 赋值" << endl;
    cin >> flag; // bool类型，只要是非0的值都代表真
    cout << "布尔类型flag = " << flag << endl;

    system("pause");

    return 0;
}