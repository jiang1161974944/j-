#include<stdio.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	printf("请依次输入三个点的横坐标和纵坐标：:");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	double ans;
	ans=(x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);//表示向量AB与AC的叉积的结果 
	if(ans>0)
	{
		printf("逆时针");
	}
	else if(ans<0)
	{
		printf("顺时针");
	}
	else if(ans==0)
	{
		printf("共线");
	}
	return 0;
}
