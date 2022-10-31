/*
* Created by huzejun on 2022/10/30 20:23
*/
#include <iostream>
using namespace std;

int main() {

    //空指针
    //1、空指针用于给指针变量进行初始化
    int * p = NULL;

    //2、空指针是不可以进行文章的
    // 0 ~ 255 之间的内存编号是系统占用的，因此不可以访问
    *p = 100;

    system("pause");

    return 0;
}