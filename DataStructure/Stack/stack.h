#define OVERFLOW -1
#define ERROR 1
#define OK 0
#define YES 1
#define NO 0

#define	STACK_INIT_SIZE 100
#define STACKINTCREMENT 10

typedef int Status;

class Stack {
private:
	typedef PosType {
		int x;
		int y;
	}PosType;

	typedef struct {
		PosType *base;
		PosType *top;
		PosType stacksize;
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
	Status StackTraverse();
	void   Print();
};
