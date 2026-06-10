#include <iostream>
#include <cmath>

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

int main(void){
    Scientific calc;
    
}
