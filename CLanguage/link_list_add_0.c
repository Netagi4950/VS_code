#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct list{
    int data ;
    struct list *next;

}node;
node *newNode(){
    node *x=(node*)malloc(sizeof(node));
    x->next=NULL;
    return x;

}
node *toFront(node *t,node *h){
    t->next=h;
    h=t;
    return h;

}
void displayList(node *p){
    printf("The linked list-\n");
    while (p!=NULL){
        printf("%d->",p->data);
        p=p->next;

    }
    printf("NULL\n");

}
int main(){
    node *head,*p,*temp;
    char yn;
    head=NULL;
    do{
        temp=newNode();
        system("cls");
        printf("Enter data");
        scanf("%d",&temp->data);
        head=toFront(temp,head);
        printf("Whant to enter more(y/n)");
        yn=getch();

    }while (yn=='y'||yn=='Y'||yn==(char)13);
    system("cls");
    displayList(head);
    return 0;
}