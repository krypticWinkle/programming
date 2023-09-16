/*Write a C fution that inerts a string into another string at a specified position.
It returns a positive number if it is successful or zero if it has any problem, such as
an insertion location greater than the length of the receiving string. The first parameter
is the receiving string, the second parameter is the string to be inserted, and the third
 parameter is the insertion (index) position in the first string.*/

/*#include<stdio.h>
#include<string.h>

int main()
{
    char * strA = "Blahblahblah", * strB = "123", strC[50];
    int x = 4;
    strncpy(strC, strA, x);
    strC[x] = '\0';
    strcat(strC, strB);
    strcat(strC, strA + x);
    printf("%s\n", strC);

    return 0;
}*/

#include <stdio.h>
#include <string.h>
/*int insertingg ( char* s1, char* s2, int index)
{
    char temp[50];
    if(index > strlen(s1))
    {
        temp[50]  = *s1;
        strncpy(temp,*s1,index);
        temp[index] = '\0';
        strcat(temp,*s2);
        strcat(temp,*s1+index);

        return 1;
    }
    else
    {
        return 0;
    }
}*/
int main ()
{
    int index;//return_value;
    char s1[50], s2[50],temp[50]; // s2 is to be inserted in s1

    scanf("%s %s %d", &s1, &s2, &index);
    //return_value = insertingg(&s1, &s2, index);

    if(index <= strlen(s1))
    {
        strncpy(temp,s1,index);
        temp[index] = '\0';
        strcat(temp,s2);
        strcat(temp,s1+index);

        printf("%s", temp);
    }
    else
    {
        printf("error\n");
    }
    /*if(return_value == 0)
    {
        printf("error\n");
    }
    else
    {
        printf("%s", s1);
    }*/
    
    return 0;
}