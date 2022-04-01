#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    for(int h=0;h<t;h++)
    {
        
        int n, first, last,sum;
        scanf("%d",&n);
        last=n%10;
        
        while(n!=0)
        {
            first=n%10;
            n=n/10;
            
        }
        sum=first+last;
        printf("%d\n",sum);
    }
	// your code goes here
	return 0;
}

