#include<stdio.h>
int elements_sum(int num)
{
    if(num==1)
    return 1;
    return (num+elements_sum(num-1));
    
}
int main()
{
	int num,sum;
	printf("enter the number upto sum u want : \n");
	scanf("%d",&num);
	sum=elements_sum(num);
	printf("sum is : %d",sum);
}
