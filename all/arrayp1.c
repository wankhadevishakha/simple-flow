//p-que.1)Given an array of marks of students,if the marks of any student is less than 35 print its roll number.[roll number here refers to the index of the array.]

#include <stdio.h>
int main()
{
  int marks[10]={95,90,31,25,100,50,15,89,97,30};
  for(int i=0; i<10;i++)
  {
     if(marks[i]<35)
     {
        printf("%d ",i);
      }
   }    
   return 0;
}   
