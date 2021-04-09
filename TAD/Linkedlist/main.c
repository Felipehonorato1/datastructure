#include <stdio.h>
#include <stdlib.h>
#include "llist.h"

int main()
{
    Lista *l = cria_lista();
    printf("List is empty: %d \n", llist_is_empty(l));
    insert_on_top(l, 15);
    insert_on_top(l, 30);
    insert_on_top(l, 45);
    insert_end(l, 0);
    print_elements(l);
    printf("Do 15 exists on our List? %d\n", exists(l, 15));
    printf("Removing 15\n");
    remove_item(l, 15);
    printf("Do 15 exists on our List? %d\n", exists(l, 15));
    printf("List size: %d elements\n", list_size(l));
    clear_list(l);
    printf("List cleaned size: %d\n", llist_is_empty(l));
    printf("List is empty: %d \n", llist_is_empty(l));
    Lista *c = cria_lista();
    insert_sorted(c, 1);
    insert_sorted(c, 2);
    insert_sorted(c, 5);
    insert_sorted(c, 4);
    insert_sorted(c, 3);
    print_elements(c);
    clear_list(c);

    return 0;
}