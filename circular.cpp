#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node *prev;
};
void display(struct Node *node)
{
    Node *temp;
    temp=node;
	while(node->next!=temp)
	{
		cout<<(node->data)<<" ";
		node=node->next;

	}
	cout<<(node->data);
	return;
}



int main()
{
	struct Node *head=NULL;
	struct Node *node2 =NULL;
	struct Node *node3 =NULL;
	head =(struct Node*)malloc(sizeof(struct Node*));
	node2 =(struct Node*)malloc(sizeof(struct Node*));
	node3=(struct Node*)malloc(sizeof(struct Node*));

	head->data=10;
	head->prev=NULL;
	head->next=node2;



	node2->data=20;
	node2->prev=head;
	node2->next=node3;



	node3->data=40;
	node3->prev=node2;
	node3->next=head;

	display(head);
	return 0;
}
