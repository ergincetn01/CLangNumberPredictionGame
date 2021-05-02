#include <stdio.h> // standart library
#include <stdlib.h> //optional but good to use
#include <time.h> /* required library for random number generating */
int main()
{   
    srand(time(0)); /*necessary line for time library */
    int x;
    int k=rand()%100;
    int order_of_correct_attempt;
    
    printf("try to guess the number : "); 
    
    do {
        scanf("%d", &x);
     
     if (x<k) 
      printf("Sorry, wrong guess. Try again.(hint: guess higher)");
      
      else if(x>k)
       printf("Sorry, wrong guess. Try again. (hint: guess lower) ");
       
     else 
     printf("Congrats. You've found the correct number(%d) at %d. attempt :) ", x, order_of_correct_attempt);
     order_of_correct_attempt++;  /* increasing the counter for each wrong guess */
     
    } while(x!=k); /* condition for true iteration of loop
    
    return 0;
}

