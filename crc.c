#include<stdio.h>
int main()
{
	int data[20],divisor[20],temp[20];
	int datasize,divsize,i,j;
	printf("Enter the datasize:");
	scanf("%d",&datasize);
	printf("Enter the divsize:");
	scanf("%d",&divsize);
	for(i=0;i<datasize;i++){
		printf("Enter data bits:");
		scanf("%d",&data[i]);
	}
	for(i=0;i<divsize;i++){
		printf("Enter divisor bits:");
		scanf("%d",&divisor[i]);
	}
	for(i=0;i<datasize;i++){
		temp[i]=data[i];
	}
	for(i=datasize;i<datasize+divsize-1;i++){
		temp[i]=0;
	}
	for(i=0;i<datasize;i++){
		if(temp[i]==1){
		for(j=0;j<divsize;j++){
			temp[i+j]=temp[i+j]^divisor[j];
		}
		}
	}
	printf("\ncrc bits\n");
	for(i=datasize;i<datasize+divsize-1;i++){
		printf("%d",temp[i]);
	}
	printf("\ndatabits\n");
	for(i=0;i<datasize;i++){
		printf("%d",data[i]);
	}
	printf("\n");
	for(i=datasize;i<datasize+divsize-1;i++)
	{
		printf("%d",temp[i]);
	}	
}
