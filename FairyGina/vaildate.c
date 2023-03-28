#include<stdio.h>
#define MEMORY_VALIDATE_SUCCESS 1
#define MEMORY_VALIDATE_FAILURE 0
int emory_valadate(){

    return MEMORY_VALIDATE_SUCCESS;
    return MEMORY_VALIDATE_FAILURE;
}

int main(){
    int result_validation=memory_validate();
    if(result_validation==MEMORY_VALIDATE_FAILURE)
        printf("메모리 검증 실패\n");
    return 0;
}