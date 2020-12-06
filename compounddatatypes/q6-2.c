//
// Created by gusga on 06/12/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define str_len 17
#define num_of_employees 3

typedef struct{
    char* name;
    char* surname;
    int id;
    float salary;

}employee;

void bubble_sort_id(employee *x, int limit_of_array)
{
    for (int i = 0; i < limit_of_array - 1; i++){

        for (int j = 0; j < limit_of_array - 1 - i; j++){

            if ( x[j].id > x[j+1].id ){

                employee temp = x[j+1];
                x[j+1] = x[j];
                x[j] = temp;

            }

        }

    }

//
//    Was trying to print here but it didn't work!
//
//    for (int i = 0; i < num_of_employees; i++)
//        printf("first name: %s, surname: %s, id: %d, salary: %.2f\n",employee[i].name,employee[i].surname,employee[i].id,employee[i].salary);

}

void bubble_sort_surname(employee *x, int limit_of_array) {

    for (int i = 0; i < limit_of_array - 1; i++){

        for (int j = 0; j < limit_of_array - 1 - i; j++) {

            if (strcmp( x[j].surname , x[j+1].surname ) > 0){

                    employee temp = x[j+1];
                    x[j+1] = x[j];
                    x[j] = temp;

            }

        }

    }

}

    int main () {

    setvbuf(stdout, NULL, _IONBF, 0);

    employee* employees = malloc(num_of_employees * sizeof *employees);
    for (int i = 0; i < num_of_employees; i++){

        employees[i].name=(char*)malloc(sizeof(char*));
        printf("\nType the name of employee %d:", i+1);
        scanf("%s",employees[i].name);

        employees[i].surname=(char*)malloc(sizeof(char*));
        printf("\nType the surname of employee %d:", i+1);
        scanf("%s",employees[i].surname);

        printf("\nType the id of employee %d:", i+1);
        scanf("%d",&employees[i].id);

        printf("\nType the salary of employee %d:", i+1);
        scanf("%f",&employees[i].salary);
    }

    printf("\n------------------ \n");
    printf("List of data entered unsorted: \n");

    for (int i = 0; i < num_of_employees; i++)
        printf("%d). first name: %s, surname: %s, id: %d, salary: %.2f\n", i, employees[i].name, employees[i].surname, employees[i].id, employees[i].salary);



    bubble_sort_id(employees, num_of_employees);

    printf("\n------------------ \n");
    printf("now sorted by ID:\n");



    for (int i = 0; i < num_of_employees; i++)
        printf("%d). first name: %s, surname: %s, id: %d, salary: %.2f\n", i, employees[i].name, employees[i].surname, employees[i].id, employees[i].salary);


    bubble_sort_surname(employees, num_of_employees);

    printf("\n------------------ \n");
    printf("now sorted by last name:\n");

    for (int i = 0; i < num_of_employees; i++)
        printf("%d). first name: %s, surname: %s, id: %d, salary: %.2f\n",i, employees[i].name, employees[i].surname, employees[i].id, employees[i].salary);


    return (0);

}