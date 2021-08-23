#include<stdio.h>
int sum=0,rem;
int elements_reverse(int num)
{
	if(num)
	{
		rem=num%10;
		sum=sum*10+rem;
        elements_reverse(num/10);
    }
    return sum;
    
}
int main()
{
	int num;
	printf("enter the number upto sum u want : \n");
	scanf("%d",&num);
	int n=elements_reverse(num);
	printf("reverse is : %d",n);
}
