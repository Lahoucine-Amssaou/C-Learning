#include <iostream>

int main() {
    float First_number;
    float Second_number;
    char Operation_type;

    std::cout << "Hi.Type your first number : ";
    std::cin >> First_number;

    std::cout << "What kind of operation ? (+,-,*,/) : ";
    std::cin >> Operation_type;

    std::cout << "Type your second number :";
    std::cin >> Second_number;
    
    if (Operation_type == '+')
    {
        std::cout << First_number + Second_number;
    }
    else if (Operation_type == '-')
    {
        std::cout << First_number - Second_number;
    }
    else if (Operation_type == '*')
    {
        std::cout << First_number * Second_number;
    }
    else if (Operation_type == '/')
    {
        if (Second_number != 0)
        {
            std::cout << First_number / Second_number;
        }
        else
        {
            std::cout << "You can't divide by 0";
        }
    }
    else
    {
        std::cout << "Incompatibale operation !";
    }
    return 0;
}
