# include <stdio.h>
# include "q4.h"

int main(void){

    setvbuf(stdout, NULL, _IONBF, 0);


    // base stock outside of loop to not rest each iteration

    int paper_a3 = 1000;

    int paper_a4 = 1000;

    int paper_a5 = 1000;

    //looping counter, order max 5 times

    int c;


    for( c = 1; c < 5; c = c + 1){

        //variables


            //amount purchased

            int order_a3;

            int order_a4;

            int order_a5;



        // beginning by telling what iteration we're in

        printf("\n \n Placing order number %d: \n ---------- \n", c);

        // asks users what they want to order

            printf(" how much A3 paper do you want to buy?");
            scanf("%d", &order_a3);

            printf("\n how much A4 paper do you want to buy?");
            scanf("%d", &order_a4);

            printf("\n how much A5 paper do you want to buy?");
            scanf("%d", &order_a5);


        // Calculates the total left of each paper type

        paper_a3 = paper_leftover(order_a3, paper_a3);
        paper_a4 = paper_leftover(order_a4, paper_a4);
        paper_a5 = paper_leftover(order_a5, paper_a5);


        //adding dummy loading test to make program look more natural
        printf(" \n ---------- \n Order placed, getting ready for next order\n loading . .. ... \n done! \n%d A3 papers in stock, %d A4 papers in stock, and %d A5 papers in stock \n", paper_a3, paper_a4, paper_a5);

    }

    return 0;
}