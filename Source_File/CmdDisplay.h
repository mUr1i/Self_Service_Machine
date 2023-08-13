#ifndef CMDDISPLAY_H
#define CMDDISPLAY_H
#include <iostream>


// # Main class for displaying product


class customerDisplayEnty{

protected:
    std::string foodsDisplayed;
public:

    void setFoodsDisplayed(std::string a){
        foodsDisplayed=a;
    }

    virtual void boardRedit()=0;

};



#endif // CMDDISPLAY_H
