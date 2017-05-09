#include "stack.h"
#include <malloc.h>
#include <iostream>

Status Stack::InitStack(){
	S.base = S.top = (PosType*)malloc( STACK_INIT_SIZE * sizeof(PosType));	//(int*),decide to the element type of array.
	if(!S.base)	return OVERFLOW;
	S.stacksize = STACK_INIT_SIZE;
	return OK;
}

Status Stack::DestroyStack(){
	if(!S.base) return ERROR;
	free(S.base);
	S.base = S.top = NULL;
	S.stacksize  = 0;
	return OK;
}

Status Stack::ClearStack(){
	S.top = S.base;
	return OK;
}

Status Stack::StackEmpty(){
	if(S.base == S.top) return YES;
	else return NO;
}

int Stack::StackLength(){
	return S.top-S.base;
}

Status	Stack::GetPosTypeop(PosType &e){
	if(S.base == S.top) return ERROR;
	else
		e = *(S.top -1);	//if *(S.top--) ,it will change the value of S.top
	return OK;
}

Status Stack::Push(PosType e){
	if((S.top-S.base) >= S.stacksize){	//if == S.stacksize,it will don't working when (S.top-S.base) > S.stacksize
		S.base = (PosType*)realloc(S.base,(STACK_INIT_SIZE + STACKINTCREMENT)*sizeof(PosType));
		if(!S.base) return OVERFLOW;
		S.top = S.base + S.stacksize;	//notice! if not,it will illegel access memory
		S.stacksize += STACK_INIT_SIZE;
	}
	*S.top ++ = e;  // two expression merge one expression
	return OK;
}

Status Stack::Pop(PosType &e){
	if( StackEmpty()) return ERROR;
	e = *(--S.top);  // *(--S.top), two merge one
	return OK;
}

Status Stack::StackPosTyperaverse(){
	if( StackEmpty()) return ERROR;
	PosType *p = (S.top-1);
	//*visit();
	return OK;
}

void Stack::Print(){
	PosType *p = S.top;
	while(p != S.base)	//easy take mistakes,while loop condition to continue
		std::cout<< *(--p);
	std::cout<< '\n';
}
