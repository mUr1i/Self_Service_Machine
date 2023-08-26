#include "master.h"
#include <iostream>
#include <cstdio>

enum customerItem {
    Aqua = 0,
    Foods = 1,
    Drinks = 2
};


int main() {


        /// # Display board products variables


    std::string customerChoice;
    const std::string Water("Water");
    const std::string Breakfast("Breakfast");
    const std::string Soda("Soda");


        /// # Exit program variables


    const std::string n("n");
    const std::string y("y");
    const std::string x("x");
    std::string cco;
    std::string close2ForProgram;


        /// # Cost of products with fee variables


    const double admissionFee = 1.17;
    const double waterFee = 2.04;
    const double drinksFee = 3.19;
    const double breakFastFee = 12.53;


        /// # Customer product amount bought variables


    int productAmountSet;


        /// # Display Shop foods & drinks config


        shopDisplayedEnty displayThis;

        displayThis. boardRedit();


        /// # Customer get selected order config
        /// ## If you want to change product name =>     customerReciept1->setCustomerItemName("Water Bottle");
        /// ### If you want to change product price =>   customerReciept1->setCustomerItemPrice(2.04);


        customerEnty customer1;

        shopEnty *customerReciept1 = &customer1;

        customerItem shopEnty = {};

        do{

        try{
        std::cout << "Select your order: " << '\n';
        std::getline(std::cin, customerChoice);

        if(customerChoice == Water){
            shopEnty = Aqua;
        }
        else if(customerChoice == Breakfast){
            shopEnty = Foods;
        }
        else if(customerChoice == Soda){
            shopEnty = Drinks;
        };

            if(customerChoice != Water && customerChoice != Breakfast && customerChoice != Soda){
                throw 0;
            };

        }catch(...){
            std::cout << "[ " << customerChoice << " ] is not in stocked!, unavailable product" << '\n';
        }

        }while(customerChoice != Water && customerChoice != Breakfast && customerChoice != Soda);

        /// # Get customer order amount

            do{
            std::cout << "Enter order amount: ";
            std::cin >> productAmountSet;

            if(productAmountSet <= 0 || productAmountSet >= 100){
                std::cout << "**********************************\n" << '\n';
                std::cout << "Invalid amount entered; try again\n" << '\n';
            }

                else{

                    switch(shopEnty){

                    case Aqua:
                        customerReciept1->setCustomerItemName("Water Bottle");
                        customerReciept1->setCustomerItemPrice(waterFee);
                        customerReciept1->setCustomerTicketStatus("Pending order, confirm first");
                        customerReciept1->setCustomerProductCost(waterFee);
                        customerReciept1->setProductAmount(productAmountSet);
                        customerReciept1->setProductAmountWithCost(waterFee);
                        customerReciept1->setGiveCustomerAdmissionFee(admissionFee);

                        customer1. customerObj();
                    break;
                    case Foods:
                        customerReciept1->setCustomerItemName("Eggs and Bacon");
                        customerReciept1->setCustomerItemPrice(breakFastFee);
                        customerReciept1->setCustomerTicketStatus("Pending order, confirm first");
                        customerReciept1->setCustomerProductCost(breakFastFee);
                        customerReciept1->setGiveCustomerAdmissionFee(admissionFee);
                        customerReciept1->setProductAmount(productAmountSet);
                        customerReciept1->setProductAmountWithCost(breakFastFee);
                        customerReciept1->setGiveCustomerAdmissionFee(admissionFee);

                        customer1. customerObj();
                    break;
                    case Drinks:
                        customerReciept1->setCustomerItemName("Coca cola");
                        customerReciept1->setCustomerItemPrice(drinksFee);
                        customerReciept1->setCustomerTicketStatus("Pending order, confirm first");
                        customerReciept1->setCustomerProductCost(drinksFee);
                        customerReciept1->setGiveCustomerAdmissionFee(admissionFee);
                        customerReciept1->setProductAmount(productAmountSet);
                        customerReciept1->setProductAmountWithCost(drinksFee);
                        customerReciept1->setGiveCustomerAdmissionFee(admissionFee);

                        customer1. customerObj();
                    };

                };
        }while(productAmountSet <= 0 || productAmountSet >= 100);


        /// # To exit the program by confirming or cancelling, The customer order.


        do{

            try{
            std::cout << "**********************************" << '\n';
            std::cout << "Confirm order: ";
            std::cin >> cco;
            std::cout << "**********************************\n" << '\n';


                if(cco == y && cco != n){
                    std::cout << "Order Confirmed!, You can pick up your order in the front desk. Thank you" << '\n';
                    customerReciept1->setCustomerTicketStatus("Confirmed order!, Get order from the front desk");
                    customer1. customerObj();
                    std::cout << "**********************************\n" << '\n';
                }

                else if(cco == n && cco != y){
                    std::cout << "Order Cancelled!, Ticket is disaccustomed X" << '\n';
                    customerReciept1->setCustomerTicketStatus("Cancelled order!, Ticket unavailable");
                    customer1. customerObj();
                    std::cout << "**********************************\n" << '\n';
                };

                    if(cco != y && cco != n){
                        throw 0;
                    }
            }catch(...){
                std::cout << "Error; Invalid command!\n" << '\n';
            }

        }while(cco != y && cco != n);


        do{

        std::cout << "Close the program, by pressing key [x]\n";
        std::cin >> close2ForProgram;

            if(close2ForProgram == x){
                return 0;
            };

        }while(close2ForProgram != x);

};
