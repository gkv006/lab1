#ifndef RINGINFO_H
#define RINGINFO_H
#include <stdlib.h>
#include <stdbool.h>
typedef struct RingInfo{
    size_t size;
    void *zero;
    void *one;
    void *(*sum)(void *, void *);
    void *(*multiply)(void *, void *);
    void *(*subtruct)(void *, void *);
    void *(*input)();
    void (*print)(void *v);
}RingInfo;
RingInfo *create(size_t size,
        void *zero,
        void *one,
        void* (*subtruct)(void*,void*),
        void* (*sum)(void *,void*),
        void* (*multiply)(void *, void*),
        void* (*input)(),
        void (*print)(void *v));
bool Equals_of_Ring(RingInfo* ring1,RingInfo* ring2);
#endif //RINGINFO_H
