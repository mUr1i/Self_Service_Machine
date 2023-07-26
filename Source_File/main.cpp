#include <iostream>
#include <cstdio>


enum customerItem {
    Aqua = 0,
    Foods = 1,
    Drinks = 2
};

class shopEnty{
protected:
    std::string itemName;
    double itemPrice;

public:

    void setCustomerItemName(std::string x){itemName=x;}
    void setCustomerItemPrice(double y){itemPrice=y; }

    virtual void customerObj()=0;
};

class customerEnty: public shopEnty{

public:

    void customerObj(){

    std::cout << "------------------------------------" << '\n';
    std::cout << "Customer items: " << itemName << '\n';
    std::cout << "Total cost: " << "$" << itemPrice << '\n';
    std::cout << "------------------------------------" << '\n';
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

    void boardRedit(){
        std::cout << " ----------- MENU --------------" << '\n' << '\n';
        std::cout << "     Water            Drinks" << '\n' << '\n';
        std::cout << "            BreakFast" << '\n' << '\n';
        std::cout << " -------------------------------" << '\n' << '\n';
    }


};
void setExitPrograms(std::string y, std::string n, std::string cco);

int main() {


std::string customerChoice;
std::string Water("Water");
std::string Breakfast("Breakfast");
std::string Soda("Soda");

std::string n;
std::string y;
std::string cco;


    // # Display Shop foods & drinks

    shopDisplayedEnty shopDisplay;

        customerDisplayEnty *shopDisplayPerma = &shopDisplay;


        shopDisplay. boardRedit();

customerEnty customer1;

    shopEnty *customerReciept1 = &customer1;

    std::cout << "Select your order: " << '\n';
    std::cin >> customerChoice;

    if(customerChoice == Water){
        customerItem shopEnty = Aqua;
        switch (shopEnty){

        case Aqua:
            customerReciept1->setCustomerItemName("Water Bottle");
            customerReciept1->setCustomerItemPrice(12.54);
            customer1. customerObj();
            break;
        case Foods:
            customerReciept1->setCustomerItemName("Bacon & Ham");
            customerReciept1->setCustomerItemPrice(14.67);
            customer1. customerObj();
            break;
        case Drinks:
            customerReciept1->setCustomerItemName("Coca cola");
            customerReciept1->setCustomerItemPrice(9.32);
            customer1. customerObj();
            break;
        };
    }

    else if(customerChoice == Breakfast){
        customerItem shopEnty = Foods;
        switch (shopEnty){

        case Aqua:
            customerReciept1->setCustomerItemName("Water Bottle");
            customerReciept1->setCustomerItemPrice(12.54);
            customer1. customerObj();
            break;
        case Foods:
            customerReciept1->setCustomerItemName("Bacon & Ham");
            customerReciept1->setCustomerItemPrice(14.67);
            customer1. customerObj();
            break;
        case Drinks:
            customerReciept1->setCustomerItemName("Coca cola");
            customerReciept1->setCustomerItemPrice(9.32);
            customer1. customerObj();
            break;
        };
    }

    else if(customerChoice == Soda){
        customerItem shopEnty = Drinks;
        switch (shopEnty){

        case Aqua:
            customerReciept1->setCustomerItemName("Water bottle");
            customerReciept1->setCustomerItemPrice(12.54);
            customer1. customerObj();
            break;
        case Foods:
            customerReciept1->setCustomerItemName("Bacon & Ham");
            customerReciept1->setCustomerItemPrice(14.67);
            customer1. customerObj();
            break;
        case Drinks:
            customerReciept1->setCustomerItemName("Coca cola");
            customerReciept1->setCustomerItemPrice(9.32);
            customer1. customerObj();
            break;
        };
    };

    // Program exit config

         setExitPrograms(y, n, cco);
};

void setExitPrograms(std::string y, std::string n, std::string cco){
        std::cout << "Exit: ";
        std::cin >> cco;

        if(cco == y){
            std::cout << "Exiting... " << '\n';
        }

        else if(cco == n){
            std::cout << "No theres no more. " << '\n';
        }

};

