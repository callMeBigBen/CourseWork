#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_9;              // Tag.BODY
    int entity_6;               // Tag.BODY
    int* entity_2;              // Tag.BODY
    entity_9 = new int(rand()); // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    *entity_2 = entity_6;       // Tag.PTR_DEREF_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER