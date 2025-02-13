#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#include "Queue.h"

int main(int argc, char **argv) {
    Queue q;
    q.headPtr = NULL;
    q.tailPtr = NULL;
    q.size = 0;

    int i, x;

    for (i = 1; i < argc; i++) {
        if (strcmp(argv[i], "x") == 0) {
            x = dequeue_struct(&q);
            if (q.size > 0) {
                printf("Dequeuing %d\n", x);
            }
        } else {
            enqueue_struct(&q, atoi(argv[i]));
        }
    }
    return 0;
}

