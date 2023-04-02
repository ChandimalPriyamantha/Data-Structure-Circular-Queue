#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int data){
	
	if(front == -1 && rear == -1){
		front = rear = 0;
		queue[rear] = data;
	}else if(((rear+1)%MAX) == front){
		printf("Queue is overFlow.");
		
	}else{
		rear = (rear +1)%MAX;
		queue[rear]=data;
	}
}

void dequeue(){
	if(front == -1 && rear == -1){
		printf("Oueue is underFlow.\n");
	}else if(front == rear){
		front = rear = -1;
	}else{
		//printf("%d",queue[front]);
		front = (front+1)%MAX;
	}
}

void display(){
	int i = front;
	if(front == -1 && rear == -1){
		printf("Queue is underFlow.");
	}else{
	  while(i!=rear){
	  	printf("%d ",queue[i]);
	  	i = (i+1)%MAX;
	  }
	  printf("%d ",queue[rear]);	
	}
}


int main(){
	
	enqueue(2);
	enqueue(5);
	enqueue(8);
	enqueue(0);
	enqueue(1);
	dequeue();
	enqueue(1);
	display();
	
	
}
