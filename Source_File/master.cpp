#include "CmdDisplay.h"
#include "GetCustomerOrder.h"
#include "master.h"
#include <iostream>

enum customerItem {
    Aqua = 0,
    Foods = 1,
    Drinks = 2
};


int main() {


    // # Display board products variables


    std::string customerChoice;
    std::string Water("Water");
    std::string Breakfast("Breakfast");
    std::string Soda("Soda");


    // # Exit program variables


    std::string n("n");
    std::string y("y");
    std::string cco;
    std::string close2ForProgram;
    std::string x("x");


    // # Cost of products with fee variables


    double admissionFee = 1.17;
    double waterFee = 2.04;
    double drinksFee = 3.19;
    double breakFastFee = 12.53;


    // # Customer product amount bought variables


    int productAmountSet;
    double productCost2ForAmount;


    // # Display Shop foods & drinks config

        shopDisplayedEnty displayThis;

        shopDisplayedEnty *configToDisplay = &displayThis;

        displayThis. boardRedit();


    // # Customer get selected order config
    // ## If you want to change product name =>     customerReciept1->setCustomerItemName("Water Bottle");
    // ### If you want to change product price =>   customerReciept1->setCustomerItemPrice(2.04);


        customerEnty customer1;

        shopEnty *customerReciept1 = &customer1;

        customerItem shopEnty = {};


        do{

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
            std::cout << "[ " << customerChoice << " ] is not in stocked!, unavailable product" << '\n';
            };

        }while(customerChoice != Water && customerChoice != Breakfast && customerChoice != Soda);


        // # Get customer order amount

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
                        customerReciept1->setCustomerItemPrice(2.04);
                        customerReciept1->setCustomerTicketStatus("Pending order, confirm first");
                        customerReciept1->setCustomerProductCost(waterFee);
                        customerReciept1->setProductAmount(productAmountSet);
                        customerReciept1->setProductAmountWithCost(waterFee);
                        customerReciept1->setGiveCustomerAdmissionFee(admissionFee);

                        customer1. customerObj();
                    break;
                    case Foods:
                        customerReciept1->setCustomerItemName("Eggs and Bacon");
                        customerReciept1->setCustomerItemPrice(12.53);
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
                        customerReciept1->setCustomerItemPrice(3.19);
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


    // # To exit the program by confirming or cancelling, The customer order.


        do{

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
                        std::cout << "Error xf5987; Invalid command!\n" << '\n';
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
