#include<iostream>
using namespace std;

int peek();
bool isfull();
bool isempty();
int enqueue();
int dequeue();
void displayQueue();
void displayTop();

int static front = 0;
int queue[10];

int MAXSIZE = 10;
int rear = -1;

int main(){
	
	int ch;

	do{
		
		cout<<"\n\nEnter 1 to enqueue in queue"<<endl;
		cout<<"Enter 2 to dequeue from queue"<<endl;
		cout<<"Enter 3 to display queue"<<endl;
		cout<<"Enter 4 to display the top element"<<endl;
		cout<<"Enter 5 to Exit"<<endl;
		
		cout<<"\nEnter the choice : ";
		cin>>ch;
		
		switch(ch){
			case 1:	
				enqueue();
				break;
				
			case 2:
				cout<<"The removed value is : ";
				cout<<dequeue();
				break;
				
			case 3:
				displayQueue();
				break;
				
			case 4:
				displayTop();
				break;
				
		}
		
	}while(ch!=5);
	
}

int peek(){
	return queue[front];
}

bool isfull(){
   	if(rear == MAXSIZE - 1)
      	return true;
   	else
      	return false;
}

bool isempty() {
   	if(front < 0 || front > rear) 
      	return true;
   	else
      	return false;
}

int enqueue(){ 

	int val;
	cout<<"Enter the value : ";
	cin>>val;
	 
   	if(isfull()){
   		return 0;
	}
    else{
    	rear = rear + 1;
   		queue[rear] = val;
	}  		
}

int dequeue() {
   	if(isempty()){
   		return 0;
	}  
    else{
    	int data = queue[front];
   		front = front + 1;
   		return data;
	}	
}

void displayQueue(){
	cout<<"The Queue is : ";
	for(int i=front; i<=rear; i++){
		cout<<queue[i]<<" ";
	}
}

void displayTop(){
	cout<<"The top element is : "<<queue[rear];
}



