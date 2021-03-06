#ifndef __ARRAY_H__
#define __ARRAY_H__

#define T Array_T

struct T {
	int length;
	int size;
	char* array;
};

typedef struct T* T;

extern void ArrayRep_init(T array, int length, int size, void * ary);
extern T Array_new(int length, int size);
extern void Array_free(T* array);
extern int Array_length(T array);
extern int Array_size(T array);
extern void* Array_get(T array, int i);
extern void* Array_put(T array, int i, void* elem);
extern void Array_resize(T array, int length);
extern T Array_copy(T array, int length);

#undef T
#endif