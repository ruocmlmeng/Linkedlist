#include <stdio.h>
#include <stdlib.h>

#include "Linkedlist.h"
int main(void)
{
    Node * l = ceate_order_List();
    Print_List(l);
    free(l);
    return 0;
}
