#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_7;              // Tag.BODY
    int entity_5;               // Tag.BODY
    int* entity_3;              // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    entity_7 = new int(rand()); // Tag.BODY
    *entity_3 = entity_5;       // Tag.PTR_DEREF_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER