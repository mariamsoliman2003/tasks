#include <stdio.h>
#include <stdlib.h>
struct item {
char name[10];
float price ,total ;
int quantity;
};
void readItem (struct item *);
void printItem (struct item *);
int main()
{
    struct item itm;
    struct item *pItem;

    pItem = &itm;

    readItem(pItem);

    printItem(pItem);

    return 0;
}

void readItem (struct item *i){
printf("enter product name :\n");
scanf("%s",i->name);
printf("enter price :\n");
scanf("%f",&i->price);
printf("enter quantity :\n");
scanf("%d",&i->quantity);


}
void printItem (struct item *i){
printf("name: %s\n",i->name);
printf("price: %f\n",i->price);
printf("quantity: %d\n",i->quantity);
i->total=i->quantity * i->price;
printf("total amount: %f\n",i->total);
}
