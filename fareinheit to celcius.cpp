#include <iostream>
using namespace std;
double* temp(double* fptr)
{
    double celcius=(*fptr-32.0)*(5.0/9.0);
    return new double (celcius);
}
int main()
{
    double* fptr=new double;
    double *ptr;
    cout<<"enter a temperature in farenheit: "<<endl;
    cin>>*fptr;
    ptr=temp(fptr);
    cout<<"result: "<<*ptr;
}

