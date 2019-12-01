#include <stdio.h>
#include "myBank.h"

    void open(double bank[2][50])
    {
        for(int i = 0; i < 50; i++)
        {
            if(bank[1][i] == 0)
            {
            double amount;
            printf("Enter amount: ");
            scanf("%lf", &amount);
            if(amount > 0)
            {
            amount = (int)(amount*100);
            amount = amount/100;
            bank[1][i] = 1;
            bank[0][i] = amount;
            printf("Acoount Number: %d \n", (i + 901));
            return;
            }else{
                printf("Invalid operation");
                return;
            }
        }
    }
            printf("The bank is full");
    }
    void balance(double bank[2][50])
    {   
        int i;
        printf("Enter account number: ");
        scanf("%d", &i);
        if((i - 901 >= 50) || (i - 901 < 0))
        {
        printf("There in no such account number");
        return;
        }
        if(bank[1][i - 901] == 1)
        {
            printf("Your Balance: %lf", bank[0][i - 901]);
        } 
        else
        {
            printf("The account is closed");
        }
    }
    void deposit(double a[2][50])
    {
        int i;
        printf("Enter account number: ");
        scanf("%d", &i);
        if((i - 901 >= 50) || (i - 901 < 0)){
        printf("There in no such account number");
        return;
         }
        double amount;
        if(a[1][i - 901] == 1)
        {
            printf("Enter a deposit amount: ");
            scanf("%lf", &amount);
            if(amount > 0)
            {
            amount = (int)(amount*100);
            amount = amount/100;
            a[0][i - 901] += amount;
            printf("Your amount: %lf", a[0][i - 901]);
            return;
            }else{
            printf("Invalid operation");
            return;    
            }
        }
            printf("The account is closed");
    }
    void withdrawal(double bank[2][50])
    {
        int i;
        printf("Enter account number: ");
        scanf("%d", &i); 
        if((i - 901 >= 50) || (i - 901 < 0)){
            printf("There is no such account number");
            return;
        }
        if(bank[1][i - 901] == 1)
        {
        double amount;
        printf("Enter amount: ");
        scanf("%lf", &amount);
        if(amount > 0)
        {
        amount = (int)(amount*100);
        amount = amount/100;
        if(bank[0][i - 901] - amount >= 0)
        {
        bank[0][i - 901] -= amount;
        printf("Your balance: %lf", bank[0][i - 901]);
        return;
        } else {
            printf("You dont have enough money");
            return;
        }
        printf("Your account is closed");
        return;
        }
        printf("Invalid operation");
        return;
    }
    printf("The account is closed");
    }
    void close(double bank[2][50])
    {
        int i;
        printf("Enter account number: ");
        scanf("%d", &i);
        if((i - 901 >= 50) || (i - 901 < 0))
        {
            printf("There is no such account number");
            return;
        }
        if(bank[1][i - 901] == 1)
        {
            bank[1][i - 901] = 0;
            bank[0][i - 901] = 0;
            printf("The account is closed");
            return;
        }
        printf("The account is not open");
    }    
    void interest(double bank[2][50])
    {
        double interest;
        printf("Enter interest rate: ");
        scanf("%lf", &interest);
        if(interest <= 0)
        {
            printf("Invalid operation");
            return;
        }
        interest *= 0.01;
        for(int i = 0; i < 50; i++)
        {
            if(bank[1][i] == 1)
            {
                bank[0][i] -=  bank[0][i] * interest;
                bank[0][i] = (int)(bank[0][i]*100);
                bank[0][i] = bank[0][i]/100;
            }
        }
    }
    void print(double bank[2][50])
    {
        int flag = 0;
        for(int i = 0; i < 50; i++)
        {
            if(bank[1][i] == 1)
            {
                printf("Acount number: %d\t Your balance: %lf\n",i + 901, bank[0][i]);
                flag = 1;
            }
        }
        if(flag == 0)
        {
            printf("There are no open accounts");
        }
    }
    void exit_program(double bank[2][50])
    {   
        for(int i = 0; i < 50; i++)
        {
            bank[0][i] = 0;
            bank[1][i] = 0;
        }
    }
 
