//�������������������������ͬʱ����������һ���� 
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,x,i,min;//min�����жϳ������ȡ��a����b 
	printf("������������:");
	scanf("%d%d",&a,&b); 
	c=fabs(a-b);//�þ���ֵȷ��c������ 
	if((c>b) && (c>a))//���c����a��b����ô�������ȡ��a����b�е���Сֵ������������ȡc 
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
