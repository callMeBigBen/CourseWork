#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_0;              // Tag.BODY
    entity_0 = new int(rand()); // Tag.BODY
    int entity_2;               // Tag.BODY
    int* entity_3;              // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    *entity_3 = entity_2;       // Tag.PTR_DEREF_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER