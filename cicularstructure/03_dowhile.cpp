/*
* Created by huzejun on 2022/10/22 21:59
*/
#include <iostream>
using namespace std;

int main() {

    // do...while语句
    //在屏幕中输出 0 到 9 这10个数字

    int num = 0;

    do {
        cout << num << endl;
        num++;
    }
    while (num < 10);

/*    while (num < 10)
    {
        cout << num << endl;
        num++;
    }*/
    // do...while和while循环区别在于 do...while会先执行一次循环语句

    system("pause");

    return 0;

}