#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct list{
    int data;
    struct list *next;
    
}node ;
int main(){
    node *head ,*tail,*temp;
    char yn;
    head=tail=NULL;
    do{
        temp=(node *)malloc(sizeof(node));
        temp->next=NULL;
        system ("cls");
        printf ("Enter data:");
        scanf("%d",&temp->data);
        if (head==NULL)
            head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        printf ("Want to enter more element(Y/N):");
        yn=getch();

    }
    while(yn=='y'||yn=='Y'||yn==(char)13);
        system("cls");
        printf("The link list-\n");
        temp=head;
    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;

    }
    printf("NULL\n");
    return 0;

}