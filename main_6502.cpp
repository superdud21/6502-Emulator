#include <stdio.h>
#include <stdlib.h>


struct CPU
 {
    using Byte = unsigned char;
    using Word = unsigned short;

    //Program Counter
    Word PC;

    //Stack Pointer
    Word SP;

    //Registers
    Byte A, X, Y;
 };

int main()
 {

    return 0;
 }