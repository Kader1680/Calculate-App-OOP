using namespace std;
#include <iostream>


class Calculate{
private:
    float number, result;
public:
    Calculate(){
        number = 0;
        result = 0;
    }

    void setNumber(int n){
        number = n;
    }
    void add(int add){
        result = result + add;
    }
    void substract(int add){
        result = result - add;
    }
    void multible(int add){
        result = result * add;
    }
    void dividtion(int add){
        result = result / add;
    }
    void printresult(){
        cout<<"this is result => "<<result<<endl;
    }   };



int main()
{
    Calculate Calculator1;
    // Calculator1.setNumber(10);
    Calculator1.add(10);
    Calculator1.printresult();
    Calculator1.add(100);
    Calculator1.printresult();
    Calculator1.substract(20);
    Calculator1.printresult();
    // Calculator1.add(100);
    // Calculator1.printresult();
    // Calculator1.add(100);
    // Calculator1.printresult();
    return 0;
}
