#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int whereEven(struct element * list){
    if(list==NULL) return NULL;

    struct element * ptr=list;
    int temp=NULL;

    for(int i=0; ptr!=NULL; i++){
        if(abs(ptr->x)%2==0) temp=i;
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
    list->next->next->x=-12;
    list->next->next->next=NULL;

    printf("%d", whereEven(list));
    return 0;
}
