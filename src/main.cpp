#include <iostream>

#include "App.hpp"


int main(int argc, char* argv[]) {

    App app(100 , 100);

    try
    {
        app.run();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}