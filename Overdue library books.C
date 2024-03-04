/* C program to calculate library overdue charges
Date March 1 2024
Compiled by Emrys */

#include <stdio.h>

int main() {
   int book_id, due_date, return_date, days_overdue, fine_rate,fine_amount;

   printf("Enter book ID: ");
   scanf("%d", &book_id);
   printf("Enter due date: ");
   scanf("%d", &due_date);
   printf("Enter return date: ");
   scanf("%d", &return_date);

   // Calculate days overdue
   days_overdue = return_date - due_date;

   if (days_overdue <= 7) {
       fine_rate = 20;
   } else if (days_overdue <= 14) {
       fine_rate = 50;
   } else {
       fine_rate = 100;
   }

   // Calculate fine amount
   fine_amount = days_overdue * fine_rate;

   printf("\nBook ID: %d\n", book_id);
   printf("Due date: %d\n", due_date);
   printf("Return date: %d\n", return_date);
   printf("Days overdue: %d\n", days_overdue);
   printf("Fine rate: Ksh %d\n", fine_rate);
   printf("Fine amount: Ksh %d\n", fine_amount);

   return 0;
}