//
// Created by gusga on 16/11/2020.

// incomplete!
//

#include <stdio.h>
#include <stdbool.h>


#define Main_menu_quit 0;
#define Main_menu_add 1;
#define Main_menu_show 2;
#define Main_menu_checkout 3;
#define Main_menu_cancel 4;

int mainMenu();
int itemMenu();

void add()

int main(){

    bool quit = false;

    while (!quit){
        int choice = main_menu();

        int qty

        switch (choice) {

            case Main_menu_quit:
                quit=true;
                break;

            case Main_menu_add:
                add();

            case Main_menu_show:

            case Main_menu_checkout:

            case Main_menu_cancel:

            default:
                break;
        }
    }

}

int main_menu(){
    for (;;){
        printf("1. add items");
        printf("2. show total");
        printf("3. checkout");
        printf("4. cancel");
        printf("0. quit \n");

        printf("enter option");
        char c = (char)getChar();

        switch(c){
            case '1':
                result=Main_menu_add;
                break;
            case '2':
                result=Main_menu_show;
                break;
            case '3':
                result=Main_menu_checkout;
                break;
            case '4':
                result=Main_menu_cancel;
                break;
            case '0':
                result=Main_menu_quit;
                break;
        }


    }
}

int itemMenu(){
    int result;
    for(;;){
        
    }
}

void add (int *qtyItem1,int *qtyItem2,int *qtyItem3,int *qtyItem4){

}
