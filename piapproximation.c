#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
float picalc(long int it);
int main()
{
    char numero_in[20];
    fgets(numero_in,20,stdin);
    char *p;
    long int input=strtol(numero_in,&p,10);
    float result=picalc(input);
    printf("Approximation:%.9f",result);
}

float picalc(long int it)
{
    float a[it],b[it];
    srand(time(NULL));
    float sq_count, ci_count;
    sq_count=ci_count=0;
    for (int i = 0; i < it; ++i)
    {
       a[i]= ((float)rand()/(float)(RAND_MAX));
       b[i]=((float)rand()/(float)(RAND_MAX));
       float result=sqrt(pow(a[i],2)+pow(b[i],2));
       ++sq_count;
       if(result<=1)
       {
        ++ci_count;
       }
    }
    return (4*(ci_count/sq_count));
}
