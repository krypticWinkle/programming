#include<stdio.h>
int main()
{
    int maxchars,i;
    char current= '\n', previous;// = '\n'; char previous;

    scanf("%d",&maxchars);
    getchar(); //reads a character
    
    for(i=0;i<maxchars;i++)
    {
        previous = current;
        current = getchar();
        if((current=='\n') && (previous=='\n'))
        {
            break;
        }
    }
    printf("%d\n",i);
    return 0;
}