#include <iostream>

class Calculator{
    public:
        int x;
        int y;

        int add(int x, int y){
            return (x + y);
        }
        int sub(int x, int y){
            return (x - y);
        }
        int mul(int x, int y){
            return (x * y);
        }
        int div(int x, int y){
            if(x == 0){
                return 0;
            } else if(y == 0){
                return -1;
            }
        }
};

int main(void){

}
