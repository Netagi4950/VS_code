#include <stdio.h>
#include<stdlib.h>
typedef struct list{
    int data;
    struct list *next;
}node;
int main(){
    node *head,*tail,*temp;
    int n,i;
    head=tail=NULL;
    printf ("How many nodes you want: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        temp=(node *)malloc(sizeof(head));
        temp->next=NULL;
        system("cls");
        printf ("Enter data %d:",i);
        scanf("%d",&temp->data);
        if (head==NULL)
            head=tail =temp;
        else{
            tail->next=temp;
            tail=temp;
        }
    }
    system ("cls");
    printf("The linked list-\n");
    temp=head;
    while (temp!=NULL){
        printf ("%d->",temp->data);
        temp=temp->next;

    }
    printf ("NULL\n");
    return 0;
    
}