#include <stdio.h>
#define max 1000
int lw;
int get_info(char in[],int wc_array[]);
int main(void)
{
	int c,info;
	int i=0;
	int wcs[max];
	char in[max];
	for (i = 0; (c=getchar())!='-'; ++i)
	{
		in[i]=c;
	}
	in[i]='\0';
	info=get_info(in,wcs);
	for (int j = lw; j > 0; --j)
	{
		for (int k = 0; k <=info; ++k)
		{
			if((wcs[k]-j)<0)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
int get_info(char in[],int wc_array[])
{
	int wc,iwcc;
	wc=iwcc=0;
	for (int i = 0; in[i]!='\0'; ++i)
	{
		if(in[i]==' ' || in[i]=='\t' ||in[i]=='\n')
		{
			++i;
			while(in[i]==' ' || in[i]=='\t' ||in[i]=='\n')
			{
				++i;
			}
			if(in[i]!='\0' && iwcc>0)
			{
				if(iwcc>lw)
				{
					lw=iwcc;
				}
				wc_array[wc]=iwcc;
				++wc;
				iwcc=0;
			}
			--i;
		}
		else
		{
			++iwcc;
		}
		if(in[i+1]=='\0')
		{
			wc_array[wc]=iwcc;
			if(iwcc>lw)
			{
				lw=iwcc;
			}
			break;
		}
	}
	return wc;
}