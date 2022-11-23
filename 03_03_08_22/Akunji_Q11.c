/*11. WAP to store n employee’s data such as employee name, gender,
designation, department, basic pay. Calculate the gross pay of each
employees as follows:
Gross pay = basic pay + HR + DA
HR=25% of basic and DA=75% of basic.*/

#include<stdio.h>
#include<string.h>

struct employee
{
    char name[30];
    char gender[30];
    char designation[30];
    char department[30];
    int basic_pay;
    int gross_pay;
};
int gross_pay_counter(int salary)
{
    return salary + .25 * salary + .75 * salary;
}

int main()
{
    int n;
    printf("\nEnter the number of employee: ");
    scanf("%d", &n);
    struct employee emp[n];
    for(int k = 0; k < n; k++)
    {
        printf("\nEnter Employee-%d's name: ", k+1);
        scanf("%s", &emp[k].name);
        printf("Enter Employee-%d's Gender: ", k+1);
        scanf("%s", &emp[k].gender);
        printf("Enter Employee-%d's Designation: ", k+1);
        scanf("%s", &emp[k].designation);
        printf("Enter Employee-%d's Department: ", k+1);
        scanf("%s", &emp[k].department);
        printf("Enter Employee-%d's Basic Salary: ", k+1);
        scanf("%d", &emp[k].basic_pay);
    }
    for(int i = 0; i < n; i++)
    {
        emp[i].gross_pay = gross_pay_counter(emp[i].basic_pay);
    }
    printf("\n\n");
    for(int k = 0; k < n; k++)
    {
        printf("\n\nName: %s\nGender\t: %s\nDesigntion: %s\nDepartment: %s\nBasic Salary: %d\nGross Salry: %d", emp[k].name, emp[k].gender, emp[k].designation, emp[k].department, emp[k].basic_pay, emp[k].gross_pay);
    }
    return 0;
}