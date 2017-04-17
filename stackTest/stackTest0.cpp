//栈的链表存储结构,利用有空头结点的头插法实现，没有头结点的头插法直接把Head当成头结点即可（懒得再弄了）
#include<iostream>
using namespace std;
typedef struct StackNode {
	int data;
	struct StackNode *next;
}*StackPoint;
StackPoint CreatLinkNode(StackPoint &Head){
	Head = new StackNode;
	Head->data = NULL;
	Head->next = NULL;
	int x = NULL;
	cin >> x;
	while (x != 999) {
		StackPoint mid = new StackNode;
		mid->data = x;
		mid->next = Head->next;
		Head->next = mid;
		cin >> x;
	}
	return Head;
}
StackPoint push(StackPoint &Head, int p) {
	StackPoint newone = new StackNode;
	newone->data = p;
	newone->next = Head->next;
	Head->next = newone;
	return Head;
}
StackPoint pop(StackPoint &Head,int &mid) {
	if (Head->next != NULL) {
		mid = Head->next->data;
		StackPoint s = new StackNode;
		s = Head->next->next;
		free(Head->next);
		Head->next = s;
		return Head;
	}
	return false;
}
bool StackEmpty(StackPoint Head) {
	if (Head->next != NULL) {
		return false;
	}
	return true;
}
int main() {
	StackNode *Head;
	CreatLinkNode(Head);
	push(Head, 9);
	int mid;
	while (Head->next != NULL) {
		pop(Head,mid);
		cout << mid<<endl;
		system("pause");
	}
	cout << (StackEmpty(Head)? "true":"false") << endl;
	system("pause");
}