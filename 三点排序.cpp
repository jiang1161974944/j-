#include<stdio.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	printf("����������������ĺ�����������꣺:");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	double ans;
	ans=(x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);//��ʾ����AB��AC�Ĳ���Ľ�� 
	if(ans>0)
	{
		printf("��ʱ��");
	}
	else if(ans<0)
	{
		printf("˳ʱ��");
	}
	else if(ans==0)
	{
		printf("����");
	}
	return 0;
}
