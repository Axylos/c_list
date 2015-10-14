#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(int argc, char* argv[]) {
    printf("hey there\n");
    List* list;

    list_init(list, NULL);

    int i = 4;
    int* z;
    int a = 5;
    z = &a;

    list_ins_next(list, NULL, &i);
    //list_ins_next(list, NULL, (void*)z);
    return 0;
}
