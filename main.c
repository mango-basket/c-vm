#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define SP 8
#define FP 9

#define MEM_SIZE 0x10000

typedef uint8_t u8;
typedef uint16_t u16;

typedef u16 RegFile[10];
typedef u8 Memory[MEM_SIZE];

int main(void) {
  RegFile reg_file;
  Memory mem;

  return 0;
}
