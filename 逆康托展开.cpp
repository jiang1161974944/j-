#include<stdio.h> 
#include<math.h>
//求阶乘
int fac(int num)
{
	if(num <= 1)
		return 1;
	else
		return (fac(num-1)*num);
}
int gs,rank,result;//gs表示gs位的全排列，rank排列位置 
bool used[11];//判断是否用过 
int decantor(int x,int gs)
{//逆cantor展开，x就是rank 
    int ans=0;//存放答案 
    int sum=0;//暂时的计数 
    int quotient,remainder;//quotient商，remainder余数 
    for(int i=gs-1;i>=1;i--)
	{
        quotient=x/fac(i);
        remainder=x%fac(i);
        for(int j=1;j<=gs;j++)
		{
            if(!used[j])
                sum++;
            if(sum==quotient+1)
			{//找到该位 
                ans+=j*pow(10,i);//pow幂运算 
                sum=0;//清零 
                x=remainder;
                used[j]=true;//标记为用过 
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
    }//最后一位 
    printf("%d",ans);//答案 
}
int main()
{
	for(int i=1;i<=10;i++)
    	used[11]=false;//初始化为未用过 
	printf("请依次输入数值，位数:");
	scanf("%d%d",&rank,&gs);
	decantor(rank,gs);
	return 0;
}
