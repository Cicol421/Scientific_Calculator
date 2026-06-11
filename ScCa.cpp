#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
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
                return std::numeric_limits<double>::quiet_NaN();
            } else{
                return (x / y);
            }
        }
        double pow(double x, double y){
            if(x == 0 && y == 0){
                return std::numeric_limits<double>::quiet_NaN();
            } else{
                return (std::pow(x, y));
            }
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
        double log(double x, double y){
            return (std::log(x) / std::log(y));
        }
        
        double sin (double x){
            return (std::sin(x));
        }
        double cos (double x){
            return (std::cos(x));
        }
        double tan (double x){
            return (std::tan(x));
        }
        double asin(double x){
            return (std::asin(x));
        }
        double acos(double x){
            return (std::acos(x));
        }
        double atan(double x){
            return (std::atan(x));
        }
        double sinh(double x){
            return (std::sinh(x));
        }
        double cosh(double x){
            return (std::cosh(x));
        }
        double tanh(double x){
            return (std::tanh(x));
        }

        double abs(double x){
            return (std::abs(x));
        }
        unsigned long long factorial(unsigned int x){
            unsigned long long z = 1;

            for (unsigned int i = 2; i <= x; i++){
                z = z * i;
            }
            return z;
        }
        double percentage(double x, double y){
            return ((x / 100) * y);
        }
};
int MENU(void){
    int option = -1;

    std::cout << "#################### Scientific Calculator ####################" << '\n';
    std::cout << "1.-  Addition                   (Suma)                         " << '\n';
    std::cout << "2.-  Substraction               (Resta)                        " << '\n';
    std::cout << "3.-  Multiplication             (Multiplicación)               " << '\n';
    std::cout << "4.-  Division                   (División)                     " << '\n';
    std::cout << "5.-  Power                      (Potencia)                     " << '\n';
    std::cout << "6.-  Root                       (Raíz)                         " << '\n';
    std::cout << "7.-  Natural Logarithm          (Logaritmo natural)            " << '\n';
    std::cout << "8.-  Base-10 Logarithm          (Logaritmo en base 10)         " << '\n';
    std::cout << "9.-  Lorarithm                  (Logaritmo)                    " << '\n';
    std::cout << "10.- Sine                       (Seno)                         " << '\n';
    std::cout << "11.- Cosine                     (Coseno)                       " << '\n';
    std::cout << "12.- Tangent                    (Tangente)                     " << '\n';
    std::cout << "13.- Arcsine                    (Arcoseno)                     " << '\n';
    std::cout << "14.- Arccos                     (Arcocoseno)                   " << '\n';
    std::cout << "15.- Arctan                     (Arcotangente)                 " << '\n';
    std::cout << "16.- Hiperbolic Sine            (Seno hiperbólico)             " << '\n';
    std::cout << "17.- Hiperbolic Cosine          (Coseno hiperbólico)           " << '\n';
    std::cout << "18.- Hiperbolic Tangent         (Tangente hiperbólico)         " << '\n';
    std::cout << "19.- Absolute Value             (Valor absoluto)               " << '\n';
    std::cout << "20.- Factorial                  (Factorial)                    " << '\n';
    std::cout << "21.- Percentage                 (Porcentaje)                   " << '\n';
    std::cout << '\n' << '\n';

    std::cout << "Select one (1 - 21): ";
    std::cin  >> option;

    return option;
}

int main(void){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    
    int opt = MENU();
}
