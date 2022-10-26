#include <stdio.h>
int main()
{
    //variable decalaration
    int input;
    int remainder;
    //Enter number to be reversed
    printf("Enter the number:");
    scanf("%d", &input);
    //reverse the number
    int reverse=0;
    int number = input;
    while (number!=0)
    {
        remainder=number%10; //getting last digit in the number
        reverse=reverse*10+remainder; //storing the number got
        number=number/10; //getting new number after removing the last digit

    }
    //display the reversed number
    printf("The reversed number is:%d\n", reverse);
    //printf("input:%d\n",input);bug solved lol
    //check if it is a palindrome
    if(reverse == input)
    {
        printf("%d is  a palindrome",input);
    }
    else
    {
        printf("%d is not a palindrome",input);
    }
    

    return 0;
}
//TODO make number varible not change after the loop //done lol