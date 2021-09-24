#include <iostream>
#include "../pointh/swap.h"
using namespace std;

//结构体就是自定义的一种数据类型，感觉类似javabean
struct Student {
    string name;
    int age;
    int score;
};

int main_struct() {
    Student array[] = {
            {"张三", 12, 100},
            {"王五", 11, 98}
    };
    int length = sizeof(array) / sizeof(array[0]);
    cout << length << endl;
    for (int i = 0; i <length; ++i) {
        Student student = array[i];
        cout <<"学生分数：" << student.score <<"，student：" << &student << endl;
    }

    return 0;
}
