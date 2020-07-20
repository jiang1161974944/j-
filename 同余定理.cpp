//输入两个数，求出它们余数相同时所除的最大的一个数 
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,x,i,min;//min用来判断除数最多取到a还是b 
	printf("请输入两个数:");
	scanf("%d%d",&a,&b); 
	c=fabs(a-b);//用绝对值确保c是正数 
	if((c>b) && (c>a))//如果c大于a和b，那么除数最多取到a或者b中的最小值，否则除数最多取c 
	{
		if(b>a)
			min=a;
		else
			min=b;
	}
	else
		min=c;
	for(i=min;i>=1;i--)
	{
		if(c%i==0)
			printf("%d",i);
			return 0;
	}
}
