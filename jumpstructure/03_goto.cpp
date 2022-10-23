/*
* Created by huzejun on 2022/10/23 22:08
*/
#include <iostream>
using namespace std;

int main() {

    //goto语句

    cout << "1、xxxx" << endl;

    cout << "2、xxxx" << endl;

    goto FLAG;

    cout << "3、xxxx" << endl;

    cout << "4、xxxx" << endl;

    FLAG:
    cout << "5、xxxx" << endl;

    system("pause");

    return 0;
}
