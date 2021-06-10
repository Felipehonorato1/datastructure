#include <stdio.h>
#include <stdlib.h>
#include "doublelist.h"

int main()
{
    No *lhead = NULL;
    insert_top(&lhead, 3);
    insert_top(&lhead, 2);
    insert_top(&lhead, 1);
    insert_top(&lhead, 0);
    insert_end(lhead, 4);
    print_list(lhead);
    printf("List size: %d\n", list_size(lhead));
    remove_top(&lhead);
    print_list(lhead);
    printf("List size: %d\n", list_size(lhead));
    remove_end(lhead);
    print_list(lhead);
    printf("List size: %d\n", list_size(lhead));
    remove_midle(lhead, 2);
    print_list(lhead);
    printf("List size: %d\n", list_size(lhead));
    insert_midle(lhead, 1, 2);
    print_list(lhead);
    printf("List size: %d\n", list_size(lhead));
    clear_list(&lhead);
    printf("List size: %d\n", list_size(lhead));

    return 0;
}