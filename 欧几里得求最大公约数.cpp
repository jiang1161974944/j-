//欧几里得算法求最大公约数
//算法思路：1. 令r为a/b所得余数(0≤r<b)，若 r= 0，算法结束；b 即为答案。
//2. 若r不等于0，则进行互换：置 a←b，b←r，并返回第一步。
#include<stdio.h>
int gcd(int a,int b)
{
	int r;
	while(b>0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main()
{
	int a,b;
	printf("请输入a,b:\n");
	scanf("%d%d",&a,&b);
	printf("%d和%d的最大公约数是%d\n",a,b,gcd(a,b));
	return 0; 
}
