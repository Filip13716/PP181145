#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int sumOdd(struct element * list){
    struct element * ptr=list;
    int temp=0;

    while(ptr != NULL){
        if(abs(ptr->x)%2 != 0) temp+=ptr->x;
        ptr=ptr->next;
    }

    return temp;
}

int main()
{
    struct element * list=malloc(sizeof(struct element));
    list->x=4;
    list->next=malloc(sizeof(struct element));
    list->next->x=5;
    list->next->next=malloc(sizeof(struct element));
    list->next->next->x=-13;
    list->next->next->next=NULL;

    printf("%d", sumOdd(list));
    return 0;
}
