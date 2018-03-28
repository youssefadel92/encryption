#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    double num; //value input by the user
    double factorial=1;
    double exponontial=1; //stores the answer
    cout << "enter real number to calculater the approxiamte value of e^x:";
    cin >> num;
    cout << "Displaying all values from x and entering into the equation" << endl;
    for(int i=1;i<=100;++i)
    {
        exponontial += pow(num,i)/factorial; //calculation for exponential
        factorial*=i+1;  //updating the factorial
        cout<<exponontial<<"\t";
        if(i%10==0)
            cout<<endl;
    }
    cout << "The calculated value for counter = 100 is "<<exponontial<<endl;
    cout << "The Certain value is " << exp(num) << endl;
    return 0;
}
