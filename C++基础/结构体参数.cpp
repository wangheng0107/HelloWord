#include <iostream>

using namespace std;

//结构体就是自定义的一种数据类型
struct Student {
    string name;
    int age;
    int score;
};
struct Teacher {
    struct Student student;
    int id;
    string name;
};

void printTeacher(Teacher teacher) {

    cout << "p->student：" << teacher.student.name << "，p->name：" << teacher.name << endl;
}

//加入const，报错不允许修改内容，地址传递会改实参值，使用的是常量指针
void printTeacher(const Teacher *p) {
//    p->name = "wangYi";
    cout << "p->student：" << (p->student).name << "，p->name：" << p->name << endl;
}

int main_string() {
    struct Teacher teacher = {{"王五", 11, 98}, 11, "miss Li"};
    struct Teacher *p = &teacher;
    printTeacher(&teacher);
    printTeacher(teacher);


    return 0;
}
