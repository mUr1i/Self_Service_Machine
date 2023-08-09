#include <iostream>
#include <cstdio>

template <class K, class U>
K getAdmissionFeeFromCustomer(K a, U b){
    return a+b;
};


enum customerItem {
    Aqua = 0,
    Foods = 1,
    Drinks = 2
};


class shopEnty{
protected:
    std::string itemName;
    std::string ticketOrderStatus;
    double itemPrice;

    double productCost;
    double admissionFee;
public:

    void setCustomerItemName(std::string x){itemName=x;}
    void setCustomerItemPrice(double y){itemPrice=y; }
    void setCustomerTicketStatus(std::string q){ticketOrderStatus=q; }
    void setCustomerProductCost(double a){productCost=a; }
    void setGiveCustomerAdmissionFee(double b){admissionFee=b; }

    virtual void customerObj()=0;
};
class customerEnty: public shopEnty{

public:

    void customerObj(){

    std::cout << "\n{---------------------------------------}\n" << '\n';
    std::cout << "Ticket order status:          \n" << "\n# " << ticketOrderStatus << "\n" << '\n';
    std::cout << "Bought Product:              \n" << "\n* " << itemName << "\n" << '\n';
    std::cout << "Product cost:                 " << "$" << itemPrice << '\n';
    std::cout << "Total cost + admissionFee:    " << "$" << getAdmissionFeeFromCustomer(productCost, admissionFee) << '\n';
    std::cout << "\n{---------------------------------------}\n" << '\n';
    }

};


class customerDisplayEnty{

protected:
    std::string foodsDisplayed;
public:

    void setFoodsDisplayed(std::string a){
        foodsDisplayed=a;
    }

    virtual void boardRedit()=0;

};
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


    double productCost;
    double admissionFee = 1.17;
    double waterFee = 2.04;
    double drinksFee = 3.19;
    double breakFastFee = 12.53;


    // # Display Shop foods & drinks config


    shopDisplayedEnty shopDisplay;

    customerDisplayEnty *shopDisplayPerma = &shopDisplay;

    shopDisplay. boardRedit();


    // # Customer get selected order config
    // ## If you want to change product name =>     customerReciept1->setCustomerItemName("Water Bottle");
    // ### If you want to change product price =>   customerReciept1->setCustomerItemPrice(2.04);


    customerEnty customer1;

    shopEnty *customerReciept1 = &customer1;

        customerItem shopEnty = {};

        do{

        std::cout << "Select your order: " << '\n';
        std::cin >> customerChoice;

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

        continue;

        }while(customerChoice != Water && customerChoice != Breakfast && customerChoice != Soda);

                switch(shopEnty){

                case Aqua:
                    customerReciept1->setCustomerItemName("Water Bottle");
                    customerReciept1->setCustomerItemPrice(2.04);
                    customerReciept1->setCustomerTicketStatus("Pending order, confirm first");
                    customerReciept1->setCustomerProductCost(waterFee);
                    customerReciept1->setGiveCustomerAdmissionFee(admissionFee);
                    customer1. customerObj();
                    break;
                case Foods:
                    customerReciept1->setCustomerItemName("Eggs and Bacon");
                    customerReciept1->setCustomerItemPrice(12.53);
                    customerReciept1->setCustomerTicketStatus("Pending order, confirm first");
                    customerReciept1->setCustomerProductCost(breakFastFee);
                    customerReciept1->setGiveCustomerAdmissionFee(admissionFee);
                    customer1. customerObj();
                    break;
                case Drinks:
                    customerReciept1->setCustomerItemName("Coca cola");
                    customerReciept1->setCustomerItemPrice(3.19);
                    customerReciept1->setCustomerTicketStatus("Pending order, confirm first");
                    customerReciept1->setCustomerProductCost(drinksFee);
                    customerReciept1->setGiveCustomerAdmissionFee(admissionFee);
                    customer1. customerObj();
                };


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
