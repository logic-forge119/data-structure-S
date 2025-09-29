#include <stdio.h>
#include <stdlib.h>

struct student
{
  int id;
  int age;
  float cgpa;
  struct student *next;
};

struct student *createNode(int id, int age, float cgpa)
{
  struct student *newNode = malloc(sizeof(struct student));
  newNode->id = id;
  newNode->age = age;
  newNode->cgpa = cgpa;
  newNode->next = NULL;

  return newNode;
}

int main()
{
  struct student *std1 = createNode(1001, 21, 3.8);
  struct student *std2 = createNode(1002, 26, 3.6);
  struct student *std3 = createNode(1003, 28, 3.0);
  struct student *std4 = createNode(1004, 32, 3.3);
  struct student *std5 = createNode(1005, 25, 3.2);

  std1->next=std2;
  std2->next=std3;
  std3->next=std4;
  std4->next=std5;

  printf("%.2f",std2->cgpa);
  return 0;
}