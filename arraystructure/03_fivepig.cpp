/*
* Created by huzejun on 2022/10/25 23:00
*/
#include <iostream>
using namespace std;

int main() {

    //1、创建5只小猪体重的数组
    int arr[5] = {300,350,500,400,250};
    //2、从数组中找到最大值
    int max = 0; //先认定一个最大值为0
    for (int i = 0; i < 5; ++i) {
//        cout << arr[i] << endl;
        //如果访问的数组中的元素比我认定的最大值，还要大，更新最大值
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "最重的小猪体重为：" << max << endl;
    
    //3、打印最大值

    system("pause");

    return 0;
}