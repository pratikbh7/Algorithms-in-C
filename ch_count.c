#include <stdio.h>
int main(void)
{
	int c,nw,nc,ns,nl;
	nw=nc=ns=nl=0;
	while((c=getchar())!=EOF)
	{
		if(c=='\n')
		{
			++nl;
		}
		else if(c==' ' || c=='\t')
		{
			++ns;
			while((c=getchar())==' ' || c=='\t')
			{
				++ns;
			}
			if(c=='\n')
			{
				++nl;
			}
			else
			{
				++nc;
				++nw;	
			}
		}
		else
		{
			++nc;
		}
	}
	printf("Spaces=%d Newlines=%d Words=%d Characters=%d",ns,nl,nw,nc);
	return 0;
}