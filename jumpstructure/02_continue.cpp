/*
* Created by huzejun on 2022/10/23 21:33
*/
#include <iostream>
using namespace std;

int main() {

    //continue语句


    for (int i = 0; i <= 100 ; ++i) {
        //如果是可数输出，偶数不输出
        if (i % 2 == 0) // 0 2 4 6 8
        {
            continue;   //可以筛选条件，执行到此就不再向下执行，执行下一次的循环
            //break 会退出循环，而continue不会
        }
        cout << i << endl;
    }

    system("pause");

    return 0;
}
