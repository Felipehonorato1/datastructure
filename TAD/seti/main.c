#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "seti.h"

int main()
{
    No *llhead = NULL;
    No *qlhead = NULL;
    Seti *l = create_seti(llhead);
    Seti *q = create_seti(qlhead);

    insert_seti(&l, 0);
    insert_seti(&l, 1);
    printf("List[1]: \n");
    print_seti(l);
    printf("List size: %d\n", seti_size(l));
    insert_seti(&q, 1);
    insert_seti(&q, 2);
    insert_seti(&q, 3);

    printf("List[2]: \n");
    print_seti(q);
    printf("List size: %d\n", seti_size(q));
    Seti *un = uniao(l, q);
    printf("União: \n");
    print_seti(un);
    printf("Intersecção: \n");
    Seti *inter = intersec(l, q);
    print_seti(inter);
    printf("Are setis (l,l) equal? R: %d\n", are_equal(l, l));
    return 0;
}
