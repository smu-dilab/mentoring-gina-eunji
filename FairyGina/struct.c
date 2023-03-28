#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define MEMORY_ALLOC_SUCCESS true
#define MEMORY_ALLOC_FAILURE false
typedef struct _student student; 
struct _student{char *name; int age;};
bool init_student(student *st,char *name, int age){
    char *tmp=(char *)malloc(sizeof(char)*(strlen(name)+1));
    if(tmp==NULL){
        return MEMORY_ALLOC_FAILURE;
    }
    st->name=tmp;
    strcpy(st->name,name);
    st->age=age;
    return MEMORY_ALLOC_SUCCESS;
}
void print_student(student st){
    printf("이름: %s\n나이: %d\n",st.name,st.age); 
}
void free_student(student *st){free(st->name);}
int main(){
    student Gina;
    if(init_student(&Gina,"Gina",24)==MEMORY_ALLOC_FAILURE){
        printf("메모리 동적할당 실패\n");
        exit(-1);
    }
    print_student(Gina);
    free_student(&Gina);
    
    return 0;
}