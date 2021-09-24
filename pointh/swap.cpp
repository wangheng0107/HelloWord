#include "swap.h"

void swap1(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

struct Student {
    string name;
    int age;
    int score;
};