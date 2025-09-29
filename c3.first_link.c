#include <stdio.h>
#include <stdlib.h>

struct student
{
  int age;
  int id;
  float cgpa;
  struct student*next;
};


int main(){
  struct student * student1 = (struct  student*)malloc(sizeof(struct student));

  student1->age = 21;
  student1->id = 001;
  student1->cgpa = 3.9;
  
  struct student * student2 = (struct  student*)malloc(sizeof(struct student));

  student2->age = 20;
  student2->id = 002;
  student2->cgpa = 3.00;

  student1->next = student2;
  student2->next = NULL;
  
  printf("%d\n",student1->age);
  printf("%.2f\n",student1->next->cgpa);

  return 0;
}