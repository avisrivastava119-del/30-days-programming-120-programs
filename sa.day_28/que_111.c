// This is que_111.c inside sa.day_28
// QUES_111 : Write a program to create ticket booking system.

#include <stdio.h>
int main() {
    int totalSeats = 50;
    int bookedSeats = 0;
    int choice, seats;
    do {
        printf("\n----- Ticket Booking System -----\n");
        printf("1. Check Available Seats\n");
        printf("2. Book Tickets\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Available Seats: %d\n", totalSeats - bookedSeats);
                break;
            case 2:
                printf("Enter number of seats to book: ");
                scanf("%d", &seats);
                if(seats <= (totalSeats - bookedSeats)) {
                    bookedSeats += seats;
                    printf("Booking Successful!\n");
                    printf("Seats Booked: %d\n", seats);
                    printf("Remaining Seats: %d\n", totalSeats - bookedSeats);
                } else {
                    printf("Sorry! Only %d seats are available.\n",
                           totalSeats - bookedSeats);
                }
                break;
            case 3:
                printf("Thank you for using the Ticket Booking System.\n");
                break;
             default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 3);
    return 0;
}