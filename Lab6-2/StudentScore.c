#include "StudentScore.h"
void printMathScore(struct Student* stu, int len)
{
    printf("\nMath Score:\n\n");
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%7s %s %d\n",
            stu[i].name,
            stu[i].id,
            stu[i].sub.mathScore);
    }
}
void BubbleSortMath(struct Student* stu, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (stu[j].sub.mathScore > stu[j + 1].sub.mathScore)
            {
                Swap(stu, j, j + 1);
            }
        }
    }
}
void printPhysicsScore(struct Student* stu, int len)
{
    printf("\nPhysics Score:\n\n");
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%7s %s %d\n",
            stu[i].name,
            stu[i].id,
            stu[i].sub.physicsScore);
    }
}
void BubbleSortPhysics(struct Student* stu, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (stu[j].sub.physicsScore > stu[j + 1].sub.physicsScore)
            {
                Swap(stu, j, j + 1);
            }
        }
    }
}
void printProgrammingScore(struct Student* stu, int len)
{
    printf("\nProgramming Score:\n\n");
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%7s %s %d\n",
            stu[i].name,
            stu[i].id,
            stu[i].sub.programmingScore);
    }
}
void BubbleSortProgramming(struct Student* stu, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (stu[j].sub.programmingScore > stu[j + 1].sub.programmingScore)
            {
                Swap(stu, j, j + 1);
            }
        }
    }
}
void Swap(struct Student* stu, int i, int j)
{
    Student temp = stu[i];
    stu[i] = stu[j];
    stu[j] = temp;
}