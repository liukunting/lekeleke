#include<stdio.h>
int isPalindrome(int x)
{
	int  i = 0;
    int  t = x;
    if(x<0)
    {
    	return false;
	}
    while(t)
    {
        i = 10*i + (t%10);
        t=t/10;
    }
    if(i==x)
    {
    	return true;
	}
	else
	{
		return false; 
	}
    
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",isPalindrome(a));
}
