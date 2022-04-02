#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	
	for (int i=a;i<=b;i++)
	{
	    if(i%2!=0)
	    printf("%d ",i);
	}
	return 0;
}

