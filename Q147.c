/*Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
*/
#include <stdio.h>

struct Employee 
{
    char name[50];
    int id;
    float salary;
};

int main() 
{
    struct Employee emp, readEmp;
    FILE *fp;

    printf("Enter Employee Details (Name ID Salary): ");
    scanf("%s %d %f", emp.name, &emp.id, &emp.salary);

    fp = fopen("employee.dat", "wb");
    if(fp == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nData written to employee.dat successfully!\n");

    fp = fopen("employee.dat", "rb");
    if(fp == NULL) 
    {
        printf("Error opening file for reading!\n");
        return 1;
    }
    fread(&readEmp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nData read from file:\n");
    printf("Name: %s\nID: %d\nSalary: %.2f\n",
           readEmp.name, readEmp.id, readEmp.salary);

    return 0;
}
