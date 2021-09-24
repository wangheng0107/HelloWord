#include <iostream>
#include "../pointh/swap.h"

using namespace std;

//结构体就是自定义的一种数据类型
struct Student {
    string name;
    int age;
    int score;
};
struct Teacher{
    struct Student student;
    int id;
    string name;
};

int main_st() {
    struct Teacher teacher = {{"王五", 11, 98},11,"miss Li"};
    struct Teacher *p = &teacher;


    cout <<"p->student：" << (p->student).name <<"，p->name：" << p->name << endl;

    return 0;
}
