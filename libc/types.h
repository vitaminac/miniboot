#ifndef TYPES_H
#define TYPES_H

typedef          int   word;
#define                WORD_SIZE     sizeof(word)
#define                WORD_MASK     (WORD_SIZE - 1)
typedef          void* ptr;
typedef unsigned char  byte;

// CPU specific
typedef unsigned int   nat32;
typedef          int   int32;
typedef unsigned short nat16;
typedef          short int16;
typedef unsigned char  nat8;
typedef          char  int8;

typedef          int   bool;
#define                true          1
#define                false         0

#endif