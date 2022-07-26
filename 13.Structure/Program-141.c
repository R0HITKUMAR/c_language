#include <stdio.h>
#include <stdlib.h>

struct student
{
	int item_no[3]={101,102,103,104};
	char item_name[3]={"Milk","Cheese","Ghee","Bread"};
	int price[3]={42,50,500,40};
	int stock[3]={10,20,15,16};
}s;

int main(void) {
	int a,b,i;
	scanf("%d%d",&a,&b);
	for (i=1;i<=4;i++)
	{
		if (s.item_no[i] == a)
		{
			if (s.stock[i]>b)
			{
				printf("NO STOCK\n");
				printf("%d LEFT",s.stock[i]);
			}
			else
			{
				printf("%.1f INR",b*s.price[i]);
				s.stock[i] = s.stock[i]-b;
				printf("%d LEFT",s.stock[i]);
			}
		}
	}
	return 0;
}
