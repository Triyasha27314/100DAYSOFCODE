/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30
*/
#include <stdio.h>
#include <string.h>

enum Menu {ADD, SUBTRACT, MULTIPLY};

int main() {
    char choice[20];
    int a, b;
    
    scanf("%s %d %d", choice, &a, &b);
    
    if (strcmp(choice, "ADD") == 0) {
        switch(ADD) {
            case ADD: printf("%d\n", a+b); break;
        }
    } else if (strcmp(choice, "SUBTRACT") == 0) {
        switch(SUBTRACT) {
            case SUBTRACT: printf("%d\n", a-b); break;
        }
    } else if (strcmp(choice, "MULTIPLY") == 0) {
        switch(MULTIPLY) {
            case MULTIPLY: printf("%d\n", a*b); break;
        }
    } else {
        printf("Invalid choice\n");
    }
    
    return 0;
}
