#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_1;              // Tag.BODY
    int entity_2;               // Tag.BODY
    int* entity_8;              // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    entity_8 = new int(rand()); // Tag.BODY
    *entity_1 = entity_2;       // Tag.PTR_DEREF_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER