/*Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male
*/
#include <stdio.h>

enum Gender {MALE, FEMALE};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;

    int g;
    printf("Enter Gender (0 for MALE, 1 for FEMALE): ");
    scanf("%d", &g);

    p.gender = g;

    if(p.gender == MALE)
        printf("Male\n");
    else
        printf("Female\n");

    return 0;
}
