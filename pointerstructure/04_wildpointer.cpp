/*
* Created by huzejun on 2022/10/30 20:39
*/
#include <iostream>
using namespace std;

int main() {

    //野指针
    //在程序中，尽量避免出现野指针
    int * p = (int *)0x1100;

    cout << *p << endl;

    system("pause");

    return 0;

}