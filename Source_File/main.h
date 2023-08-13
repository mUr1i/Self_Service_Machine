#ifndef MASTER_H
#define MASTER_H
#include <iostream>
#include "GetCustomerOrder.h"
#include "CmdDisplay.h"


    // # Sub inheretance class for customer order


class customerEnty: public shopEnty{

public:

    void customerObj(){

    std::cout << "\n{---------------------------------------}\n" << '\n';
    std::cout << "Ticket order status:          \n" << "\n# " << ticketOrderStatus << "\n" << '\n';
    std::cout << "Bought Product:              \n" << "\n* " << itemName << " x" << productAmountSet << '\n' << '\n';
    std::cout << "Product cost:                 " << "$" << itemPrice << '\n';
    std::cout << "Total cost + admissionFee:    " << "$" << addThisToAmountOfProduct(productCost2ForAmount, productAmountSet, admissionFee) << '\n';
    std::cout << "\n{---------------------------------------}\n" << '\n';
    }

};


    // # Sub inheretance class for displaying products


class shopDisplayedEnty: public customerDisplayEnty{

public:

    void boardRedit() {

        std::cout << "\n{================  *MENU*  ================}\n" << '\n';
        std::cout << "          [ Water ]\n" << '\n';
        std::cout << "          [ Breakfast ]\n" << '\n';
        std::cout << "          [ Soda ]" << '\n';
        std::cout << "\n{==========================================}\n" << '\n';
    }

};


#endif // MASTER_H
