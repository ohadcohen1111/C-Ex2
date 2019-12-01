     #include <stdio.h>
     #include"myBank.h"

      int main()
    {
        double bank[2][50] = {0};
        char o;
        while(o != 'E')
        {
        printf("\nEnter Operation: ");
        scanf(" %c", &o);
        if(o == 'O')
        {
            open(bank);
        }
        else if(o == 'B')
        {
            balance(bank);
        }
        else if(o == 'D')
        {
            deposit(bank);
        }
        else if(o == 'W')
        {
            withdrawal(bank);
        }
        else if(o == 'C')
        {
            close(bank);
        }
        else if(o == 'I')
        {
            interest(bank);
        }
        else if(o == 'P')
        {
          print(bank);  
        }
        else if(o == 'E')
        {
            exit_program(bank);
        }
        else
        {
            printf("Invalid input");
        }
        }
    }
