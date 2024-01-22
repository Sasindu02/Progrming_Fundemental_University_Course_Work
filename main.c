#include <stdio.h>
#include <stdlib.h>
#include <string.h> //do the operation related to data type string
#include <time.h>   //date & time
#include <conio.h>  //color
#include <ctype.h>  //uppercase lowercase
#define max 50      //give maximum bit size

// away to group several related variables into one place
struct myStructure
{
    char ShopName[max], ShopAddress[];
};

void CustomerDetails(char name[], char date[])
{
     system ("color 0B");
     printf("------------------------------------------------------------------------------------------------\n");
     printf("  ####   #     #    #    ######  #######    #######    #     #####  #     # ### ####### #     # \n");
     printf(" #       ##   ##   # #   #     #    #       #         # #   #       #     #  #  #     # ##    # \n");
     printf(" #       # # # #  #   #  #     #    #       #        #   #  #       #     #  #  #     # # #   # \n");
     printf("  ####   #  #  # #     # ######     #       #####   #     #  #####  #######  #  #     # #  #  # \n");
     printf("      #  #     # ####### #   #      #       #       #######       # #     #  #  #     # #   # # \n");
     printf("      #  #     # #     # #    #     #       #       #     #       # #     #  #  #     # #    ## \n");
     printf(" #####   #     # #     # #     #    #       #       #     #  #####  #     # ### ####### #     # \n");
     printf("------------------------------------------------------------------------------------------------\n");


    printf("\n\nCashier Name:");
    scanf("%s", name);

//strcpy use to copy one string to another string
//strcat use to combined more strings

    char example[100];
    strcpy(example, "Smart");
    strcat(example, " Fashion");
    strcat(example, " Cloths");
    printf("%s\n", example);
}

