#include "GetCustomerOrder.h"
#include <iostream>

template <class K, class U, class I>

K addThisToAmountOfProduct(K a, U b, I c){
    return a*b+c;
};

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




