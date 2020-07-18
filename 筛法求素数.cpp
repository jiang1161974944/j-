#include<stdio.h>
#include<math.h>
int sushu(int N)
{   
	int i,flag;    //设置标志
	for(i=2;i<=sqrt(N);i++)
	{
		if(N%i==0)   //从2~N的开方之间如果有数能整除，则说明不是素数
		{
			flag=0;
			break;
		}
		else        //否则是素数
			flag=1;
	}
	return flag;
}
int main()
{  
	int i,N;
	printf("请输入数的上限:");
	scanf("%d",&N);
	for(i=2;i<=N;i++)   //从2开始
	{  
		if(sushu(i))
		printf("%d\n",i);
	}
	return 0;
}

