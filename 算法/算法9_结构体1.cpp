#include <iostream>
#include "../pointh/swap.h"

using namespace std;

//结构体就是自定义的一种数据类型
struct Student {
    string name;
    int score;
};

struct Teacher{
    struct Student arr[5];
    string name;
};

int main() {
    srand((unsigned int)time(NULL));
    rand();
    struct Teacher teacher = {{"王五", 11},"miss Li"};
    struct Teacher *p = &teacher;


    cout <<"p->student：" << p->arr <<"，p->name：" << p->name << endl;

    return 0;
}
