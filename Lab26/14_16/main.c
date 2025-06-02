#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int sumNeg(struct element * list){
    struct element * ptr=list->next;
    int temp=0;

    while(ptr != NULL){
        if(ptr->x<0) temp+=ptr->x;
        ptr=ptr->next;
    }

    return temp;
}

int main()
{
    struct element * list=malloc(sizeof(struct element));
    list->next=malloc(sizeof(struct element));
    list->next->x=-4;
    list->next->next=malloc(sizeof(struct element));
    list->next->next->x=5;
    list->next->next->next=malloc(sizeof(struct element));
    list->next->next->next->x=-12;
    list->next->next->next->next=NULL;
    printf("%d", sumNeg(list));
    return 0;
}
