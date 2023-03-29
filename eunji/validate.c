#include <stdio.h>
#define MEMORY_VALIDATE_SUCCESS 1
#define MEMORY_VALIDATE_FAILUER 0

int memory_validate()
{
    //if ()
    return MEMORY_VALIDATE_SUCCESS;
    //if ()
    return MEMORY_VALIDATE_FAILUER;
}

int main()
{
    int result_validation = memory_validate();

    if (result_validation == MEMORY_VALIDATE_FAILUER)
    {
        print("fail");
    }

    return 0;
}