
#include <stdio.h>

/*
int main (void)
{
    int number = 500;
    while (number > 0)
    {
        printf("%d \n", number);
        number--;
    }
}
*/

char    reverse_string(char *string)
{
    int index;

    index = 0;
    while (*string)
        string++, index++; 
    while (index >= 0)
    {
        printf("%c", *string);
        string--, index--;
    }
    printf("\n");
    return (1);
}

int main(void)
{
    char    *string;

    string = "Alexandre";
    
    reverse_string(string);

    return(0);
}
