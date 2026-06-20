//C00Ex05:
#include <unistd.h>

void    ft_print_comp() // printf numbers from 012 to 789!
{
    char firstNum = '0';
    char secondNum = '1';
    char thirdNum = '2';

    while(firstNum <= '7')
    {
        secondNum = firstNum + 1;
        while(secondNum <= '8')
        {
            thirdNum = secondNum + 1;
            while(thirdNum <= '9')
            {
                write(1, &firstNum, 1);
                write(1, &secondNum, 1);
                write(1, &thirdNum, 1);
                if(!(firstNum  == '7' && secondNum == '8' && thirdNum == '9'))
                {
                    write(1, ", ", 2);
                }
                
                thirdNum++;
            }
            secondNum++;

        }
        firstNum++;

    
    }

}


int main(void)
{
    ft_print_comp();
    return 0;
}
