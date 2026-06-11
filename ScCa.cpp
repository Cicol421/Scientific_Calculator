#include <iomanip>
#include <iostream>
#include <cmath>
#include <windows.h>


class Calculator{
    public:
        double add(double x, double y){
            return (x + y);
        }
        double sub(double x, double y){
            return (x - y);
        }
        double mul(double x, double y){
            return (x * y);
        }
        double div(double x, double y){
            if(y == 0){
                return NULL;
            } else{
                return (x / y);
            }
        }
        double pow(double x, double y){
            return (std::pow(x, y));
        }
        double roo(double x, double y){
            if(y == 2){
                return (std::sqrt(x));
            } else if(y == 3){
                return (std::cbrt(x));
            } else{
                return (std::pow(x, (1.0 / y)));
            }
        }
};
class Scientific : public Calculator{
    public:
        double ln (double x){
            return (std::log(x));
        }
        double l10(double x){
            return (std::log10(x));
        }
        double log (double x, double y){
            return (std::log(x) / std::log(y));
        }
};
int MENU(void){
    int option = -1;

    std::cout << "#################### Scientific Calculator ####################" << '\n';
    std::cout << "1.- Addition                    (Suma)                         " << '\n';
    std::cout << "2.- Substraction                (Resta)                        " << '\n';
    std::cout << "3.- Multiplication              (Multiplicación)               " << '\n';
    std::cout << "4.- Division                    (División)                     " << '\n';
    std::cout << "5.- Power                       (Potencia)                     " << '\n';
    std::cout << "6.- Root                        (Raíz)                         " << '\n';
    std::cout << "7.- Natural Logarithm           (Logaritmo natural)            " << '\n';
    std::cout << "8.- Base-10 Logarithm           (Logaritmo en base 10)         " << '\n';
    std::cout << "9.- Lorarithm                   (Logaritmo)                    " << '\n';

    return option;
}

int main(void){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    
    int opt = MENU();
}
