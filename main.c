#include <stdio.h>




void Menu(){
    printf(" \n========== Welcome ============ \n");
    printf("1: For Sum: \n");
    printf("2: For minus: \n");
    printf("3: For Facto: \n");
    printf("4: For Divide: \n");
    printf("5: To Switch To Converter: \n");
    printf("6: To Switch To Binary: \n");
    printf("7: To Exit: \n");

}


/// converter kg to pounds ana the other way around , addtional thing;
void convertKgToPounds(){
    int choice;
    float convert, pounds = 2.205;
    int kg,lb;

    printf("=========Welcome To The Converter======== \n");
    printf("1: Kg\n 2: Pounds\n");
    printf("Enter your choice:");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
             printf("How many kg You want to convert to pounds: ");
            scanf("%d", &kg);

            convert = kg * pounds ;
            printf("its %.3f pounds", convert);
                break;
            case 2:
                printf("How many pounds You want to convert to kg: ");
                scanf("%d", &lb);

                convert = lb * 0.45359237 ;
                printf("its %.3f kg", convert);
                break;

    }

    }




void binary(){
    int decimalNumber, rem = 0, place = 1, bin = 0;
    printf("Enter the Decimal number: ");
    scanf("%d", &decimalNumber);

    while (decimalNumber != 0 ){
        rem = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
        place = place * 10;
        bin = bin + (rem * place);
        printf("%d", bin);

    }

    }



struct arithmetique{
    int Plus, Plus2, minus, minus2,fact,fact2,divide,divide2,operateur;

};



int main() {


        int x,sum;
    do {
        Menu();

        struct arithmetique p;
        printf("Enter Your choice: ");
        scanf("%d", &x);

        switch (x) {
            case 1:
                printf("Enter a Number : ");
                scanf("%d", &p.Plus);

                printf("Enter The Operateur: ");
                scanf("%s",&p.operateur);

                printf("Enter The second Number : ");
                scanf("%d", &p.Plus2);
                p.operateur = '+';
                if(p.operateur){
                    sum = p.Plus + p.Plus2;
                }
                printf("%d", sum);
                break;

            case 2:

                for (int i = 0; i <= 1; ++i) {
                    printf("Enter a Number : ");
                    scanf("%d", &p.minus);

                    printf("Enter The Operateur: ");
                    scanf("%s", & p.operateur);

                    printf("Enter The second Number : ");
                    scanf("%d", &p.minus2);

                    p.operateur = '-';
                    if(p.operateur){
                    sum = p.minus - p.minus2;

                    if(sum < 0) printf("Error %d \n", sum = 0);
                }
                }

                printf("The result is : %d", sum);
                break;
            case 3:
                printf("Enter a Number : ");
                scanf("%d", &p.fact);

                printf("Enter The Operateur: ");
                scanf("%s", & p.operateur);

                printf("Enter The second Number : ");
                scanf("%d", &p.fact2);

                p.operateur = '*';
                if(p.operateur){
                    sum = p.fact * p.fact2;
                }
                printf("The result is : %d", sum);
                break;
            case 4:
                printf("Enter a Number : ");
                scanf("%d", &p.divide);

                printf("Enter The Operateur: ");
                scanf("%s", & p.operateur);

                printf("Enter The second Number : ");
                scanf("%d", &p.divide2);

                p.operateur = '/';
                if(p.operateur){
                    sum = p.divide / p.divide2;
                }
                printf("The result is : %d", sum);
                break;
            case 5:
                convertKgToPounds();
                break;
            case 6:
                binary();
                break;
        }


    } while (x != 7);




}
