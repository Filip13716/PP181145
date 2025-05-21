#include <stdio.h>
#include <stdlib.h>

struct Laptop{
    char model[30];
    float price;
};

struct Laptop * initLaptop(char model[], float price){
    struct Laptop * temp=malloc(sizeof(struct Laptop));

    temp->price=price;

    int i;
    for(i=0; model[i]!=0; i++) temp->model[i]=model[i];

    temp->model[i]=0;

    return temp;
}

void showLaptop(struct Laptop l){
    printf("Model laptopa: %s\nCena: %f\n---\n", l.model, l.price);
}

void reducePrice(struct Laptop * l){
    l->price*=0.95;
}

int main()
{
    struct Laptop *l=initLaptop("Asus mega ultra", 1999.99);

    showLaptop(*l);
    reducePrice(l);
    showLaptop(*l);

    return 0;
}
