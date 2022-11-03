/*
* Created by huzejun on 2022/11/2 19:41
*/
#include <iostream>
using namespace std;
#include <string>

//定义学生结构体
struct student
{
    string name;    //姓名
    int age;        //年龄
    int score;      //分数
};

//定义教师结构体
struct teacher
{
    int id;     //教师编号
    string name;    //教师姓名
    int age;        //老师的年龄
    struct student stu; //辅导的学生
};

int main() {

    //结构体嵌套结构体
    //创建老师
    teacher t;
    t.id = 10000;
    t.name = "老王";
    t.age = 50;
    t.stu.name = "小王";
    t.stu.age = 20;
    t.stu.score = 60;

    cout << "老师姓名： " << t.name << " 老师红编号：" << t.id << " 老师的年龄： " << t.age
        << " 老师辅导的学生姓名：" << t.stu.name << " 学生的年龄：" << t.stu.age
        << " 学生的考试分数：" << t.stu.score << endl;

    system("pause");

    return 0;
}