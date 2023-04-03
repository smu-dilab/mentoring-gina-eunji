#include <stdio.h>

#define MEMORY_VALIDATE_SUCCESS 1
#define MEMORY_VALIDATE_FAILURE 0

int memory_validate (void)
{
    // 메모리 검증 결과가 성공하면
    // if ()
    return MEMORY_VALIDATE_SUCCESS;

    // 메모리 검증 결과가 실패하면
    // else
    return MEMORY_VALIDATE_FAILURE;
}

int main (void)
{
    int result_validation = memory_validate();

    if (result_validation == MEMORY_VALIDATE_FAILURE)
    {
        printf("메모리 검증 실패\n");
    }

    return 0;
}






// 애플리케이션 프로그램을 작성하는 경우에는
// 반환형을 void로 작성하면 안됩니다

// main 함수의 반환값은 운영체제로 갑니다
// 이 프로그램을 실행해서 관리하는 부모 프로세스가
// 해당 프로세스가 정상 종료되었는지 비정상 종료되었는지 파악하는
// 용도로 파악합니다.