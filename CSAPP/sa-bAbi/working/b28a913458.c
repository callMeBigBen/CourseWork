#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_8;              // Tag.BODY
    int entity_9;               // Tag.BODY
    int* entity_1;              // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    entity_1 = new int(rand()); // Tag.BODY
    *entity_1 = entity_9;       // Tag.PTR_DEREF_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER