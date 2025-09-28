#include <stdio.h>
int main() {
    int section;
    char size;
    int numb_coff;
    float bill;
    float tot_bill;
    int coff_type;
    
    printf("Choose section:\n");
    printf("1.Icecream Parlour\n");
    printf("2. Burger hub \n");
    printf("3. Coffee shop\n");
    scanf("%d", &section);


    switch (section) {
    case 1:
    printf("Your order will be handled by the section.\n");
    break;
    case 2:
    printf("Your order will be handled by the section.\n");
    break;
    case 3:
    printf("Choose the coffee size:\n1.Small(Rs.400)\n2.Medium(Rs.550)\n3.Large(Rs.650)\n");
    scanf(" %d",&size);
    if (size == 1) {
        bill = 400;
    } else if (size == 2) {
        bill = 550;
    } else if (size == 3)
    {
        bill = 650;
    }
    printf("You chose %d\n",size);
    printf("Enter number of coffees:\n");
    scanf("%d", &numb_coff);
    if (numb_coff > 1) {
        printf("Check our combo offers!\n");
        if(numb_coff >= 2){
       tot_bill = bill - (bill *0.10);
       printf("Combo offer is applied!\n");
        }
        }
        printf("Enter your coffee type:\n1.Regular\n2.Cappuccino\n3.Latte\n");
        scanf("%d",&coff_type);
        printf("You chose %d\n", coff_type);
        printf("Final bill = %f ", tot_bill);
        break;
        return 0;

        
    }


    }

    
     




    


