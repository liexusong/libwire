#ifndef WIRE_VALGRIND_INTERNAL_H
#define WIRE_VALGRIND_INTERNAL_H

#ifdef USE_VALGRIND

#include <valgrind/valgrind.h>
#include <valgrind/memcheck.h>

#else

#define VALGRIND_STACK_REGISTER(start, end)
#define VALGRIND_MAKE_MEM_UNDEFINED(_ptr, _size)

#endif

#endif
