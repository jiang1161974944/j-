#include<stdio.h>
#define Max 100
//求阶乘
int fac(int num)
{	
	if(num <= 1)
		return 1;	
	else
		return (fac(num-1)*num);
}
int main()
{	
	int num[Max];
	char s[Max];
	int i=0,j=0,k=0,count=0;
	char val;	
	int sum = 0; 	
	//获取所有的元素：A C B D   或者 1324  	
	while(scanf("%c",&val))
	{		
		if(val == '\n')
			break;
		else	
		{		
			s[count] = val;
			count ++;
		}	
	} 	
	printf("count = %d\n",count);
	//分别求得元素的排序，如第一个元素需要和剩下的n-1个比较，
	//第二个元素需要和剩下的n-2个比较，第三个元素需要和剩下的n-3个元素进行比较等等
	for(i=0;i<count;i++)
	{		
		printf("第%d个数：%c\n",i+1,s[i]);
		for(j=i+1;j<count;j++)		
		{			
			if(s[i]>s[j])			
			{							
				k ++;			
			}					
		}		
		printf("在剩下的元素中比它小的个数：%d\n",k);		
		num[i] = k;		
		k = 0;	
	}
	//输出结果
	for(j=count-1;j>=0;j--)	
	{		
		sum += fac(j) * num[k];		
		printf("%d = %d*%d\n",sum,fac(j),num[k]);		
		k++;	
	}	
	printf("是第%d大数\n",sum+1); 	
	return 0;
}

