
# Question 1:Write a program to allocate the memory of  the character  array storing the name of the students dynamically?

## Answer:

**Code**:
```
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

```

**Explanation**:
The problem can be solved by first creating a structure called student, featuring three components: a character pointer for the student’s name, an integer roll number for the student’s ID, and a float for the student’s marks. Then within the main function we initialize a structure variable named s2 and a pointer p that references s2. The program dynamically allocates memory for p->name to store up to 30 characters for the student’s name, ensuring that the memory allocation is successful. It then prompts the user to input the student’s name, roll number, and marks, recording these entries in the structure via the pointer p. In the end, it displays the student’s details—name, roll number, and marks—on the console.