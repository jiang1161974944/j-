#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,z,s,n,m;
	scanf("%f%f%f",&x,&y,&z);
	if((x+y<=z) || (x+z<=y) || (y+z<=x))
	//�ж��Ƿ��ܹ�������������
	{
		printf("wrong\n");
	}
	else
	{
		n=(x+y+z)/2.0; //����Ҫ�ø�����
		s=n*(n-x)*(n-y)*(n-z);
		m=sqrt(s);
		printf("%f\n",m);
	}
}
