//use staci datastruct to solve mazePath problem

#include <iostream>
#include <malloc.h>

#define OVERFLOW -1
#define ERROR 1
#define OK 0
#define YES 1
#define NO 0

#define	STACK_INIT_SIZE 100
#define STACKINTCREMENT 10

typedef int Status;

typedef struct{
	int x;
	int y;
}PosType;

void (*visit)();

class Stack {
	typedef struct {
		PosType *base;
		PosType *top;
		int stacksize;
	}SqStack;

	SqStack S;
public:
	Status InitStack();
	Status DestroyStack();
	Status ClearStack();
	Status StackEmpty();
	int    StackLength();
	Status GetTop(PosType &e);
	Status Push(PosType e);
	Status Pop(PosType &e);
//	Status StackTraverse((*visit)());
	void   Print();
};

class Maze {
	char maze[10][10];
	PosType start;
	PosType end;
	Stack path;
public:
	Status InitMaze(void);	
	Status Print(void);
	Status MazePath(PosType start,PosType end);
	Status PrintMaze(void);
};



int main(){
	Maze maze;
	maze.InitMaze();
	maze.Print();
	PosType start,end;
	std::cout<<"Please input the position of start.x and start.y: ";
	std::cin>> start.x >>start.y;
	std::cout<<"Please input the position of end.x and end.y: ";
	std::cin>> end.x >> end.y;
	maze.MazePath( start,end);
	maze.PrintMaze();
	return 0;
}

//Maze Alogrithm
Status Maze::InitMaze(void){
	int i,j;
	char *p = maze;
	for( i=0;i<10;++i){
		p[0][i] = p[9][i] = '#'; 
		p[i][0] = p[i][9] = '#';
	}
	for( i=1;i<3;++i){
		p[i][3] = p[i][7] = '#';
	}
	p[3][5] = p[3][6] = '#';
	for( i=2;i<5;++i){
		p[4][i] = '#';
	}
	p[5][4] = '#';
	p[6][2] = p[6][6] = '#';
	for( i=2;i<8;++i){
		if( i == 5) ++i;
		p[7][i] = '#';
	}
	p[8][1] = '#';
	return OK;
}

Status PrintMaze(void){
	for(int i=0;i<10;++i){
		for(int j=0;j<10;++j){
			std::cout<< maze[i][j];
		}
		std::cout<<'\n';
	}
	return OK;
}

Status Maze::PrintMaze(void){
	PosType t;
		while( !path.Pop(t)){
			maze[t.x][t.y] = '.';
		}
		for(int i=0;i<10;++i)
			for(int j=0;j<10;++j){
				if(maze[i][j]=='1')
					std:cout<< ' ';
				else
					std::cout<< maze[i][j];
			}
		std::cout<< '\n';
	return OK;
}

Status Maze::MazePath(PosType start,PosType end){
	path.InitStack(); 
	path.Push(start);
	PosType t;
	t = start;
	maze[t.x][t.y] = '1';

	do{
		if( maze[t.x][t.y+1] !='#'&& maze[t.x][t.y+1] !='1'){
			t.y = t.y + 1;
			maze[t.x][t.y] = 1;
			path.Push(t);
		}
		else if( maze[t.x-1][t.y] != '#'&& maze[t.x-1][t.y] !='1'){
			t.x = t.x - 1;
			maze[t.x][t.y] = 1;
			path.Push(t);
		}
		else if( maze.[t.x+1][y] != '#'&& maze[t.x+1][t.y] !='1'){
			t.x = t.x + 1;
			maze[t.x][t.y] = 1;
			path.Push(t);
		}
		else if( maze.[t.x][y-1] != '#'&& maze[t.x][t.y-1] !='1'){
			t.y= t.y - 1;
			maze[t.x][t.y] = 1;
			path.Push(t);
		}
		else {
			PosType e;
			path.Pop(e);
			t = path.GetTop(e);
		}
	}while( t.x == end.x && t.y == end.y);
	return OK;
}

//Stack Alogrithm
Status Stack::InitStack(){
	S.top = S.base = (PosType*)malloc( STACK_INIT_SIZE * sizeof(PosType));	//(int*),decide to the element type of array.
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

Status	Stack::GetTop(PosType &e){
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
/*
Status Stack::StackPosTyperaverse((*visit)()){
	if( StackEmpty()) return ERROR;
	PosType *p = (S.top-1);
	(*visit)();
	return OK;
}
*/
/*
void Stack::Print(){
	PosType *p = S.top;
	while(p != S.base)	//easy take mistakes,while loop condition to continue
		std::cout<< *(--p);
	std::cout<< '\n';
}
*/