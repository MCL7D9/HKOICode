#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef unsigned char uc;

struct pos {
        uc x;
        ux y;
}

struct coord {
        uc x;
        uc y;
        struct coord *next;
};

struct map {
        int size;
        struct coord *start;
}

struct map *create_query()
{
        struct map *tmp;
        tmp = malloc(sizeof(*tmp));
        tmp.size = 0;
        tmp.start = NULL;
        return tmp;
}

void enq(struct map *r, pos cod)
{
        struct coord *tmp;
        tmp = r.start;
        while (tmp.next != NULL) tmp = tmp.next;
        tmp.next = malloc(sizeof(*tmp));
        if (tmp.next == NULL)
                goto MALLOCFAILURE;
        tmp.next -> next = NULL;
        tmp.x = pos.x;
        tmp.y = pos.y;
        ++r.size;
}

struct pos *deq(struct map *r)
{
        struct pos *tmp;
        tmp.x = r.start -> x;
        tmp.y = r.start -> y;
        r.start = r.start -> next;     
        --r.size;
        return tmp;
}

bool is_empty(struct map)
{
        return (map.size == 0);
}


struct pos bfs(bool *maze, uc h, uc w)
{
        struct pos *parents = {NULL};
        parents = malloc(sizeof(pos) * h * w);
        if (parents == NULL)
                goto MALLOCFAILURE;
        for (uc i = 0; i < h; i++) {
                for (uc j = 0; j < w, j++) {
                        (parents + (w * i) + j) -> x = NULL;
                        (parents + (w * i) + j) -> y = NULL;
                }
        }
        struct map *q = create_query();
        struct pos current, target, tmp;
        target.x = w - 1;
        target.y = h - 1;
        current.x = 0;
        current.y = 0;
        enq(q, current.x, current,y);
        while (!is_empty(q)) {
                current = deq();
                if (current.x == target.x && current.y == target.y)
                        break;
                tmp.x = current.x + 1;
                tmp.y = current.y;
                if (*(maze + (tmp.y * w) + tmp.x) && x <= w) {
                        enq(q, tmp);
                        *(parents + (tmp.y * w) + tmp.x) = current;
                }
                tmp.x = current.x;
                tmp.y = current.y + 1;
                if (*(maze + (tmp.y * w) + tmp.x) && y <= h) {
                        enq(q, tmp);
                        *(parents + (tmp.y * w) + tmp.x) = current;
                }
        }
        struct pos now;
        struct pos path[20] = {NULL};
        uc i = 19;
        now = *(parents + (current.y * w) + current.x);
        while (now != NULL) {
                path[i] = now;
                --i;
                now = *(parents + (now.y * w) + now.x);
        }
        for (i = 0, struct pos tmp; i < 10; i++) {
                tmp = path[i];
                path[i] = path[19 - i];
                path[19 - i] = tmp;
        }
        return path;
}

int main()
{
        uc h, w;
        scanf("%hhu %hhu", &h, &w);
        bool *maze = NULL;
        maze = malloc(sizeof(*maze) * h *w);
        if (maze == NULL)
                goto MALLOCFAILURE;
        while (getchar() != '\n');
        for (uc i = 0; i < h; i++) {
                for (uc j = 0; j < w; j++)
                        *(maze + (w * i) + j) = (getchar() == '.') ? true : false;
                getchar();
        }
        struct pos road;
        road = bfs(maze, h, w);
        
        return 0;
MALLOCFAILURE:
        printf("DYNAMIC MEMORY ALLOCATION FAILED\n");
        return 0;
}
