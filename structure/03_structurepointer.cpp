/*
* Created by huzejun on 2022/11/2 19:19
*/
#include<iostream>
using namespace std;
#include <string>

//结构体指针
//定义学生结构体
struct student
{
    string name;    //姓名
    int age;        //年龄
    int score;      //分数
};


int main() {

    //1、创建学生结构体变量
    student s = {"张三",18,100};

    //2、通过指针指向结构本变量
    student * p = &s;

    //3、通过指针访问结构体变量中的数据
    //通过结构体指针 访问结构体中的属性，需要利用 ‘->’
    cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数: " << p->score << endl;

    system("pause");

    return 0;


}