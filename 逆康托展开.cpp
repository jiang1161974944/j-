#include<stdio.h> 
#include<math.h>
//��׳�
int fac(int num)
{
	if(num <= 1)
		return 1;
	else
		return (fac(num-1)*num);
}
int gs,rank,result;//gs��ʾgsλ��ȫ���У�rank����λ�� 
bool used[11];//�ж��Ƿ��ù� 
int decantor(int x,int gs)
{//��cantorչ����x����rank 
    int ans=0;//��Ŵ� 
    int sum=0;//��ʱ�ļ��� 
    int quotient,remainder;//quotient�̣�remainder���� 
    for(int i=gs-1;i>=1;i--)
	{
        quotient=x/fac(i);
        remainder=x%fac(i);
        for(int j=1;j<=gs;j++)
		{
            if(!used[j])
                sum++;
            if(sum==quotient+1)
			{//�ҵ���λ 
                ans+=j*pow(10,i);//pow������ 
                sum=0;//���� 
                x=remainder;
                used[j]=true;//���Ϊ�ù� 
                break; 
            }
        }
    }
    for(int i=1;i<=gs;i++)
	{
        if(!used[i])
		{
            ans+=i;
            break;
        }
    }//���һλ 
    printf("%d",ans);//�� 
}
int main()
{
	for(int i=1;i<=10;i++)
    	used[11]=false;//��ʼ��Ϊδ�ù� 
	printf("������������ֵ��λ��:");
	scanf("%d%d",&rank,&gs);
	decantor(rank,gs);
	return 0;
}
