#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MEMORY_ALLOC_SUCCESS true
#define MEMORY_ALLOC_FAILURE false

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
    printf("name: %s\n", st.name);
    printf("age: %d\n", st.age);
}

void free_student(student *st)
{
    free(st->name);
}

int main()
{
    student eunji;

    if (init_student(&eunji, "eunji", 22) == MEMORY_ALLOC_FAILURE)
    {
        printf("fail\n");
        exit(-1);
    }

    print_student(eunji);

    free_student(&eunji);

    return 0;
}