#include <stdio.h>
#include <stdlib.h>
#include "llist.h"

int main()
{
    No *l = NULL;
    printf("List is empty: %d \n", llist_is_empty(l));
    insert_on_top(&l, 15);
    insert_on_top(&l, 30);
    insert_on_top(&l, 45);
    insert_end(l, 0);
    print_elements(l);
    printf("Do 15 exists on our List? %d\n", exists(l, 15));
    printf("Removing 15\n");
    remove_item(l, 15);
    printf("Do 15 exists on our List? %d\n", exists(l, 15));
    printf("List size: %d elements\n", list_size(l));
    printf("Clearing list\n");
    clear_list(&l);
    printf("List size: %d elements\n", list_size(l));
    return 0;
}