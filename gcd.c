#include<stdio.h>

int gcd(int a, int b)
{
	if (b==0)
	return a;
	else
	return gcd(b , a %b );
}

int main()
{
    int a,b,x,y;
	printf("enter two integers:\n");
	scanf("%d%d",&a,&b);
	printf("GCD=%d\n",gcd(a,b));

}