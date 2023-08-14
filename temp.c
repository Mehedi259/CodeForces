#include <stdio.h>
#include <string.h>
void up(char string, int start, int current);
void swap(char *, char *);
int count = 0;

int main()
{
    char string[100];
    int length;
    printf("Enter the string: ");
    gets(string);
    length = strlen(string);
    up(string[],0,length-1);
}
up(char string, int start, int current)
{
    if (start == current)
    {
        count++;
        printf("%s\n", string);
        return;
        for (int i = start; i <= current; i++)
        {
            int dual = 0;
            for (int j = start; j < i; j++)
            {
                ifc
            }
            
        }
        
    }
}