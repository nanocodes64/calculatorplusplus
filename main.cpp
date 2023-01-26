#include <iostream>
#include <string>
int main()
{
    std::cout << "x for exit, +-/*" << "\n";
    bool running = true;
    while (running)
    {
        char choice;
        float a;
        float b;
        std::cout << "choice>";
        std::cin >> choice;
        if (choice=='x'){running = false;break;}
        if (choice != '+' && choice != '-' && choice != '/' && choice != '*' && choice != 'x'){continue;}
        std::cout << "1:";
        std::cin >> a;
        std::cout << "2:";
        std::cin >> b;
        switch (choice)
        {
            case '+':
                std::cout << "result:" << a + b << "\n";
                break;
            case '-':
                std::cout << "result:" << a - b << "\n";
                break;
            case '*':
                std::cout << "result:" << a * b << "\n";
                break;
            case '/':
                std::cout <<"result:" << a / b << "\n";
                break;
            default: 
                std::cout << "invalid" << "\n";

            
        }
    }
    return 0;
}
