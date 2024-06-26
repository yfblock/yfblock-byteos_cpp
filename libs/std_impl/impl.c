#include <stdint.h>
#include <stddef.h>

/**
 * Get the length of the string
 * @param s The string will be handled.
 * @return The length of the string s.
 */
size_t strlen (const char *s) {
    register size_t len = 0;
    register uintptr_t buffer = (uintptr_t)s;
    for(;*(char *)buffer != '\0'; buffer++)len++;
    return len;
}

/**
 * Set the memory range between s-(s+n) with c
 * @param s The start address of the memory range
 * @param c The value will be filled with
 * @param n The size of the memory range will be set.
 * @return The original address of the memory range. equals to param s
 */
void *memset (void *s, int c, size_t n) {
    register uintptr_t buffer = (uintptr_t)s;
    for(;n-- > 0;buffer++) *(char *)buffer = (char)c;
    return s;
}
