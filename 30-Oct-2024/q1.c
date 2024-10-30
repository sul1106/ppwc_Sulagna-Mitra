#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 struct student{
  char *name;
  int rollno;
  float marks;
  };
  int main(){
   struct student s2;
   struct student *p=&s2;

   p->name=(char*)malloc(30*sizeof(char));
   
   if(p->name==NULL){
 		printf("Memory not available\n");
 		exit(1);
 }
 printf("Enter the name of student:\n");
 fgets(p->name,30,stdin);
 printf("Enter roll number of the student:\n");
 scanf("%d",&p->rollno);
 printf("Enter marks of the student:\n");
 scanf("%f",&p->marks);
 
 printf("Students detail\n");
 printf("name:%s",p->name);
 printf("roll no:%d\n",p->rollno);
 printf("marks:%f\n",p->marks);
  
    
    return 0;
    }