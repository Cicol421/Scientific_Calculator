#include <iostream>
#include <cmath>

class Calculator{
    public:
        int add(double x, double y){
            return (x + y);
        }
        int sub(double x, double y){
            return (x - y);
        }
        int mul(double x, double y){
            return (x * y);
        }
        int div(double x, double y){
            if(x == 0){
                return 0;
            } else if(y == 0){
                return -1;
            } else{
                return (x / y);
            }
        }
        int pow(double x, double y){
            return (pow(x, y));
        }
        int roo(double x, double y){
            if(y == 2){
                return (sqrt(x));
            } else if(y == 3){
                return (cbrt(x));
            } else{
                return (pow(x, (1.0 / y)));
            }
        }
};

int main(void){

}
