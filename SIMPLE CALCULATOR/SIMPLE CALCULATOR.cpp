#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Input Two Number:"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl<<"What do you want?"<<endl;
    int x;
    cin>>x;
    switch(x)
    {
     case 1:
        cout<<"Addition of two number is:"<<a+b<<endl;
        break;

    case 2:
        cout<<"Subtraction of two number is:"<<a-b<<endl;
        break;
    case 3:
        cout<<"Multiplication of two number is:"<<a*b<<endl;
        break;
    case 4:
        cout<<"Division of two number is:"<<(double)a/b<<endl;
        break;
        }
}
