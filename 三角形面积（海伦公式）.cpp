#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,z,s,n,m;
	scanf("%f%f%f",&x,&y,&z);
	if((x+y<=z) || (x+z<=y) || (y+z<=x))
	//判断是否能构成三角形条件
	{
		printf("wrong\n");
	}
	else
	{
		n=(x+y+z)/2.0; //这里要用浮点数
		s=n*(n-x)*(n-y)*(n-z);
		m=sqrt(s);
		printf("%f\n",m);
	}
}
