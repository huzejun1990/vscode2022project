/*
* Created by huzejun on 2022/10/24 0:34
*/
#include <iostream>
using namespace std;
//#include <Integer>

int main() {

    //数组名用途
    //1、可以通过数组名统计整个数组占用内存大小
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "整个数组占用内存空间的大小: " << sizeof(arr) << endl;
    cout << "每个元素占用内存空间为： " << sizeof(arr[0]) << endl;
    cout << "数组中元素个数为： " << sizeof(arr) / sizeof(arr[0]) << endl;

    //2、可以通过数组名查看数组首地址
    cout << "数组的首地址为：" << arr << endl;
    cout << "数组的首地址为：" << (long long)arr << endl;
    // 从指针转换为较小类型“int”会丢失信息
   // cout << "数组的首地址为：" << (int)arr << endl; // 使用int转16进制在clion2022中会出现（丢失int精度异常））
    cout << "数组第一个元素的地址为：" << (long long)&arr[0] << endl;
    cout << "数组第二个元素的地址为：" << (long long)&arr[1] << endl;

    //数组名是一个常量，不可以进行赋值操作
//    arr = 100;

    system("pause");
    return 0;
}