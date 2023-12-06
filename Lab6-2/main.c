#include "StudentScore.h"
int main()
{
    Subject sub[10] =  {{99, 100, 60},  {98, 88, 90},   {87, 100, 100},
                        {89, 88, 87},   {78, 90, 93},   {100, 100, 100},
                        {80, 94, 99},   {100, 88, 78},  {78, 77, 76},   {90, 90, 97}};
    Student stu[10] = {
    {"20221101", "Alice", sub[0]},
    {"20221102", "Bob", sub[1]},
    {"20221103", "Clinton", sub[2]},
    {"20221104", "Donny", sub[3]},
    {"20221105", "Emily", sub[4]},
    {"20221106", "Fermi", sub[5]},
    {"20221107", "Graham", sub[6]},
    {"20221108", "Helen", sub[7]},
    {"20221109", "Iris", sub[8]},
    {"20221110", "Jack", sub[9]} };
    BubbleSortMath(stu,10);
    printMathScore(stu,10);
    BubbleSortPhysics(stu,10);
    printPhysicsScore(stu,10);
    BubbleSortProgramming(stu,10);
    printProgrammingScore(stu,10);
    return 0;
}