void displayProduct(int *price, int *price2, int *price3, int *price4,
                    int *discount, int *discount2, int *discount3, int *discount4,
                     int *finalPrice, int *finalPrice2, int *finalPrice3, int *finalPrice4,
                     int *quantity, int *quantity2, int *quantity3, int *quantity4)
{
// input simple letters
        char inputStr1[] = "t-shirt";
        char outputStr1[20];
// Convert and copy input string to output string
        for (int i = 0; inputStr1[i]; i++)
        {
            outputStr1[i] = toupper(inputStr1[i]);
        }

// Display capital formatted output
        printf("\n\n------------------------------------------------------------------------");
        printf("\n--------------------------------------------------------------------------");
        printf("\n                                %s                                      ", outputStr1);
        printf("\n--------------------------------------------------------------------------");
        printf("\n--------------------------------------------------------------------------\n");

        printf("\nEnter unit price of the Tshirts:");
        scanf("%d", price);

        printf("Enter the discount(%%) of the Tshirt:");
        scanf("%d", discount);

        printf("Enter the quantity1 of T-shirts:");
        scanf("%d", quantity);

        int discountPrice = (*price * (*discount) * (*quantity)) / 100;
        *finalPrice = (*price * (*quantity)) - discountPrice;

        printf("\nDiscount price is: %d\n", discountPrice);
        printf("Final price is: %d\n", *finalPrice);

        printf("+------------------------------------------------------------------------------+\n");
        printf("| Description|   Qty                 | unit price            |  Amount        |\n");
        printf("+-------------+-----------------------+-----------------------+----------------+\n");
        printf("| T-shirt     |%d                     |%d                  |%d            |\n", *quantity, *price, *finalPrice);
        printf("+-------------+-----------------------+-----------------------+----------------+\n");


        char inputStr2[] = "trousers";
        char outputStr2[20];
        for (int i = 0; inputStr2[i]; i++)
        {
            outputStr2[i] = toupper(inputStr2[i]);
        }

        printf("\n\n------------------------------------------------------------------------");
        printf("\n--------------------------------------------------------------------------");
        printf("\n                                %s                                      ", outputStr2);
        printf("\n--------------------------------------------------------------------------");
        printf("\n--------------------------------------------------------------------------\n");


        printf("\nEnter unit price of the Trousers:");
        scanf("%d", price2);

        printf("Enter the discount(%%) of the Trouser:");
        scanf("%d", discount2);

        printf("Enter the quantity of Trouser:");
        scanf("%d", quantity2);

        int discountPrice2 = (*price2 * (*discount2) * (*quantity2)) / 100;
        *finalPrice2 = (*price2 * (*quantity2)) - discountPrice2;


        printf("\nDiscount price is: %d\n", discountPrice2);
        printf("Final price is: %d\n", *finalPrice2);

        printf("+------------------------------------------------------------------------------+\n");
        printf("| Description|   Qty                 | unit price            |  Amount        |\n");
        printf("+-------------+-----------------------+-----------------------+----------------+\n");
        printf("| Trouser     |%d                      |%d                    |%d            |\n", *quantity2, *price2, *finalPrice2);
        printf("+-------------+-----------------------+-----------------------+----------------+\n");


        char inputStr3[] = "blouse";
        char outputStr3[20];

        for (int i = 0; inputStr3[i]; i++)
        {
            outputStr3[i] = toupper(inputStr3[i]);
        }

        printf("\n\n------------------------------------------------------------------------");
        printf("\n--------------------------------------------------------------------------");
        printf("\n                                %s                                      ", outputStr3);
        printf("\n--------------------------------------------------------------------------");
        printf("\n--------------------------------------------------------------------------\n");


        printf("Enter unit price of the blouse:");
        scanf("%d", price3);

        printf("Enter the discount(%%) of the blouse:");
        scanf("%d", discount3);

        printf("Enter the quantity of blouse:");
        scanf("%d", quantity3);

       int discountPrice3 = (*price3 * (*discount3) * (*quantity3)) / 100;
        *finalPrice3 = (*price3 * (*quantity3)) - discountPrice3;

        printf("Discount price is: %d\n", discountPrice3);
        printf("Final price is: %d\n", *finalPrice3);

        printf("+------------------------------------------------------------------------------+\n");
        printf("| Description|   Qty                 | unit price            |  Amount        |\n");
        printf("+-------------+-----------------------+-----------------------+----------------+\n");
        printf("| Blouse       |%d                     |%d                     |%d              |\n", *quantity3, *price3, *finalPrice3);
        printf("+-------------+-----------------------+-----------------------+----------------+\n");

        char inputStr4[] = "shorts";
        char outputStr4[20];

        for (int i = 0; inputStr4[i]; i++)
        {
            outputStr4[i] = toupper(inputStr4[i]);
        }

        printf("\n\n------------------------------------------------------------------------");
        printf("\n--------------------------------------------------------------------------");
        printf("\n                                %s                                      ", outputStr4);
        printf("\n--------------------------------------------------------------------------");
        printf("\n--------------------------------------------------------------------------\n");


        printf("\nEnter unit price of the shorts:");
        scanf("%d", price4);

        printf("Enter the discount(%%) of the shorts:");
        scanf("%d", discount4);

        printf("Enter the quantity of shorts:");
        scanf("%d", quantity4);

        int discountPrice4 = (*price4 * (*discount4) * (*quantity4)) / 100;
        *finalPrice4 = (*price4 * (*quantity4)) - discountPrice4;

        printf("Discount price is: %d\n", discountPrice4);
        printf("Final price is: %d\n", finalPrice4);

        printf("+------------------------------------------------------------------------------+\n");
        printf("| Description|   Qty                 | unit price            |  Amount        |\n");
        printf("+-------------+-----------------------+-----------------------+----------------+\n");
        printf("| Short       |%d                      |%d                    |%d            |\n", *quantity4, *price4, *finalPrice4);
        printf("+-------------+-----------------------+-----------------------+----------------+\n");
}

