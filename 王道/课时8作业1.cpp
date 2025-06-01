#include <stdio.h>
struct student
{
  int num;
  char name[20];
  char sex;
} stu;

int main()
{
  scanf("%d%s %c", &stu.num, stu.name, &stu.sex);

  printf("%d %s %c\n", stu.num, stu.name, stu.sex);
}
