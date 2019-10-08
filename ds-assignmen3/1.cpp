#include <stdio.h>
#include <stdlib.h>

#define pf printf
#define sf scanf
#include "double.h"

int main()

{
    int x;
    char ch;
    struct node *head;
    struct node *tail;
    head = tail = NULL;

    do
    {
        pf("\n");
        display(head);
        pf("\n");
        printf("\n 1.insert at begin ");
        pf(" \t 2.display");
        pf("\t 3. display reverse");
        pf("\t 4:insert at end  ");
        pf("\t 5:del from begin");
        pf("\t enter your choice ");

        sf("%d", &ch);
        switch (ch)
        {

        case 1:
            printf("x=");
            sf("%d", &x);
            insert(&head, &tail, x);
            break;

        case 2:
            display(head);
            break;
        case 3:
            displayrev(tail);
            break;

        case 4:
            printf("x=");
            sf("%d", &x);
            insend(&tail, &head, x);
            break;
        case 5:
            del(&head, &tail);
            break;
        case 0:
            exit(0);
            break;
        }

    } while (ch != 0);
    return 0;
}
