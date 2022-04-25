#include<iostream>
using namespace std;
int main()
{
    float input1;
    float input2;
    char c;
    float equal;
    cout << "Enter the value of input 1 :: " << endl;
        cin >> input1;

        cout << "Choose what you want to do with both the input:: " << endl;
        cout << "This is a simple calculator that is why you can perform only this function + - * / :: " << endl;
        cin >> c;
        cout << "Enter the value of input 2 :: " << endl;
        cin >> input2;
        
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
    
    cout<<"The final calculated value is :: "<<equal;
return 0;
}
