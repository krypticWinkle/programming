#include<stdio.h>
#include <stdlib.h> 

struct Student
{
    int rollNo;
    char name;
};

int main()
{
    struct Student *ptr;
    //struct Student s1;
    ptr = (struct Student *) calloc(1,sizeof(struct Student));
    ptr->rollNo = 5;
    ptr->name = 'X';

    printf("%d ",ptr->rollNo);
    printf("%c",ptr->name);
    return 0;
}