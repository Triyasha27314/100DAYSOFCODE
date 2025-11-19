/*Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!
*/
#include <stdio.h>
#include <string.h>

enum Role {ADMIN, USER, GUEST};

int main() {
    char roleInput[20];
    scanf("%s", roleInput);

    if (strcmp(roleInput, "ADMIN") == 0) {
        enum Role r = ADMIN;
        switch(r) {
            case ADMIN: printf("Welcome Admin!\n"); break;
        }
    } else if (strcmp(roleInput, "USER") == 0) {
        enum Role r = USER;
        switch(r) {
            case USER: printf("Welcome User!\n"); break;
        }
    } else if (strcmp(roleInput, "GUEST") == 0) {
        enum Role r = GUEST;
        switch(r) {
            case GUEST: printf("Welcome Guest!\n"); break;
        }
    } else {
        printf("Invalid Role!\n");
    }

    return 0;
}
