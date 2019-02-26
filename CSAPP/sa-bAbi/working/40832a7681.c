#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int* entity_8;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    int* entity_1;              // Tag.BODY
    entity_8 = new int(rand()); // Tag.BODY
    *entity_1 = entity_6;       // Tag.PTR_DEREF_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER