#include <stdio.h>
#define max 1000
int main(void)
{
   int c,num_data[10],ws,other,conv;
   ws=other=conv=0;
   for (int i = 0; i < 10; ++i)
   {
      printf("%d\n",num_data[i]);
   }
   while((c=getchar())!='-')
   {
      if(c==' ' || c=='\t' || c=='\n')
      {
         ++ws;
      }
      else if(c>='0' && c<='9')
      {
         ++num_data[c-'0'];
      }
      else
      {
         ++other;
      }  
   }
   printf("Numerical data:\n");
   // for (int i = 0; i < 10; ++i)
   // {
   //    printf("%d\n",num_data[i]);
   // }
   printf("\n");
   printf("Whitespaces = %d\tOther=%d\n",ws,other);
}