#include <stdio.h>
int main()
{
   int c;
   int d=' ';
   while((c=getchar())!=EOF)
   {
      if(c==' ' || c=='\t')
      {
         c=getchar();
         while((c=getchar())==' ' || c=='\t')
            ;
         putchar(d);
      }
      putchar(c);
   }
}
