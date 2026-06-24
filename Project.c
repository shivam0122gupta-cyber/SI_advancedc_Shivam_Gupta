#include<stdio.h>

int main() {
    int PRODUCT_ID[]={101,102,103,104,105,106,107,108,109,110};
    int Product_Quantity[] = {5,10,15,12,14,16,13,12,10,11};
    int choice;
    int i;
    do {
        printf("\n====WELCOME TO TRENDS===");
        printf("    ======MENU======\n");
        printf("1:View Inventory Stock\n");
        printf("2:Purchase Items\n");
        printf("3:Checkout & Exit\n");
        
        printf("Enter Your Choice: ");
        scanf("%d",&choice);
        
        while(choice<1||choice>3){
            printf("\nInvalid Choice please try again\n");
            printf("1:View Inventory Stock\n");
            printf("2:Purchase Items\n");
            printf("3:Checkout & Exit\n");
            printf("Enter Your Choice: ");
            scanf("%d",&choice);
        }
        

        if(choice==1){
            printf("\nProduct_ID\tProduct_Quantity\n");
            for(i =0;i< 10;i++){
                printf("\t%d\t\t\t%d\n",Product_ID[i],Product_Quantity[i]);
            }
        }

        else if(choice==2){
            int PI;
            int quantity;
            int found_index=-1; 
            
            printf("Enter the product ID: ");
            scanf("%d",&PI);
            
            for(i = 0;i<10;i++){
                if(PI==Product_ID[i]) {
                    found_index=i; 
                    break; 
                }
            }
            
        
            if(found_index!=-1) {
                printf("Yes we found this ID Available Stock: %d\n", Product_Quantity[found_index]);
                
                printf("Enter the Quantity of product: ");
                scanf("%d",&quantity);   
                
                
                if(quantity>0&&quantity<=Product_Quantity[found_index]) {
                    printf("Quantity is Available\n");
                    
                
                    Product_Quantity[found_index]=Product_Quantity[found_index]-quantity;
                    printf("Remaining stock: %d\n",Product_Quantity[found_index]);
                } 
                else {
                    printf("Quantity is not available or invalid!\n");
                }
            } 
            
            else {
                printf("Enter a valid product ID (Product Not Found)\n");
            }
        }
        
        else if(choice==3){
            printf("\nThank you for shopping at Trendsa nice day\n");
        }

    } while(choice!=3);

    return 0;
}