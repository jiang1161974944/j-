#include <stdio.h>
int mod(int n, int p,int m)
{
	int result = 1;
	while (p > 0)
	{
		if (p % 2 == 1)
		{
			result = (result*n) % m;
		}
		p /= 2;
		n = (n*n) % m;
	}
	return result;
}


int main()
{
    int n,p,m;
    printf("请依次输入数n，它的幂p，以及除数m：");
    scanf("%d%d%d",&n,&p,&m);
    printf("%d",mod(n,p,m));
    return 0;
}
