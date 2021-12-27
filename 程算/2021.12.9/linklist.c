/*
 * (C)2021 白忠建^_^
 */

/*
 * 链表
 */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef int elem_t;

typedef struct node {
    elem_t data;
    struct node *next;
} node, *nodeptr, *list;

void list_init(list l);
void list_create(list l);
void list_push_front(list l, elem_t e);
elem_t list_pop_front(list l);
void list_destroy(list l);
void list_traverse(list l);
void list_push_back(list l,elem_t e);



#define EOL putchar('\n')
nodeptr tail = NULL;


int main() {
    node head, *list = &head;
    
    list_init(list);
    list_create(list);

    list_push_front(list, 0);
    list_traverse(list);
    EOL;

    int i;
    for (i = 0; i < 4; ++i)
        list_pop_front(list);
    list_traverse(list);
    for(int i = 100; i< 105;i++) 
    {
        list_push_back(list,i);
    }
    EOL;
    
    list_destroy(list);
    
    return 0;
}

static void _error(const char *msg) {
    printf("%s\n", msg);
    exit(1);
}

static nodeptr _make_node(elem_t e) {
    nodeptr p = (nodeptr)malloc(sizeof(node));
    p->data = e;
    p->next = NULL;
    return p;
}

void list_init(list l) {
    l->next = NULL;
    tail = l;
}

void list_push_front(list l, elem_t e) {
    nodeptr p = _make_node(e);
    p->next = l->next;
    l->next = p;

    if(tail == l) 
        tail = p;
}

elem_t list_pop_front(list l) {
    nodeptr p = l->next;
    if (p == NULL)
        _error("list is empty.");

    l->next = p->next;
    elem_t e = p->data;
    free(p);
    return e;
}

void list_create(list l) {
    elem_t i;
    for (i = 10; i > 0; --i)
        list_push_front(l, i);
}

void list_destroy(list l) {
    nodeptr p = l->next, q;
    while (p != NULL) {
        q = p;
        p = p->next;
        free(q);
    }
    //head->next = NULL;
}

void list_traverse(list l) {
    nodeptr p = l->next;
    while (p != NULL) {
        printf("%4d", p->data);
        p = p->next;
    }
}

void list_push_back(list l,elem_t e) {
    nodeptr p = _make_node(e);
    tail ->next = p;
    tail = p;
}