#include <iostream>
#include <cmath>
using namespace std;
class simple_calculator
{
public:
    float input1;
    float input2;
    char c;
    float equal;
    void set_sim_value()
    {
        cout << "Enter the value of input 1 :: " << endl;
        cin >> input1;

        cout << "Choose what you want to do with both the input:: " << endl;
        cout << "This is a simple calculator that is why you can perform only this function + - * / :: " << endl;
        cin >> c;
        cout << "Enter the value of input 2 :: " << endl;
        cin >> input2;
    }
    void calculate()
    {
        if (c == '+')
        {
            equal = input1 + input2;
        }
        else if (c == '-')
        {
            equal = input1 - input2;
        }
        else if (c == '*')
        {
            equal = input1 * input2;
        }
        else if (c == '/')
        {
            equal = input1 / input2;
        }
        else
        {
            cout << "ERROR" << endl;
        }
    }
    void enter()
    {
        cout << "The calculated value of " << input1 << c << input2 << " is " << equal << endl;
    }
};
class scienctific_calculator
{
public:
    int c;
    float x, y;
    void set_sci_value()
    {
        cout << "Choose  your function and enter. Your options are given below :: " << endl;
        cout << " " << endl;
        cout << "(1) Sin(x) (2) Cos(x) (3) Tan(x) \n(4) Sin Inverse(x) (5) Cos Inverse(x) (6) Tan Inverse(x)" << endl;
        cout << "(7) Log(x) (8) Exponancial(x) (9) Power(x,y) \n(10) Square root(x) " << endl;
        cin >> c;
        cout << " " << endl;
    }
    void calc()
    {
        switch (c)
        {
        case 1:
            cout << "Enter the input value of x:: " << endl;
            cin >> x;
            cout << "The value of Sin(" << x << ") = " << sin(x) << endl;
            break;
        case 2:
            cout << "Enter the input value of x:: " << endl;
            cin >> x;
            cout << "The value of Cos(" << x << ") = " << cos(x) << endl;
            break;
        case 3:
            cout << "Enter the input value of x:: " << endl;
            cin >> x;
            cout << "The value of Tan(" << x << ") = " << tan(x) << endl;
            break;
        case 4:
            cout << "Enter the input value of x:: " << endl;
            cin >> x;
            cout << "The value of asin(" << x << ") = " << asin(x) << endl;
            break;
        case 5:
            cout << "Enter the input value of x:: " << endl;
            cin >> x;
            cout << "The value of acos(" << x << ") = " << acos(x) << endl;
            break;
        case 6:
            cout << "Enter the input value of x:: " << endl;
            cin >> x;
            cout << "The value of atan(" << x << ") = " << atan(x) << endl;
            break;
        case 7:
            cout << "Enter the input value of x:: " << endl;
            cin >> x;
            cout << "The value of log(" << x << ") = " << log(x) << endl;
            break;
        case 8:
            cout << "Enter the input value of x:: " << endl;
            cin >> x;
            cout << "The value of exp(" << x << ") = " << exp(x) << endl;
            break;
        case 9:
            cout << "Enter the input value of x:: " << endl;
            cin >> x;
            int y;
            cout << "Enter the power :: " << endl;
            cin >> y;
            cout << "The value of pow(" << x << ") = " << pow(x, y) << endl;
            break;
        case 10:
            cout << "Enter the input value of x:: " << endl;
            cin >> x;
            cout << "The value of sqrt(" << x << ") = " << sqrt(x) << endl;
            break;
        }
    }
};
class common_calculator : public simple_calculator, public scienctific_calculator
{
};
int main()
{

    cout << "***************************************" << endl;
    cout << "***************************************" << endl;
    cout << "       HI I AM YOUR CALCULATOR         " << endl;
    cout << "***************************************" << endl;
    cout << "***************************************" << endl;
    cout << " " << endl;

    scienctific_calculator calc1;

    calc1.set_sci_value();
    calc1.calc();

    simple_calculator calc2;

    calc2.set_sim_value();
    calc2.calculate();
    calc2.enter();

    common_calculator calc3;

    calc3.set_sci_value();
    calc3.calc();

    cout << " " << endl;
    cout << "        THANK YOU FOR USING ME         " << endl;
    return 0;
}
