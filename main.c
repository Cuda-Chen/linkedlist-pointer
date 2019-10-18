#include <stdio.h>
#include <stdbool.h>

struct List_t
{
    int val;
    struct List_t *head;
    struct List_t *next;
};

int makeList(struct List_t *list)
{
    list = malloc(sizeof(struct List_t));
    if(!list)
    {
        return 1; // list_makefail
    }
    else
    {
        return 0; // list_success
    }
}

bool isEmpty(struct List_t *list)
{
    return (list->head == NULL);
}

int main()
{
    int ret;

    struct List_t *testList;
    ret = makeList(testList);
    printf("make list is %d\n", ret);

    ret = isEmpty(testList);
    printf("list is empty : %s\n", ret ? "true" : "false");

    return 0;
}
