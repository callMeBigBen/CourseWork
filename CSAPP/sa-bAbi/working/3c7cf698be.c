#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_6;              // Tag.BODY
    int* entity_8;              // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_6 = new int(rand()); // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    *entity_8 = entity_9;       // Tag.PTR_DEREF_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER