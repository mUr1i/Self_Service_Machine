#ifndef MASTER_H
#define MASTER_H
#include <iostream>
#include "GetCustomerOrder.h"
#include "CmdDisplay.h"


    /// # Sub inheretance class for customer order


class customerEnty: public shopEnty{

public:

    void customerObj(){

    std::cout << "\n||||||||||||||||||||||||||||||||||||||||||||||||\n" << '\n';
    std::cout << "Order Status:          \n" << "\n# " << ticketOrderStatus << "\n" << '\n';
    std::cout << "Bought Product:   " << itemName << " x" << productAmountSet << '\n' << '\n';
    std::cout << "Sub Total:        " << "$" << (productCost2ForAmount * productAmountSet) << '\n';
    std::cout <<  "_________________________________________\n";
    std::cout << "AdmissionFee:     " << "$" << admissionFee << '\n';
    std::cout << "Total cost:       " << "$" << (productCost2ForAmount * productAmountSet + admissionFee) << '\n';
    std::cout << "\n||||||||||||||||||||||||||||||||||||||||||||||||\n" << '\n';
    }

};


    /// # Sub inheretance class for displaying products


class shopDisplayedEnty: public customerDisplayEnty{

public:

    void boardRedit() {

        std::cout << R"(
    __/\\\\____________/\\\\___/\\\________/\\\_____/\\\\\\\\\_______/\\\\\\\\\\\_
     _\/\\\\\\________/\\\\\\__\/\\\_______\/\\\___/\\\///////\\\____\/////\\\///__
      _\/\\\//\\\____/\\\//\\\__\/\\\_______\/\\\__\/\\\_____\/\\\________\/\\\_____
       _\/\\\\///\\\/\\\/_\/\\\__\/\\\_______\/\\\__\/\\\\\\\\\\\/_________\/\\\_____
        _\/\\\__\///\\\/___\/\\\__\/\\\_______\/\\\__\/\\\//////\\\_________\/\\\_____
         _\/\\\____\///_____\/\\\__\/\\\_______\/\\\__\/\\\____\//\\\________\/\\\_____
          _\/\\\_____________\/\\\__\//\\\______/\\\___\/\\\_____\//\\\_______\/\\\_____
           _\/\\\_____________\/\\\___\///\\\\\\\\\/____\/\\\______\//\\\___/\\\\\\\\\\\_
            _\///______________\///______\/////////______\///________\///___\///////////__
                    )" << '\n' << '\n';

        std::cout << "\n{================  *MENU*  ================}\n" << '\n';
        std::cout << "          [ Water ]\n" << '\n';
        std::cout << "          [ Breakfast ]\n" << '\n';
        std::cout << "          [ Soda ]" << '\n';
        std::cout << "\n{==========================================}\n" << '\n';
    }

};


#endif // MASTER_H
