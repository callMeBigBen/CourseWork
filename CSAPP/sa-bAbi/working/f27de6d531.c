#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_5;              // Tag.BODY
    entity_5 = new int(rand()); // Tag.BODY
    int entity_9;               // Tag.BODY
    int* entity_2;              // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    *entity_2 = entity_9;       // Tag.PTR_DEREF_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER