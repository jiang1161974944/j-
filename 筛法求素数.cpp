#include<stdio.h>
#include<math.h>
int sushu(int N)
{   
	int i,flag;    //���ñ�־
	for(i=2;i<=sqrt(N);i++)
	{
		if(N%i==0)   //��2~N�Ŀ���֮�������������������˵����������
		{
			flag=0;
			break;
		}
		else        //����������
			flag=1;
	}
	return flag;
}
int main()
{  
	int i,N;
	printf("��������������:");
	scanf("%d",&N);
	for(i=2;i<=N;i++)   //��2��ʼ
	{  
		if(sushu(i))
		printf("%d\n",i);
	}
	return 0;
}

