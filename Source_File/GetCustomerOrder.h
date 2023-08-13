#ifndef GETCUSTOMERORDER_H
#define GETCUSTOMERORDER_H
#include <iostream>

template <class K, class U, class I>

K addThisToAmountOfProduct(K a, U b, I c){
    return a*b+c;
};

// # Main class for getting customer order


class shopEnty{

protected:

    std::string itemName;
    std::string ticketOrderStatus;
    double itemPrice;

    double productCost;
    double admissionFee;

    int productAmountSet;
    double productCost2ForAmount;

public:

    void setCustomerItemName(std::string x){itemName=x;}
    void setCustomerItemPrice(double y){itemPrice=y; }
    void setCustomerTicketStatus(std::string q){ticketOrderStatus=q; }
    void setCustomerProductCost(double a){productCost=a; }

    void setGiveCustomerAdmissionFee(double b){admissionFee=b; }
    void setProductAmount(int q){productAmountSet = q; }
    void setProductAmountWithCost(double e){productCost2ForAmount = e; }

    virtual void customerObj()=0;
};


#endif // GETCUSTOMERORDER_H
