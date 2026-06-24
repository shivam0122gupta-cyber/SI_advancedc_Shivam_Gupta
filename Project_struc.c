#include <stdio.h>


struct Product {
    int id;
    int stock;
    double mrp;
    double discount; 
    char size[5];    
};

int main() {
    
    struct Product inventory[10] = {
        {101, 5,  999.00,  10.0, "S"},
        {102, 10, 1499.00, 15.0, "M"},
        {103, 15, 799.00,  0.0,  "L"},
        {104, 12, 1999.00, 20.0, "XL"},
        {105, 14, 1299.00, 5.0,  "XXL"},
        {106, 16, 899.00,  10.0, "S"},
        {107, 13, 2499.00, 25.0, "L"},
        {108, 12, 1199.00, 0.0,  "XL"},
        {109, 10, 1699.00, 15.0, "M"},
        {110, 11, 599.00,  5.0,  "S"}
    };

    int choice;
    int i;

    do {
        printf("\n====WELCOME TO TRENDS===\n");
        printf("    ======MENU======\n");
        printf("1:View Inventory Stock\n");
        printf("2:Purchase Items\n");
        printf("3:Checkout & Exit\n");
        
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        
        while (choice < 1 || choice > 3) {
            printf("\nInvalid Choice please try again\n");
            printf("1:View Inventory Stock\n");
            printf("2:Purchase Items\n");
            printf("3:Checkout & Exit\n");
            printf("Enter Your Choice: ");
            scanf("%d", &choice);
        }

        
        if (choice == 1) {
            printf("\nProduct_ID\tSize\tMRP\t\tDiscount%%\tAvailable_Qty\n");
            printf("-----------------------------------------------------------------------\n");
            for (i = 0; i < 10; i++) {
                printf("%d\t\t%s\tRs.%.2f\t\t%.1f%%\t\t%d\n", 
                       inventory[i].id, 
                       inventory[i].size, 
                       inventory[i].mrp, 
                       inventory[i].discount, 
                       inventory[i].stock);
            }
        }

        
        else if (choice == 2) {
            int PI;
            int quantity;
            int found_index = -1; 
            
            printf("Enter the product ID: ");
            scanf("%d", &PI);
            
            for (i = 0; i < 10; i++) {
                if (PI == inventory[i].id) { 
                    found_index = i; 
                    break; 
                }
            }
            
            if (found_index != -1) {
                
                double original_mrp = inventory[found_index].mrp;
                double discount_pct = inventory[found_index].discount;
                double final_price = original_mrp - (original_mrp * (discount_pct / 100.0));

                printf("Product Found! Size: %s | MRP: Rs.%.2f | Discount: %.1f%% | Final Price: Rs.%.2f\n", 
                       inventory[found_index].size, original_mrp, discount_pct, final_price);
                printf("Available Stock: %d\n", inventory[found_index].stock);
                
                printf("Enter the Quantity of product: ");
                scanf("%d", &quantity);   
                
                if (quantity > 0 && quantity <= inventory[found_index].stock) {
                    printf("Quantity is Available\n");
                    
                    
                    inventory[found_index].stock = inventory[found_index].stock - quantity;
                    
                
                    printf("Remaining stock inside structure for ID %d: %d\n", 
                           inventory[found_index].id, inventory[found_index].stock);
                    
                    double total_bill = final_price * quantity;
                    printf("Total cost for this item: Rs.%.2f\n", total_bill);
                } 
                else {
                    printf("Quantity is not available or invalid!\n");
                }
            } 
            else {
                printf("Enter a valid product ID (Product Not Found)\n");
            }
        }
        
        
        else if (choice == 3) {
            printf("\nThank you for shopping at Trends. Have a nice day!\n");
        }

    } while (choice != 3);

    return 0;
}
