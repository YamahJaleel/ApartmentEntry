#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

// Define the number of residents in the apartment
#define NUM_RESIDENTS 10

// Define a structure representing a resident
struct Resident {
    char name[50];
    int apartmentNumber;
    long phoneNumber;
};

// Print residents
void printResidents(struct Resident *residentPtr) {
    printf("| %-20s | %-15s | %-15s |\n", "Name", "Apartment Number", "Phone Number");
    printf("|----------------------|------------------|-----------------|\n");

    for (int i = 0; i < 10; i++) {
        printf("| %-20s | %-16d | %-15ld |\n", residentPtr[i].name, residentPtr[i].apartmentNumber, residentPtr[i].phoneNumber);
    }
}


int main(){


        // Create an array of Resident structures
        struct Resident residents[NUM_RESIDENTS];

        // Initialize a variable to check if user is administrator
        int administratorCheck;

        // When running the program the user will add residents
        // The residents below are for testing

        strcpy(residents[0].name, "Yamah Jaleel");
        residents[0].apartmentNumber = 101;
        residents[0].phoneNumber = 5551234;

        strcpy(residents[1].name, "John Doe");
        residents[1].apartmentNumber = 102;
        residents[1].phoneNumber = 5555678;

        strcpy(residents[2].name, "Jane Smith");
        residents[2].apartmentNumber = 103;
        residents[2].phoneNumber = 5558765;

        strcpy(residents[3].name, "Alice Johnson");
        residents[3].apartmentNumber = 104;
        residents[3].phoneNumber = 5554321;

        strcpy(residents[4].name, "Bob Williams");
        residents[4].apartmentNumber = 105;
        residents[4].phoneNumber = 5559999;

        strcpy(residents[5].name, "Eva Brown");
        residents[5].apartmentNumber = 106;
        residents[5].phoneNumber = 5551111;

        strcpy(residents[6].name, "Michael Davis");
        residents[6].apartmentNumber = 107;
        residents[6].phoneNumber = 5557777;

        strcpy(residents[7].name, "Olivia White");
        residents[7].apartmentNumber = 108;
        residents[7].phoneNumber = 5553333;

        strcpy(residents[8].name, "David Lee");
        residents[8].apartmentNumber = 109;
        residents[8].phoneNumber = 5554444;

        strcpy(residents[9].name, "Sophia Miller");
        residents[9].apartmentNumber = 110;
        residents[9].phoneNumber = 5556666;



        // Print Welcome message
        printf("|====================================================|\n");
        printf("| Welcome to the Apartment Telephone Entry System    |\n");
        printf("| This system allows you to buzz a resident          |\n");
        printf("| living at 1603 housington way                      |\n");
        printf("| If you are administrator Enter the passcode (0)    |\n");
        printf("| when you are prompted below                        |\n");
        printf("| If you are a guest simply enter 1 below            |\n");
        printf("|====================================================|\n");

        sleep(15);


        while (1){


                printf("\n");
                printf("What would you like to do\n");
                printf("1 -> Buzz an Apartment\n");

                scanf("%d", &administratorCheck);

                if (administratorCheck == 1){
                        printf("Buzzing...\n");
                } else if (administratorCheck == 0){
                        printf("Doing something else\n");
                } else {
                        printf("Not Allowed please enter 0 or 1");
                }

        }

        //printf("1 -> Add a Resident\n");
        //printf("2 -> Edit Resident Details\n");
        //printf("3 -> List all Residents\n");
        //printf("4 -> Backup Data\n");
        //printf("");


        //printResidents(residents);




        return 0;
}