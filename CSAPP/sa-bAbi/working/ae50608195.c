#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_9;              // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_9 = new int(rand()); // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    int* entity_0;              // Tag.BODY
    *entity_9 = entity_4;       // Tag.PTR_DEREF_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER