#include <stdio.h>

int main()
{
int n;
	int n1,n2,n3;
	scanf("%d",&n);
	while(n>0)
	{
	    scanf("%d %d %d",&n1,&n2,&n3);
	    if((n1>n2&&n1>n3))
	    printf("%d\n",n1);
	    else if((n2>n1&&n2>n3))
	    printf("%d\n",n2);
	    else
	    printf("%d\n",n3);
	    n--;
	}
	return 0;
}

