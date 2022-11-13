#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{

    int id;
    struct node *next;

}*head;

void createlist(int n)
{
    struct node *current, *newnode;
    int value,i=0;
    head = (struct node*) malloc(sizeof(struct node));
    cout << "Enter value no 1 : ";
    cin >> value;

    head->id=value;
    head->next=NULL;

    current=head;

    for(i=1 ; i<n ; i++)
    {

        newnode = (struct node*) malloc(sizeof(struct node));
        printf("Enter value no %d: ",i+1);
        cin >> value;

        newnode->id=value;
        newnode->next=NULL;

        current->next = newnode;
        current=newnode;
        current->next=NULL;

    }

}

void InsertAtPos(int pos){
    int value;
    struct node *current,*newnode;
    current=head;



    for(int i=1 ; i<pos-1 ; i++)
    {

        ///previous=current;
        current = current->next;

    }


    cout << "Enter the value you want to insert : ";
    cin>>value;

    newnode = (struct node*) malloc(sizeof(struct node));
    newnode->id=value;

    newnode->next=current->next;
    current->next=newnode;


}


void InsertAtEnd(){
    int value;
    struct node *current, *newnode;
    current=head;
    newnode = (struct node*) malloc(sizeof(struct node));

    while(current->next!=NULL)
    {

        current=current->next;

    }
    //cout << current->next << endl;

    cout << "Enter the value you want to insert at the end: ";
    cin>>value;
    newnode->id=value;

    current->next=newnode;
    newnode->next=NULL;



}

void display(){

    struct node *current;
    current=head;
    while(current!=NULL)
    {

        cout << current->id << endl;
        current = current -> next;

    }

}

int main()
{
    int n,pos;
    cout << "How many node is i your linked list? : ";
    cin >> n;
    createlist(n);
    display();

    cout << "In which position do you want to enter the node : ";
    cin >> pos;     /// 3

    InsertAtPos(pos);
    display();

    InsertAtEnd();
    display();

}


