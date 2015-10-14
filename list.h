#ifndef LIST_H
#define LIST_H

typedef struct ListEl_ {
    void *data;
    struct ListEl_ *next;
} ListEl;

typedef struct List_ {
    void (*destroy)(void *data);
    ListEl *head;
    ListEl *tail;
    int size;
} List;

void list_init(List *list, void (*destroy)(void *data));

int list_ins_next(List *list, ListEl *element, void *data);

#endif


