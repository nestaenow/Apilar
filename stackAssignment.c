#include<stdio.h>
int top=-1;
int A[200],k,m,n,a,i;
void push(){
	if(top>=n-1)
    {
        printf("\n\tSTACK is FULL!!\n");
    }
    else
    {
    	printf("Enter the value to be pushed:");
	    scanf("%d",&a);
        top++;
        A[top]=a;
    }
    printf("\n");
}
void pop(){
	if(top<=-1)
    {
        printf("\n\t Stack is EMPTY!!\n");
    }
    else
    {
        printf("\n\t The popped elements is %d\n",A[top]);
        top--;
    }
    printf("\n");
}
void display(){
	if(top>=0){
		printf("\n\t Your Stack \n");
		for(i=top;i>=0;i--){
			printf("\n\t %d\n",A[i]);
		}
	}
	else{
		printf("\n\tStack is EMPTY!!\n");
	}
	printf("\n");
}
void sizeOfStack(){
	for(i=0,m=0;i<=top;i++){
		if(A[i] != top)
		m++;
	}
	printf("\n\t%d\n",m);
	printf("\n");
}
void topOfStack(){
	printf("\n\tYour top element is: %d\n",A[top]);
	printf("\n");
}
int main()
{
	printf("***********\n");
	printf("Set the size of your stack(max 200).\n");
	scanf("%d",&n);
	printf("\n\t ........................\n");
	printf("\n\t 1- Push into the stack.\n");
	printf("\n\t 2- Pop the stack.\n");
	printf("\n\t 3- Display the elements in the stack.\n");
	printf("\n\t 4- Get the number of elements in the stack.\n");
	printf("\n\t 5- Get the element at the top of the stack.\n");
	printf("\n\t 6- EXIT.\n");
	printf("\n\t ........................\n");
	printf("\n");
	do{
		printf("Enter your instruction: ");
		scanf("%d",&k);

		switch(k){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				sizeOfStack();
				break;
			case 5:
				topOfStack();
				break;
			case 6:
				printf("\n\t EXITTED...");
				break;
			default:
				printf("\n\t Not in the above instructions.\n\n");
		}
	}
	while(k!=6);
	return 0;
}

