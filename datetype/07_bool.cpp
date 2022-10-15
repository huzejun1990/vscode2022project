/*
* Created by huzejun on 2022/10/16 0:58
*/
#include <iostream>
using namespace std;

int main() {

    //1、创建bool数据类型
    bool flag = true;   // true 代表真
    cout << flag << endl;

    flag = false;   // false 代表假
    cout << flag << endl;

    //本质上 1代表真 0 代表假

    //2、查看bool类型所占内存空间

    cout << "bool类型所占内存空间： " << sizeof(bool) << endl;


    system("pause");

    return 0;
}