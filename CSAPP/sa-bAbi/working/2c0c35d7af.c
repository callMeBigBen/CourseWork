#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int* entity_1;              // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    entity_1 = new int(rand()); // Tag.BODY
    int* entity_3;              // Tag.BODY
    *entity_3 = entity_9;       // Tag.PTR_DEREF_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER