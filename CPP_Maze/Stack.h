#pragma once
struct node
{
	/* data */
	int x;
	int y;
	char direction;
	node* next;
};

class Stack
{
private:
	/* data */
	node* head;

private:
	void push(int xx, int yy, char ddirection);
	node* pop(int& xx, int& yy);
	void print();

public:
	Stack(/* args */);
	~Stack();
};

