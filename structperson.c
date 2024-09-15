
/* strucperson.c */

#include <stdio.h>
#include <string.h>

struct person {
    char firstName[32];
    char lastName[32];
    int age;
};

int main() {
    struct person created;

    printf("Write the name of the person:\n");
    fflush(stdout);
    scanf("%31s", created.firstName);

    printf("Write the last name of the person:\n");
    fflush(stdout);
    scanf("%31s", created.lastName);

    printf("Write the age of the person:\n");
    fflush(stdout);
    scanf("%d", &created.age);

    printf("%s %s age %d\n", created.firstName, created.lastName, created.age);

    return 0;
}
