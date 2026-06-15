#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <windows.h>


class Calculator{
    public:
        double add(long double x, long double y){
            return (x + y);
        }
        double sub(long double x, long double y){
            return (x - y);
        }
        double mul(long double x, long double y){
            return (x * y);
        }
        double div(long double x, long double y){
            if(y == 0){
                return std::numeric_limits<double>::quiet_NaN();
            } else{
                return (x / y);
            }
        }
        double pow(long double x, long double y){
            if(x == 0 && y == 0){
                return std::numeric_limits<double>::quiet_NaN();
            } else{
                return (std::pow(x, y));
            }
        }
        double roo(long double x, long double y){
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
        double ln  (long double x){
            return (std::log(x));
        }
        double l10 (long double x){
            return (std::log10(x));
        }
        double log (long double x, long double y){
            return (std::log(x) / std::log(y));
        }    
        double sin (long double x){
            return (std::sin(x));
        }
        double cos (long double x){
            return (std::cos(x));
        }
        double tan (long double x){
            return (std::tan(x));
        }
        double asin(long double x){
            return (std::asin(x));
        }
        double acos(long double x){
            return (std::acos(x));
        }
        double atan(long double x){
            return (std::atan(x));
        }
        double sinh(long double x){
            return (std::sinh(x));
        }
        double cosh(long double x){
            return (std::cosh(x));
        }
        double tanh(long double x){
            return (std::tanh(x));
        }
        double abs (long double x){
            return (std::abs(x));
        }
        unsigned long long factorial(unsigned int x){
            unsigned long long z = 1;

            for (unsigned int i = 2; i <= x; i++){
                z = z * i;
            }
            return z;
        }
        double percentage(long double x, long double y){
            return ((x / 100) * y);
        }
};
int MENU(void){
    int option;

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

    std::cout << '\n';

    double a;
    double b;
    double result;
    Scientific calculator;

    switch (opt){
        case 1:
            std::cout << "Enter the 1st addend: ";
            std::cin  >> a;

            std::cout << "Enter the 2nd addend: ";
            std::cin  >> b;

            result = calculator.add(a, b);

            std::cout << '\n' << '\n' << '\n';
            std::cout << "Sum: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 2:
            std::cout << "Enter the minuend: ";
            std::cin  >> a;

            std::cout << "Enter the subtrahend: ";
            std::cin  >> b;

            result = calculator.sub(a, b);

            std::cout << '\n' << '\n' << '\n';
            std::cout << "Difference: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 3:
            std::cout << "Enter the multiplicand: ";
            std::cin  >> a;

            std::cout << "Enter the multplier: ";
            std::cin  >> b;

            result = calculator.mul(a, b);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Product: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 4:
            std::cout << "Enter the dividend: ";
            std::cin  >> a;

            std::cout << "Enter the divisor: ";
            std::cin  >> b;

            result = calculator.div(a, b);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Quotient: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 5:
            std::cout << "Enter the base: ";
            std::cin  >> a;

            std::cout << "Enter the exponent: ";
            std::cin  >> b;

            result = calculator.pow(a, b);

            std::cout << '\n' << '\n' << '\n';
            std::cout << "Power: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 6:
            std::cout << "Enter the radicand: ";
            std::cin  >> a;

            std::cout << "Enter the exponent: ";
            std::cin  >> b;

            result = calculator.roo(a, b);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Root: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 7:
            std::cout << "Enter the argument: ";
            std::cin  >> a;

            result = calculator.ln(a);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Logarithm: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 8:
            std::cout << "Enter the argument: ";
            std::cin  >> a;

            result = calculator.l10(a);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Logarithm: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 9:
            std::cout << "Enter the argument: ";
            std::cin  >> a;

            std::cout << "Enter the base: ";
            std::cin  >> b;

            result = calculator.log(a, b);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Logarithm: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 10:
            std::cout << "Enter the angle: ";
            std::cin  >> a;

            result = calculator.sin(a);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Result: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 11:
            std::cout << "Enter the angle: ";
            std::cin  >> a;

            result = calculator.cos(a);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Result: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 12:
            std::cout << "Enter the angle: ";
            std::cin  >> a;

            result = calculator.tan(a);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Result: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 13:
            std::cout << "Enter the angle: ";
            std::cin  >> a;

            result = calculator.asin(a);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Angle: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 14:
            std::cout << "Enter the angle: ";
            std::cin  >> a;

            result = calculator.acos(a);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Angle: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 15:
            std::cout << "Enter the angle: ";
            std::cin  >> a;

            result = calculator.atan(a);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Angle: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 16:
            std::cout << "Enter the argument: ";
            std::cin  >> a;

            result = calculator.sinh(a);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Result: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 17:
            std::cout << "Enter the argument: ";
            std::cin  >> a;

            result = calculator.cosh(a);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Result: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 18:
            std::cout << "Enter the argument: ";
            std::cin  >> a;

            result = calculator.tanh(a);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Result: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 19:
            std::cout << "Enter the argument: ";
            std::cin  >> a;

            result = calculator.abs(a);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Absolute value: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 20:
            std::cout << "Enter the argument: ";
            std::cin  >> a;

            result = calculator.factorial(a);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Factorial: " << std::fixed << std::setprecision(10) << result << '\n';

            break;
        case 21:
            std::cout << "Enter the argument: ";
            std::cin  >> a;

            std::cout << "Enter the rate: ";
            std::cin  >> b;

            result = calculator.percentage(a, b);
            
            std::cout << '\n' << '\n' << '\n';
            std::cout << "Percentage: " << std::fixed << std::setprecision(10) << result << "%" << '\n';

            break;
        default:
            std::cout << "###############################################################";
            return 1;
    }

        std::cout << "###############################################################";
    
    
        return 0;
}
