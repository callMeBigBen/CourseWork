#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int* entity_2;              // Tag.BODY
    int entity_7;               // Tag.BODY
    int* entity_5;              // Tag.BODY
    entity_2 = new int(rand()); // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    *entity_5 = entity_7;       // Tag.PTR_DEREF_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER