#include<stdio.h>
int main(){
	int elements,temp;
	printf("Enter the number of elements to the array : ");
	scanf("%d",&elements);
	int x[elements];
	printf("Enter the %d elements to the array.",elements);
	for(int i=0;i<elements;i++){
		printf("\n(%d) : ",(i+1));
		scanf("%d",&x[i]);
	}
	printf("\nNone sorted array elements are \t:");
	for(int i=0;i<elements;i++){
		printf("%d\t",x[i]);
	}
	//insertion Sort code segment
	for(int j=0;j<elements-1;j++){
	    for(int i=j+1;i<elements;i++){
	        if(x[j]>x[i]){
		    temp=x[j];
		    x[j]=x[i];
		    x[i]=temp;
		}
	    }
	}
	printf("\nSorted array elements are \t:");
	for(int i=0;i<elements;i++){
		printf("%d\t",x[i]);
	}
	printf("\n");
}