void BillSummary(char name[], char date[], int *price1, int *price2, int *price3, int *price4,
                 int *finalPrice1, int *finalPrice2, int *finalPrice3, int *finalPrice4,
                 int *quantity1, int *quantity2, int *quantity3, int *quantity4)
{
    int total = *finalPrice1 + *finalPrice2 + *finalPrice3 + *finalPrice4;

//get time and date
    time_t rawtime;
    struct tm *info;
    char time1[80];
    time(&rawtime);
    info = localtime(&rawtime);
    strftime(time1, 80, "%x - %I:%M%p", info);

//file opening to save cashier name and date time
    FILE*f1;
    f1=fopen("CashierName.txt","a");
    fprintf(f1,"%s\t%s\n",name,time1);

//system clear
    system("CLS");
    printf("\n\n ");
    printf("+----------------------------------------------------------------------------------------+\n");
    printf("######  ### #       #           #####  #     # #     # #     #    #    ######  #     # \n");
    printf("#     #  #  #       #          #       #     # #    #  #     #   # #   #     #  #   # \n");
    printf("#     #  #  #       #          #       #     # # # # # # # # #  #   #  #     #   # #   \n");
    printf("######   #  #       #           #####  #     # #  #  # #  #  # #     # ######     #    \n");
    printf("#     #  #  #       #                # #     # #     # #     # ####### #   #      #    \n");
    printf("#     #  #  #       #                # #     # #     # #     # #     # #    #     #    \n");
    printf("######  ### ####### #######     #####   #####  #     # #     # #     # #     #    #    \n");
    printf("+----------------------------------------------------------------------------------------+\n");
    printf("| Cashier : %s  \t\t\t\t", name);
    printf("|date & time : %s     \n", time1);
    printf("+----------------------------------------------------------------------------------------+\n\n");

    printf("+------------------------------------------------------------------------------+\n");
    printf("| Description|   Qty           | unit price            |  Amount        |\n");
    printf("+-------------+------------------------+-----------------------+----------------+\n");
    printf("| T-shirt     |%d                  |%d                 |%d          |\n", *quantity1, *price1, *finalPrice1);
    printf("| Trouser     |%d                  |%d                 |%d          |\n", *quantity2, *price2, *finalPrice2);
    printf("| Blouse      |%d                  |%d                 |%d          |\n", *quantity3, *price3, *finalPrice3);
    printf("| Short       |%d                  |%d                 |%d          |\n", *quantity4, *price4, *finalPrice4);
    printf("+-------------------------------------------------------------------------------+\n");
    printf("| Total       |    %d                                               |\n", total);
    printf("+-------------------------------------------------------------------------------+\n");

    int productCount = *quantity1 + *quantity2 + *quantity3 + *quantity4;
    int totQty = 0;
    int numCustomer=0;
    int newtotal;

    printf("Enter the number of customer: ");
    scanf("%d", &numCustomer);

            totQty = *quantity1 + *quantity2 + *quantity3 + *quantity4;
            totQty++;

//using if
            if (numCustomer <= 20)
            {
                newtotal = total - (total * 5) / 100;
                printf("Add total 5%% discount to final amount %d\n", newtotal);
            }
            else
            {
                printf("Your final amount %d\n", total);
            }

            productCount = *quantity1 + *quantity2 + *quantity3 + *quantity4;
            totQty = 0;

//using strcpy
    struct myStructure s1;
    strcpy(s1.ShopName, "Smart Fashion");
    strcpy(s1.ShopAddress, "NO 192 Wackwella RD, Galle.");

//display the normal output of string type structure
    printf("Shop Name : %s\n", s1.ShopName);
    printf("Address   : %s\n", s1.ShopAddress);
}

int main()
{
    char name[50];
    char date[50];
    int price1, discount1, quantity1, finalPrice1;
    int price2, discount2, quantity2, finalPrice2;
    int price3, discount3, quantity3, finalPrice3;
    int price4, discount4, quantity4, finalPrice4;
    int price, discount, quantity, finalPrice;

    struct myStructure shopInfo;

    CustomerDetails(name, date);

    displayProduct(&price, &price2, &price3, &price4,
                   &discount, &discount2, &discount3, &discount4,
                   &finalPrice, &finalPrice2, &finalPrice3, &finalPrice4,
                   &quantity, &quantity2, &quantity3, &quantity4);

    BillSummary(name, date, &price, &price2, &price3, &price4,
               &finalPrice, &finalPrice2, &finalPrice3, &finalPrice4,
               &quantity, &quantity2, &quantity3, &quantity4);

    return 0;
}
