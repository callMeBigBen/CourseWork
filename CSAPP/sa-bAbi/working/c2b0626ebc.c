#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_7;              // Tag.BODY
    int entity_1;               // Tag.BODY
    int* entity_0;              // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    entity_7 = new int(rand()); // Tag.BODY
    *entity_0 = entity_1;       // Tag.PTR_DEREF_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER