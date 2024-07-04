#include <iostream>
using namespace std;
int main()

{
    int a,b,c,i;
    while(a<5)
    {


    cout<<"enter 1 for addition"<<endl;
    cout<<"enter 2 for subtraction"<<endl;
    cout<<"enter 3 for multiplication"<<endl;
    cout<<"enter 4 for division"<<endl;
    cout<<"enter 5 for exit"<<endl;
    cin>>a;
    switch (a)
    {
    case 1:

        cout<<"enter first number"<<endl;
        cin>>b;
        cout<<"enter second number"<<endl;
        cin>>c;
        cout<<"addition of two numbers is "<< b+c <<endl;

    break;

    case 2:

        cout<<"enter first number"<<endl;
        cin>>b;
        cout<<"enter second number"<<endl;
        cin>>c;
        cout<<"subtraction of two numbers is "<< b-c <<endl;

    break;
    case 3:

        cout<<"enter first number"<<endl;
        cin>>b;
        cout<<"enter second number"<<endl;
        cin>>c;
        cout<<"multiplication of two numbers is "<< b*c <<endl;

    break;
    case 4:

        cout<<"enter first number"<<endl;
        cin>>b;
        cout<<"enter second number"<<endl;
        cin>>c;
        cout<<"division of two numbers is "<< (float)b/c <<endl;

    break;
    }}
return 0;
}
