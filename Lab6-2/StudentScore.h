#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Subject
{
    int mathScore;
    int physicsScore;
    int programmingScore;
}Subject;
typedef struct Student
{
    char* id;
    char* name;
    Subject sub;
}Student;
void printMathScore(struct Student* stu, int len);
void BubbleSortMath(struct Student* stu, int n);
void printPhysicsScore(struct Student* stu, int len);
void BubbleSortPhysics(struct Student* stu, int n);
void printProgrammingScore(struct Student* stu, int len);
void BubbleSortProgramming(struct Student* stu, int n);
void Swap(struct Student* stu, int i, int j);
