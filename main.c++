using namespace std;
#include <iostream>


class Calculate{
    private:
        float number1, number2;
        double result;
    public:
        Calculate(){
            number1 = 0;
            number2 = 0;
            result = 0;
        }
        void add(float number1, float number2){
            result = number1 + number2;
        }
        void substract(float number1, float number2){
            result = number1 - number2;
        }
        void multible(float number1, float number2){
            result = number1 * number2;
        }
        void dividtion(float number1, float number2){
            result = number1 / number2;

            // if (add == 0)
            // {
            //     add = 1;
            //     result = result / add;
            // }else{
            //     result = result / add;
            // }
            
        }
        void printresult(){
            cout<<"this is result => "<<result<<endl;
        }   
    
};



int main()
{

    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"-----------------------Welcome To Caluclator With OOP-----------------------"<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"-------------------------------Help To Use----------------------------------"<<endl;
    cout<<"--------------------------    [1] Add Action -------------------------------"<<endl;
    cout<<"--------------------------    [2] Sibstraction Action ----------------------"<<endl;
    cout<<"--------------------------    [3] Multiple Action --------------------------"<<endl;
    cout<<"--------------------------    [4] Division Action --------------------------"<<endl;
    cout<<"--------------------------    [5] Clear Action -----------------------------"<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    float n1, n2;
    cout<<"Enter Your Number ";
    cin>>n1;
    cout<<endl;
    cout<<"Enter Your Number ";
    cin>>n2;
    cout<<endl;
    cout<<"Enter Your Number "<<endl;
    cout<<"Enter number of Help "<<endl;
    int choise;
    cin>>choise;
    Calculate Calculator1;

    switch (choise)

    {
        case 1:

            Calculator1.add(n1, n2);
            Calculator1.printresult();
            break;
        case 2:
            Calculator1.substract(n1, n2);
            Calculator1.printresult();
            break;
        case 3:
            Calculator1.multible(n1, n2);
            Calculator1.printresult();
            break;
        case 4:
            Calculator1.dividtion(n1, n2);
            Calculator1.printresult();
            break;
        default:
            cout<<"sorry this number don't exist in help option"<<endl;
            cout<<"please enter number from 1 to 4";
            break;
    }
    
    // Calculator1.add(number);
    // Calculator1.printresult();
    
    // Calculator1.dividtion(number);
    // Calculator1.printresult();
    // Calculator1.dividtion(number);
    // Calculator1.printresult();
    // Calculator1.multible(number);
    // Calculator1.printresult();
    return 0;
}
