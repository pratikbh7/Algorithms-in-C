#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int i;
    printf("Loop:\n");
    scanf("%d%*c",&i);
    for(int ct = 0; ct < i; ++ct)
    {
        char buff[28];
        int ch = getchar();
        // putchar(ch);
        if (ch == '\n')
        {
            printf("Newline\n");
        }
        else
        {
            if (ungetc(ch,stdin) == EOF)
            {
                exit(EXIT_FAILURE);
            }
            scanf("%27[^\n]%*c",buff);
            printf("%s\n",buff);
        }
    }
    return 0;
}
