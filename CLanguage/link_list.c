#include <stdio.h>
#include <stdlib.h>

struct list {
    int data;
    struct list *next;
};

int main() {
    typedef struct list node;

    node *one, *two, *three;

    one = (node *)malloc(sizeof(node));
    two = (node *)malloc(sizeof(node));
    three = (node *)malloc(sizeof(node));

    one->data = 25;
    two->data = 75;
    three->data = 47;

    one->next = two;
    two->next = three;
    three->next = NULL;

    printf("%d -> %d -> %d -> NULL\n", one->data, one->next->data, one->next->next->data);
    return 0;
}