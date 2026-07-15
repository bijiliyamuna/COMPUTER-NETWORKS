#include <stdio.h>
int main() {
    int a[20],b[20];
    int count = 0,j=0,n;
    printf("Enter the size of frame:");
    scanf("%d",&n);
    printf("Enter the data:");
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
    	if(a[i]==1)
    	{
    		b[j++]=a[i];
    		count++;
    	
    		if(count==5)
    		{
    			b[j++]=0;
    			count=0;
    		}
    	}
    	else{
    		b[j++]=a[i];
    		count=0;
    	}
    	}
    	for(int i=0;i<j;i++)
    	{
    	printf("%d",b[i]);
    	}
    return 0;

}
