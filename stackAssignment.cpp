#include<iostream>
using namespace std;
int top=-1;
int A[200],k,m,n,a,i;
void push(){
	if(top>=n-1)
    {
        cout<< "\n\tSTACK is FULL!!\n";
    }
    else
    {
    	cout<< "Enter the value to be pushed:";
	    cin>> a;
        top++;
        A[top]=a;
    }
    cout<< "\n";
}
void pop(){
	if(top<=-1)
    {
        cout<< "\n\t Stack is EMPTY!!\n";
    }
    else
    {
        cout<< "\n\t The popped elements is: "<<A[top]<<"\n";
        top--;
    }
    cout<< "\n";
}
void display(){
	if(top>=0){
		cout<< "\n\t Your Stack \n";
		for(i=top;i>=0;i--){
			cout<< "\n\t"<<A[i]<<"\n";
		}
	}
	else{
		cout<< "\n\tStack is EMPTY!!\n";
	}
	cout<< "\n";
}
void sizeOfStack(){
	for(i=0,m=0;i<=top;i++){
		if(A[i] != top)
		m++;
	}
	cout<< "\n\t"<<m<<"\n";
	cout<< "\n";
}
void topOfStack(){
	cout<< "\n\tYour top element is: "<<A[top]<<"\n";
	cout<< "\n";
}
int main()
{
	cout<< "***********\n";
	cout<< "Set the size of your stack(max 200).\n";
	cin>> n;
	cout<< "\n\t ........................\n";
	cout<< "\n\t 1- Push into the stack.\n";
	cout<< "\n\t 2- Pop the stack.\n";
	cout<< "\n\t 3- Display the elements in the stack.\n";
	cout<< "\n\t 4- Get the number of elements in the stack.\n";
	cout<< "\n\t 5- Get the element at the top of the stack.\n";
	cout<< "\n\t 6- EXIT.\n";
	cout<< "\n\t ........................\n";
	cout<< "\n";
	do{
		cout<< "Enter your instruction: ";
		cin>> k;

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
				cout<< "\n\t EXITTED...";
				break;
			default:
				cout<< "\n\t Not in the above instructions.\n\n";
		}
	}
	while(k!=6);
	return 0;
}

