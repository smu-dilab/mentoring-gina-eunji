#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// C99부터 bool 사용
#include <stdbool.h>

#define MEMORY_ALLOC_SUCCESS    true
#define MEMORY_ALLOC_FAILURE    false

typedef struct _student student;
struct _student
{
    char *name;
    int age;
};

bool init_student(student *st, char *name, int age)
{
    char *tmp = (char *)malloc(sizeof(char) * (strlen(name) + 1));

    if (tmp == NULL)
    {
        return MEMORY_ALLOC_FAILURE;
    }

    st->name = tmp;
    strcpy(st->name, name);

    st->age = age;

    return MEMORY_ALLOC_SUCCESS;
}

void print_student(student st)
{

    printf("이름: %s\n", st.name);
    printf("나이: %d\n", st.age);
}

void free_student(student *st)
{
    free(st->name);
}

int main(void)
{
    student dongmin;

    if (init_student(&dongmin, "DongMin", 24) == MEMORY_ALLOC_FAILURE)
    {
        printf("메모리 동적 할당 실패\n");
        exit(-1);
    }

    print_student(dongmin);

    free_student(&dongmin);
    return 0;
}