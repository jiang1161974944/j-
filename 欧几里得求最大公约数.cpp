//ŷ������㷨�����Լ��
//�㷨˼·��1. ��rΪa/b��������(0��r<b)���� r= 0���㷨������b ��Ϊ�𰸡�
//2. ��r������0������л������� a��b��b��r�������ص�һ����
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
	printf("������a,b:\n");
	scanf("%d%d",&a,&b);
	printf("%d��%d�����Լ����%d\n",a,b,gcd(a,b));
	return 0; 
}
