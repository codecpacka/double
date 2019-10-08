struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

void insert(struct node **head, struct node **tail, int x)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (*head == NULL)
    {
        *head = *tail = newnode;
    }

    else
    {
        struct node *temp;
        temp = *head;
        *head = newnode;
        newnode->next = temp;
        temp->prev = newnode;
    }
}

void display(struct node *head)
{
    pf("\t \t ");
    if (head == NULL)
    {
        pf("head->NULL");
    }
    else
    {
       
        while (head != NULL)
        {
            printf("%d \t", head->data);
            head = head->next;
        }
    }
}

void displayrev(struct node *tail)
{
    printf("\n rev =");
    while (tail != NULL)
    {

        printf("%d \t", tail->data);
        tail = tail->prev;
    }
}

void insend(struct node **tail, struct node **head, int x)
{

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;
    if (*tail == NULL)
    {
        *head = *tail = newnode;
    }
    else
    {
        struct node *temp;
        temp = *tail;
        (*tail)->next = newnode;
        newnode->prev = *tail;
        *tail = newnode;
    }
}

void del(struct node **head, struct node **tail)
{
    if (*head == *tail)
    {
        *head = *tail = NULL;
    }

    else
    {
        *head = (*head)->next;
        (*head)->prev = NULL;
    }
}
