#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void list_init(List *list, void(destroy)(void *data)) {
    List* new_list;
    if ((new_list = (List*)malloc(sizeof(List))) != NULL) {
        list = new_list;
        list->head = NULL;
        list->tail = NULL;
        list->destroy = destroy;
        list->size = 0;
    }
}

int list_ins_next(List *list, ListEl *element, void *data) {
    ListEl *new_element;

    if ((new_element = (ListEl*)malloc(sizeof(ListEl))) == NULL) {
        return 1;
    }

    new_element->data = (void*)data;

    if (element == NULL ) {
        if (list->size == 0) {
            list->tail = new_element;
            new_element->next = NULL;
        } else {
            new_element->next = list->head;
        }

        list->head = new_element;
    } else {
        if (element->next == NULL) {
            list->tail = new_element;
        }
        new_element->next = element->next;
        element->next = new_element;
    }

    list->size = list->size++;
    return 0;
}


