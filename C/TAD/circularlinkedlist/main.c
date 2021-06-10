#include <stdio.h>
#include <stdlib.h>
#include "circular.h"

int main()
{
    No *lhead = NULL;
    insert_top(&lhead, 3);
    insert_top(&lhead, 2);
    insert_top(&lhead, 1);
    insert_end(lhead, 4);
    print_list(lhead);
    printf("List size: %d\n", list_size(lhead));
    remove_top(&lhead);
    print_list(lhead);
    printf("List size: %d\n", list_size(lhead));
    remove_end(lhead);
    print_list(lhead);
    printf("List size: %d\n", list_size(lhead));
    clear_list(&lhead);

    return 0;
}