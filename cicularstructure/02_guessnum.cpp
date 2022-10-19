/*
* Created by huzejun on 2022/10/20 1:04
*/
#include <iostream>
using namespace std;
//time系统时间头文件包含
#include <ctime>

int main() {

    //添加随机数种子，作用利用当前系统时间生成随机数，防止每次随机数都一样
    srand((unsigned int)time(NULL));

    //1、系统生成随机数
    int num = rand() % 100 + 1; // rand()%100 + 1 生成 0 + 1 ~ 99 + 1 随机数
//    cout << num << endl;

    //2、玩家进行猜测
    int val = 0; //玩家输入的数据

    while (1)
    {
        cin >> val;

        //3、判断玩家的猜测

        //猜错    提示猜的结果  过大或者过小 重新返回第2步
        if (val > num) {
            cout << "猜测过大" << endl;
        }
        else if (val < num) {
            cout << "猜测过小" << endl;
        }
        else
        {
            cout << "恭喜您猜对了" << endl;
            //猜对    退出游戏
            break;  //break在循环中，可以利用该关键字来退出当前循环
        }
    }



    //猜错    提示猜的结果  过大或者过小 重新返回第2步

    system("pause");

    return 0;
}