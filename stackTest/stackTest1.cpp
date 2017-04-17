//Õ»µÄË³Ðò´æ´¢½á¹¹
#include<iostream>
#define MAX_SIZE 50
using namespace std;
typedef struct {
	int data[MAX_SIZE];
	int top;
}SqStack;
void InitStack(SqStack &s) {
	s.top = -1;
}
bool StackEmpty(SqStack s) {
	if (s.top == -1) {
		return true;
	}
	return false;
}
bool push(SqStack &s, int x) {
	if (s.top == MAX_SIZE - 1) {
		return false;
	}
	s.data[s.top++] = x;
	return true;
}
bool pop(SqStack &s,int x){
	if (s.top == -1) {
		return false;
	}
	s.top--;
	return true;
}
bool GetTop(SqStack s, int &x) {
	if (s.top == -1) {
		return false;
	}
	x = s.data[s.top];
	return true;
}
