#include<stdio.h>
#define Max 100
//��׳�
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
	//��ȡ���е�Ԫ�أ�A C B D   ���� 1324  	
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
	//�ֱ����Ԫ�ص��������һ��Ԫ����Ҫ��ʣ�µ�n-1���Ƚϣ�
	//�ڶ���Ԫ����Ҫ��ʣ�µ�n-2���Ƚϣ�������Ԫ����Ҫ��ʣ�µ�n-3��Ԫ�ؽ��бȽϵȵ�
	for(i=0;i<count;i++)
	{		
		printf("��%d������%c\n",i+1,s[i]);
		for(j=i+1;j<count;j++)		
		{			
			if(s[i]>s[j])			
			{							
				k ++;			
			}					
		}		
		printf("��ʣ�µ�Ԫ���б���С�ĸ�����%d\n",k);		
		num[i] = k;		
		k = 0;	
	}
	//������
	for(j=count-1;j>=0;j--)	
	{		
		sum += fac(j) * num[k];		
		printf("%d = %d*%d\n",sum,fac(j),num[k]);		
		k++;	
	}	
	printf("�ǵ�%d����\n",sum+1); 	
	return 0;
}

