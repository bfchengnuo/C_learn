# include<stdio.h>
int main()
{
	int t=0,i,b=0,a[15];
	printf("把15只猴子编号为1~15\n");
	for(i=0;i<15;i++)    //把数组各元素初始化为1
		a[i]=1;
	printf("淘汰的猴子依次为：\n");
    for(i=0;i<15;i++)
	{
		t+=a[i];   //元素累加计数，代替猴子1~7报数。
		if(t==7)   
		{
			a[i]=0;     //淘汰猴子计为0，不再累加
			t=0;         // 实现猴子1~7循环报数
			b++;         //计算猴子淘汰数
			printf("%d、第%d只\n",b,i+1);
		}
		if(i==14)     //到第15只猴子时，接着从第1只开始，构成环形
			i=-1;      
        if(b==14&&a[i]==1)   //当淘汰数为14，只有一个元素为1时，即为获胜猴子
		{
			printf("最后第%d只猴子当大王\n",i+1);
			break;
		}
	}	
		return 0;
}

-----------------------------------分割线--------------------------------------

#include <stdio.h>
void main()
{
	int a[16],count=0,n=1,i;
	for(i=1;i<16;i++)
		a[i]=1;
	while(count!=14)
	{
		for(i=1;i<16;i++)
		{
			if(a[i]!=0)
			{
				if(n==7)
				{
					n=1;
					a[i]=0;
					count++;
				}
				else
					n++;
			}
		}
	}
	for(i=1;i<16;i++)
	{
		if(a[i]!=0)
			printf("%d\n",i);

	}
	
}