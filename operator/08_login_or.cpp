/*
* Created by huzejun on 2022/10/18 2:01
*/
#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 10;

    cout << (a || b) << endl;

    a = 0;
    b = 10;

    cout << (a || b) << endl;

    a = 0;
    b = 0;

    cout << (a || b) << endl;

    //逻辑或：同假为假，其余为真

    system("pause");

    return 0;

}