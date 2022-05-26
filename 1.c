#include<stdio.h>
#include<stdlib.h>

struct books
{
    int id;
    char name[20];
    char author[20];
    float price;
};
typedef struct books bk;

void insert(bk* p, int* top)
{
    if((*top)==5)
    {
        printf("Cannot Add\n");
        return;
    }
    (*top)++;
    printf("Enter the details of the books : \n");
    scanf("%d%s%s%f", &(p[(*top)].id), &(p[(*top)].name), &(p[(*top)].author), &(p[(*top)].price));
}

void display(bk* p, int top)
{
    if(top==-1)
    {
        printf("Noting to Display\n");
        return;
    }
    for(int i=top; i>=0; i--)
        printf("%d %s %s %f\n", (p[(top)].id), (p[(top)].name), (p[(top)].author), (p[(top)].price));
}

void delete(bk* p, int* top)
{
    if((*top)==-1)
    {
        printf("Noting to Delete\n");
        return;
    }
    printf("The deleted details are : \n");
    printf("%d %s %s %f\n", (p[(*top)].id), (p[(*top)].name), (p[(*top)].author), (p[(*top)].price));
    (*top)--;
}

int main()
{
    bk s[5];
    int top=-1, n, ch;
    while(1)
    {
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter a choice : ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1 : printf("Enter the number of books : ");
                     scanf("%d", &n);
                     for(int i=0; i<n; i++)
                        insert(s, &top);
                     break;
            case 2 : delete(s, &top); break;
            case 3 : display(s, top); break;
            default : exit(0);
        }
    }
}