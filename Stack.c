/*
	* stack implementation
	* 1. push
	* 2. pop
	* 3. peek
	* 4. stackTop
	* 5. isFull
	* 6. isEmpty
*/

#include<stdio.h>
#include<stdlib.h>

struct stack{
	int size;
	int top;
	int *items;
};


void push(struct stack *st, int value){
	if(st->top == st->size-1)
		printf("stack overflow\n");
	else{
		st->top++;
		st->items[st->top] = value;
	}
}



int pop(struct stack *st){
	int removed= -1;
	if(st->top == -1)
		printf("stack underflow\n");
	else{
		removed = st->items[st->top];
		st->top--;
	}
	return removed;
}



int peek(struct stack st, int index){
	int value = -1;
	if(st.top-index+1 < 0)
		printf("invalid index\n");
	else{
		value = st.items[st.top-index+1];
	}
	return value;
}



int stackTop(struct stack st){
	if (st.top == -1){
		return -1;
	}
	else{
		return st.items[st.top];
	}
}



int isFull(struct stack st){
	if(st.top == st.size-1)
		return 1;
	else
		return 0;
}



int isEmpty(struct stack st){
	if(st.top == -1)
		return 1;
	else
		return 0;
}

void printStack(struct stack st){
	if(st.top == -1)
		return;
	for (int i = st.top; i >= 0; i--){
		printf("%d ",st.items[i] );
	}
	printf("\n");
}



