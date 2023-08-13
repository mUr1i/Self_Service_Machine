#include "cmdDisplay.h"
#include <iostream>


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


