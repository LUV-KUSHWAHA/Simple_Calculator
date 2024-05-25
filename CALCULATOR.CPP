#include <iostream>
using namespace std;

class calculator
{
    float n1,n2;
    public:
    void getdata()
    {
        cout << "Enter two number: " << endl;
        cin >> n1 >> n2 ;
    }
    void getfdata()
    {
        cout << "Enter a number more than zero: " << endl;
        cin >> n1 ;
    }
    float add()
    {
        return n1+n2;
    }
    float sub()
    {
        return n1-n2;
    }
    float mul()
    {
        return n1*n2;
    }
    float div()
    {
        return n1/n2;
    }
    int rem()
    {
        int c = (int) n1 % (int) n2 ;
        return c;
    }
    float fact()
    {
        float f=1;
        for(int i=2;i<=n1;i++)
            f*=i;
        return f;
    }
};

int main()
{
    int n;
    char ch;
    calculator c1;
    do
    {
    cout << "What do you want to do ?" << endl;
    cout << "1. Add\t2. Sub\t3. Mul\n4. Div\t5. Rem\t6. Fact" << endl;
    cin >> n;
    switch(n)
    {
        case 1:
        c1.getdata();
        cout << "The sum is " << c1.add() << endl;
        break;

        case 2:
        c1.getdata();
        cout << "The difference is "<< c1.sub() << endl;
        break;

        case 3:
        c1.getdata();
        cout << "The product is " << c1.mul() << endl;
        break;

        case 4:
        c1.getdata();
        cout << "The quotient is " << c1.div() << endl;
        break;

        case 5:
        c1.getdata();
        cout << "The remainder is " << c1.rem() << endl;
        break;

        case 6:
        c1.getfdata();
        cout << "The factorial is " << c1.fact() << endl;
        break;

        default:
        cout << "Invalid choice !" << endl;
    }
    cout << "Do you want to continue ?" << endl;
    cout << "Enter y for yes !" << endl;
    cin >> ch;
    } while (ch == 'y');
    
    
    return 0;
}