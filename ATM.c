#include <stdio.h>

void header(int x)
{
    printf("\n\t ==== ATM ==== \n\n");
    printf("\t1. WithDraw\n");
    printf("\t2. Deposite\n");
    printf("\t3. Transfer\n");
    printf("\t4. Cancle\n");
    printf("---------------------------------------\n");
}

int main()
{
    int a, b, pin, pin1;
    char contFlag = 'y';
    float withdraw = 0, saving = 0, deposite = 0, transfer = 0;
    printf("\n\tEnter your pin first : \t");
    scanf("%d", &pin1);
    header(a);
    printf("Your choice : ");
    scanf("%d", &b);
    fflush(stdin);
    printf("---------------------------------------\n");
    switch (b)
    {
    case 1:
        printf("Enter the pin of your account : \t");
        scanf("%d", &pin);
        if (pin == pin1)
        {
            printf("Enter the ammount in your bank : \t");
            scanf("%f", &saving);
            printf("Enter the withdrawl ammount : \t");
            scanf("%f", &withdraw);
            printf("Net ammount you left with is %.2f", (saving - withdraw));
        }
        else
        {
            printf("Incorrect PIN Code .");
        }
        break;

    case 2:
        printf("Enter the pin of your account : \t");
        scanf("%d", &pin);
        if (pin == pin1)
        {
            printf("Enter the ammount in your bank : \t");
            scanf("%f", &saving);
            printf("Enter the ammount to deposite : \t");
            scanf("%d", &deposite);
            printf("Net ammount in your account is %.2f", (saving + deposite));
        }
        else
        {
            printf("Incorrect PIN Code .");
        }

        break;

    case 3:
        printf("Enter the pin of your account : \t");
        scanf("%d", &pin);
        if (pin == pin1)
        {
            printf("Enter the ammount in your bank : \t");
            scanf("%f", &saving);
            printf("enter  the transfer ammount : \t");
            scanf("%f", &transfer);
            printf("Money is Transfered :):):)\n");
            printf("Net ammount you left with is %.2f", (saving + deposite));
        }
        else
        {
            printf("Incorrect PIN Code .");
        }

        break;

    case 4:
        printf("\t<===== BYE  BYE BYE :):):) =====>\n\n");
        break;

    default:
        printf("sorry invalid option !!!\n\n");
        break;
    }
    printf("\n\t<===== BYE  BYE BYE :):):) =====>\n");
    return 0;
}