#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node * next;
};

void printEven(struct node *list){
    struct node * ptr=list;

    while(ptr != NULL){
        if(abs(ptr->a)%2==0) printf("%d\n", ptr->a);
        ptr=ptr->next;
    }
}

int main()
{
    struct node * list=malloc(sizeof(struct node));
    list->a=0;
    list->next=malloc(sizeof(struct node));
    list->next->a=1;
    list->next->next=malloc(sizeof(struct node));
    list->next->next->a=2;
    list->next->next->next=malloc(sizeof(struct node));
    list->next->next->next->a=3;
    list->next->next->next->next=malloc(sizeof(struct node));
    list->next->next->next->next->a=4;
    list->next->next->next->next->next=NULL;

    printEven(list);

    return 0;
}
